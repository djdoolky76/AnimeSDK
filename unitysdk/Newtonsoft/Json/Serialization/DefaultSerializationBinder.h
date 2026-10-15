#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/SerializationBinder.h"
#include "unitysdk/Newtonsoft/Json/Serialization/DefaultSerializationBinder_TypeNameKey.h"
namespace Newtonsoft::Json::Serialization { class DefaultSerializationBinder; }
namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class ThreadSafeStore_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_BINDTOTYPE_OFFSET UNITYSDK_OFFSET(0x1C3B0A40)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3B0B40)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B0AC0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_GETTYPEFROMTYPENAMEKEY_OFFSET UNITYSDK_OFFSET(0x1C3B0640)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultSerializationBinder_TypeDefinitionIndex = 9714;

	class DefaultSerializationBinder : public ::System::Runtime::Serialization::SerializationBinder
	{
	public:
		::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*, ::System::Type*>* _typeCache; // 0x10
		static ::Newtonsoft::Json::Serialization::DefaultSerializationBinder** StaticGet_Instance()
		{
			return (::Newtonsoft::Json::Serialization::DefaultSerializationBinder**)UnitySDK::FromName("Newtonsoft.Json.Serialization", "DefaultSerializationBinder")->GetStaticField(0x32B80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_CCTOR_OFFSET))();
		}

		static ::System::Type* GetTypeFromTypeNameKey(::Newtonsoft::Json::Serialization::DefaultSerializationBinder_TypeNameKey a1)
		{
			return ((::System::Type*(*)(::Newtonsoft::Json::Serialization::DefaultSerializationBinder_TypeNameKey))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_GETTYPEFROMTYPENAMEKEY_OFFSET))(a1);
		}

		::System::Type* BindToType(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_BINDTOTYPE_OFFSET))(this, a1, a2);
		}

	};
}
