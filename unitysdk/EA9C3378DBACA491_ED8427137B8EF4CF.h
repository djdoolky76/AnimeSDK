#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EA9C3378DBACA491_ED8427137B8EF4CF_FA1AB4ADC44A18C2_OFFSET UNITYSDK_OFFSET(0x22BC5F0)
#define EA9C3378DBACA491_ED8427137B8EF4CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EA9C3378DBACA491_ED8427137B8EF4CF_TypeDefinitionIndex = 7136;

class EA9C3378DBACA491_ED8427137B8EF4CF : public ::System::Object
{
public:
	::System::Int32 E93BE0F9CF99306C; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* A6025737A57E5C79; // 0x18
	::System::String* ECC2789B6C0C0D26; // 0x20
	::System::String* F5BF4E7C0FAC037C; // 0x28
	::System::String* F41133D1EC937379; // 0x30
	::System::String* E26B20B4C7380143; // 0x38
	::System::String* F1F13393E9FAD9E1; // 0x40
	::System::String* A67F3983754497F4; // 0x48
	::System::String* F258E36C00C06AD2; // 0x50
	::System::String* B7628A4A76332A40; // 0x58
	::System::String* E9F40856BA470283; // 0x60

	::System::String* FA1AB4ADC44A18C2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EA9C3378DBACA491_ED8427137B8EF4CF_FA1AB4ADC44A18C2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA9C3378DBACA491_ED8427137B8EF4CF__CTOR_OFFSET))(this);
	}
};
