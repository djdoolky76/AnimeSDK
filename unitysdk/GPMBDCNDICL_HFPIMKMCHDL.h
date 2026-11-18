#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/System/Object.h"

#define GPMBDCNDICL_HFPIMKMCHDL__CTOR_OFFSET UNITYSDK_OFFSET(0x1491F020)

inline static constexpr unsigned int GPMBDCNDICL_HFPIMKMCHDL_TypeDefinitionIndex = 76847;

class GPMBDCNDICL_HFPIMKMCHDL : public ::System::Object
{
public:
	::System::Boolean LKGGKONFEIC; // 0x10
	::System::Byte _padding0[0x3];
	::MoleMole::Config::MonsterFunctionType KGKBEAJJLLL; // 0x14
	::System::Int32 IIFMJFJOOCK; // 0x18
	::System::Single CDALFIJGDPB; // 0x1C
	::System::UInt32 FBIKDHGIMHO; // 0x20
	::System::UInt32 MIJJBPIGJNJ; // 0x24
	::MoleMole::Config::MonsterFunctionType NFBADDHCGBI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMBDCNDICL_HFPIMKMCHDL__CTOR_OFFSET))(this);
	}
};
