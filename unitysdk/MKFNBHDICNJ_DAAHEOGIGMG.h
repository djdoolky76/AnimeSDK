#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKFNBHDICNJ_DAAHEOGIGMG_DDCHOMGOJOF_OFFSET UNITYSDK_OFFSET(0x17D45B70)
#define MKFNBHDICNJ_DAAHEOGIGMG_OLCLFFLLILE_OFFSET UNITYSDK_OFFSET(0x17D45C80)
#define MKFNBHDICNJ_DAAHEOGIGMG_PDBMBJDLNCK_OFFSET UNITYSDK_OFFSET(0x17D45C60)
#define MKFNBHDICNJ_DAAHEOGIGMG__CTOR_OFFSET UNITYSDK_OFFSET(0x17D45B60)

inline static constexpr unsigned int MKFNBHDICNJ_DAAHEOGIGMG_TypeDefinitionIndex = 61352;

class MKFNBHDICNJ_DAAHEOGIGMG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* BAGIAAEILIM; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18
	::System::Boolean GGCICEJLJPK; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 ANKLEDFMMOF; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_DAAHEOGIGMG__CTOR_OFFSET))(this);
	}

	::System::Void DDCHOMGOJOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_DAAHEOGIGMG_DDCHOMGOJOF_OFFSET))(this);
	}

	::System::Void PDBMBJDLNCK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_DAAHEOGIGMG_PDBMBJDLNCK_OFFSET))(this);
	}

	::System::Void OLCLFFLLILE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_DAAHEOGIGMG_OLCLFFLLILE_OFFSET))(this);
	}
};
