#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EFDFD8D59E1B8215_B2E35AC2C638E7C5.h"

namespace System { class String; }

#define EFDFD8D59E1B8215_CONTROLITEMJSON_TOLAYOUT_OFFSET UNITYSDK_OFFSET(0x3FC4E10)
#define EFDFD8D59E1B8215_CONTROLITEMJSON__CTOR_OFFSET UNITYSDK_OFFSET(0x3FC5530)

inline static constexpr unsigned int EFDFD8D59E1B8215_ControlItemJson_TypeDefinitionIndex = 14397;

class EFDFD8D59E1B8215_ControlItemJson : public ::System::Object
{
public:
	::System::String* name; // 0x10
	::System::String* layout; // 0x18
	::System::String* variants; // 0x20
	::System::String* usage; // 0x28
	::System::String* alias; // 0x30
	::System::String* useStateFrom; // 0x38
	::System::UInt32 offset; // 0x40
	::System::UInt32 bit; // 0x44
	::System::UInt32 sizeInBits; // 0x48
	::System::Byte _padding0[0x4];
	::System::String* format; // 0x50
	::System::Int32 arraySize; // 0x58
	::System::Byte _padding1[0x4];
	::Il2CppArray<::System::String*>* usages; // 0x60
	::Il2CppArray<::System::String*>* aliases; // 0x68
	::System::String* parameters; // 0x70
	::System::String* processors; // 0x78
	::System::String* displayName; // 0x80
	::System::String* shortDisplayName; // 0x88
	::System::Boolean noisy; // 0x90
	::System::Boolean dontReset; // 0x91
	::System::Boolean synthetic; // 0x92
	::System::Byte _padding2[0x5];
	::System::String* defaultState; // 0x98
	::System::String* minValue; // 0xA0
	::System::String* maxValue; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_CONTROLITEMJSON__CTOR_OFFSET))(this);
	}

	::EFDFD8D59E1B8215_B2E35AC2C638E7C5 ToLayout()
	{
		return ((::EFDFD8D59E1B8215_B2E35AC2C638E7C5(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_CONTROLITEMJSON_TOLAYOUT_OFFSET))(this);
	}
};
