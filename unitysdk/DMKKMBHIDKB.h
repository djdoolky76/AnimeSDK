#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DMKKMBHIDKB__CTOR_OFFSET UNITYSDK_OFFSET(0x12BCCFB0)

inline static constexpr unsigned int DMKKMBHIDKB_TypeDefinitionIndex = 88198;

class DMKKMBHIDKB : public ::System::Object
{
public:
	::System::Int32 LMOCMIJGNGO; // 0x10
	::System::Int32 PIEAKILBLHG; // 0x14
	::System::Int32 DKHKPMOOHPH; // 0x18
	::System::Int32 OOGLHLBACBD; // 0x1C
	::System::Boolean CGEMLHFPINP; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 FAJIFEIDOJB; // 0x24
	::System::Int32 NCMODBBKIAH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKKMBHIDKB__CTOR_OFFSET))(this);
	}
};
