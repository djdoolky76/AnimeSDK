#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class DebugContext; }
namespace Sirenix::Serialization { class ISerializationPolicy; }

#define SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_GET_DEBUGCONTEXT_OFFSET UNITYSDK_OFFSET(0x2001A8E0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_GET_SERIALIZATIONPOLICY_OFFSET UNITYSDK_OFFSET(0x2001A700)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x2001A620)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_SET_DEBUGCONTEXT_OFFSET UNITYSDK_OFFSET(0x2001AA10)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_SET_SERIALIZATIONPOLICY_OFFSET UNITYSDK_OFFSET(0x2001A830)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x2001A5F0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SerializationConfig_TypeDefinitionIndex = 7541;

	class SerializationConfig : public ::System::Object
	{
	public:
		::Sirenix::Serialization::DebugContext* debugContext; // 0x10
		::System::Object* LOCK; // 0x18
		::Sirenix::Serialization::ISerializationPolicy* serializationPolicy; // 0x20
		::System::Boolean SharedDictionaryComparer; // 0x28
		::System::Boolean AllowDeserializeInvalidData; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG__CTOR_OFFSET))(this);
		}

		::Sirenix::Serialization::ISerializationPolicy* get_SerializationPolicy()
		{
			return ((::Sirenix::Serialization::ISerializationPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_GET_SERIALIZATIONPOLICY_OFFSET))(this);
		}

		::System::Void set_SerializationPolicy(::Sirenix::Serialization::ISerializationPolicy* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::ISerializationPolicy*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_SET_SERIALIZATIONPOLICY_OFFSET))(this, value);
		}

		::Sirenix::Serialization::DebugContext* get_DebugContext()
		{
			return ((::Sirenix::Serialization::DebugContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_GET_DEBUGCONTEXT_OFFSET))(this);
		}

		::System::Void set_DebugContext(::Sirenix::Serialization::DebugContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::DebugContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_SET_DEBUGCONTEXT_OFFSET))(this, value);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_RESETTODEFAULT_OFFSET))(this);
		}
	};
}
