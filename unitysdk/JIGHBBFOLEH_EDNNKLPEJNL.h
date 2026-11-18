#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMHOLJNNCJA;
class JIGHBBFOLEH;

#define JIGHBBFOLEH_EDNNKLPEJNL_AGFIANBMKIE_OFFSET UNITYSDK_OFFSET(0x1945D0C0)
#define JIGHBBFOLEH_EDNNKLPEJNL_FPGHAHJLGAP_OFFSET UNITYSDK_OFFSET(0x1945D100)
#define JIGHBBFOLEH_EDNNKLPEJNL__CTOR_OFFSET UNITYSDK_OFFSET(0x1945D0B0)

inline static constexpr unsigned int JIGHBBFOLEH_EDNNKLPEJNL_TypeDefinitionIndex = 63418;

class JIGHBBFOLEH_EDNNKLPEJNL : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* BNPFCFJJFGM; // 0x10
	::JIGHBBFOLEH* KLHPEBKNIFB; // 0x18
	::DMHOLJNNCJA* LHPFMGBDFPN; // 0x20
	::System::Boolean JGNIMPICHLG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGHBBFOLEH_EDNNKLPEJNL__CTOR_OFFSET))(this);
	}

	::System::Void AGFIANBMKIE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGHBBFOLEH_EDNNKLPEJNL_AGFIANBMKIE_OFFSET))(this);
	}

	::System::Void FPGHAHJLGAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGHBBFOLEH_EDNNKLPEJNL_FPGHAHJLGAP_OFFSET))(this);
	}
};
