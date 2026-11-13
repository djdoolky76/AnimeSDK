#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Utilities/ReflectionDelegateFactory.h"
namespace Newtonsoft::Json::Serialization { template <typename T> class ObjectConstructor_1; }
namespace Newtonsoft::Json::Utilities { class LateBoundReflectionDelegateFactory; }
namespace Newtonsoft::Json::Utilities { class ReflectionDelegateFactory; }
namespace System { class Object; }
namespace System::Reflection { class MethodBase; }

#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CCTOR_OFFSET UNITYSDK_OFFSET(0x18456F50)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATEPARAMETERIZEDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x184198A0)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0x18456F40)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18456F00)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int LateBoundReflectionDelegateFactory_TypeDefinitionIndex = 9644;

	class LateBoundReflectionDelegateFactory : public ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory
	{
	public:
		static ::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory** StaticGet__instance()
		{
			return (::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory**)UnitySDK::FromName("Newtonsoft.Json.Utilities", "LateBoundReflectionDelegateFactory")->GetStaticField(0x2D200);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CCTOR_OFFSET))();
		}

		static ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* get_Instance()
		{
			return ((::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_GET_INSTANCE_OFFSET))();
		}

		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* CreateParameterizedConstructor(::System::Reflection::MethodBase* a1)
		{
			return ((::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*(*)(::PVOID, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATEPARAMETERIZEDCONSTRUCTOR_OFFSET))(this, a1);
		}

	};
}
