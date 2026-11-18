#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Guid.h"

namespace BinaryTracingFramework::Serialize { class BaseArchive; }
namespace BinaryTracingFramework::Serialize { class ISerializableObject; }

#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_GETTYPEGUID_OFFSET UNITYSDK_OFFSET(0x991E10)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_GET_SERIALIZEABLESUCCESS_OFFSET UNITYSDK_OFFSET(0x3E3C90)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_RESET_OFFSET UNITYSDK_OFFSET(0x991E00)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x991DF0)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_SET_SERIALIZEABLESUCCESS_OFFSET UNITYSDK_OFFSET(0x3E3C80)

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int SerializeObjectRef_TypeDefinitionIndex = 34158;

	struct alignas(8) SerializeObjectRef
	{
		::BinaryTracingFramework::Serialize::ISerializableObject* Obj; // 0x10
		::System::Boolean _SerializeableSuccess_k__BackingField; // 0x18

		::System::Boolean get_SerializeableSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_GET_SERIALIZEABLESUCCESS_OFFSET))(this);
		}

		::System::Void set_SerializeableSuccess(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_SET_SERIALIZEABLESUCCESS_OFFSET))(this, value);
		}

		::System::Void Serialize(::BinaryTracingFramework::Serialize::BaseArchive* archive)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingFramework::Serialize::BaseArchive*))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_SERIALIZE_OFFSET))(this, archive);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_RESET_OFFSET))(this);
		}

		::System::Guid GetTypeGuid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_GETTYPEGUID_OFFSET))(this);
		}
	};
}
