#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define UNITYENGINE_GCFREECLOSURE_SVALUE_INTERNALVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C6E960)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_INTERNALVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C6E980)

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int SValue_InternalValue_TypeDefinitionIndex = 4468;

	struct alignas(4) SValue_InternalValue
	{
		::System::Boolean _bool; // 0x10
		::System::SByte _int8_; // 0x10
		::System::Byte _uint8_; // 0x10
		::System::Char _char; // 0x10
		::System::Int16 _int16_; // 0x10
		::System::UInt16 _uint16_; // 0x10
		::System::Int32 _int32_; // 0x10
		::System::UInt32 _uint32_; // 0x10
		::System::Int64 _int64_; // 0x10
		::System::UInt64 _uint64_; // 0x10
		::System::Single _single; // 0x10
		::System::Double _double; // 0x10
		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_INTERNALVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_INTERNALVALUE_GETHASHCODE_OFFSET))(this);
		}

	};
}
