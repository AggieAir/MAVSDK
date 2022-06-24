#pragma once

namespace mavsdk {

template<typename... Args> class CallbackListImpl;
template<typename... Args> class CallbackList;

class HandleTester;

/*
 * @brief A handle returned from subscribe which allows to unsubscribe again.
 */
template<typename... Args> class Handle {
public:
    Handle() = default;

private:
    explicit Handle(uint64_t id) : _id(id) {}
    uint64_t _id = 0;
    friend CallbackListImpl<Args...>;
    friend HandleTester;
};

} // namespace mavsdk
