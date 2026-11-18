#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FPKIFHKCBEK;
class GFBHDFDLJBG;

#define GFBHDFDLJBG_DCEGMANMHEA_CKHKIPLAJCM_OFFSET UNITYSDK_OFFSET(0x149C0E80)
#define GFBHDFDLJBG_DCEGMANMHEA_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0x149C0D40)
#define GFBHDFDLJBG_DCEGMANMHEA__CTOR_OFFSET UNITYSDK_OFFSET(0x149C0D30)

inline static constexpr unsigned int GFBHDFDLJBG_DCEGMANMHEA_TypeDefinitionIndex = 83181;

class GFBHDFDLJBG_DCEGMANMHEA : public ::System::Object
{
public:
	::FPKIFHKCBEK* GCKPPJAGABM; // 0x10
	::GFBHDFDLJBG* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBHDFDLJBG_DCEGMANMHEA__CTOR_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBHDFDLJBG_DCEGMANMHEA_MJMKFFANPBL_OFFSET))(this);
	}

	::System::Void CKHKIPLAJCM(::FPKIFHKCBEK* DEJEGHGEMEF)
	{
		return ((::System::Void(*)(::PVOID, ::FPKIFHKCBEK*))((::PBYTE)hIl2Cpp + GFBHDFDLJBG_DCEGMANMHEA_CKHKIPLAJCM_OFFSET))(this, DEJEGHGEMEF);
	}
};
