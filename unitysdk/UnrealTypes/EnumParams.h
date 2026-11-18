#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnrealTypes/EnumFlags.h"

namespace System { class String; }
namespace System { class Type; }

#define UNREALTYPES_ENUMPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A1250)

namespace UnrealTypes
{
	inline static constexpr unsigned int EnumParams_TypeDefinitionIndex = 27787;

	class EnumParams : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::Type* EnumType; // 0x18
		::Il2CppArray<::System::ValueTuple_2<::System::String*, ::System::Int64>>* EnumeratorParams; // 0x20
		::System::Type* UnderlyingType; // 0x28
		::System::String* Namespace; // 0x30
		::UnrealTypes::EnumFlags Flags; // 0x38
		::System::UInt32 TypeId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUMPARAMS__CTOR_OFFSET))(this);
		}
	};
}
