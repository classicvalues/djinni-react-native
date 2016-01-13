// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from listeners.djinni

#include "uses_single_language_listeners.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol DBUsesSingleLanguageListeners;

namespace djinni_generated {

class UsesSingleLanguageListeners
{
public:
    using CppType = std::shared_ptr<::testsuite::UsesSingleLanguageListeners>;
    using CppOptType = std::shared_ptr<::testsuite::UsesSingleLanguageListeners>;
    using ObjcType = id<DBUsesSingleLanguageListeners>;

    using Boxed = UsesSingleLanguageListeners;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated
