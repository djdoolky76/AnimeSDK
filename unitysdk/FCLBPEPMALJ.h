#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"
#include "unitysdk/AGDJEFKDGNK.h"

class EAIOHODECAO;
class PAAFIIKGPPE;
namespace System { class Action; }

#define FCLBPEPMALJ_EKHBENMNOJA_OFFSET UNITYSDK_OFFSET(0x1ED8B840)
#define FCLBPEPMALJ_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x1ED8B640)
#define FCLBPEPMALJ_HPFDIFHOOFL_OFFSET UNITYSDK_OFFSET(0x1ED8B830)
#define FCLBPEPMALJ_IKGHFBHODNF_OFFSET UNITYSDK_OFFSET(0x1ED8BC60)
#define FCLBPEPMALJ_JALDMDKJFJL_OFFSET UNITYSDK_OFFSET(0x1ED8B900)
#define FCLBPEPMALJ_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1ED8B6A0)
#define FCLBPEPMALJ_MNIIFKAJMIO_OFFSET UNITYSDK_OFFSET(0x1ED8B760)
#define FCLBPEPMALJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1ED8B5A0)
#define FCLBPEPMALJ_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1ED8B770)
#define FCLBPEPMALJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED8B720)

inline static constexpr unsigned int FCLBPEPMALJ_TypeDefinitionIndex = 95022;

class FCLBPEPMALJ : public ::MHOBPPAJKIL
{
public:
	::PAAFIIKGPPE* GCKBMPDGJCF; // 0x18
	::System::Action* NFFLEMJFOAM; // 0x20
	::System::Boolean MHLCMDMAMFN; // 0x28
	::System::Boolean EALEJMHCOOH; // 0x29
	::System::Byte _padding0[0x2];
	::System::Single _HJOAECCHKMK_k__BackingField; // 0x2C
	::MoleMole::Arcade::BallsRace::EBrSpeedLevel ONOJGLJBAAJ; // 0x30
	::System::Int32 KIKPCKAOEKI; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPEPMALJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + FCLBPEPMALJ_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPEPMALJ_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Single MNIIFKAJMIO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPEPMALJ_MNIIFKAJMIO_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPEPMALJ_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPEPMALJ_EMCPPBMEKKK_OFFSET))(this);
	}

	::System::Void HPFDIFHOOFL(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCLBPEPMALJ_HPFDIFHOOFL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EKHBENMNOJA(::AGDJEFKDGNK BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::AGDJEFKDGNK))((::PBYTE)hIl2Cpp + FCLBPEPMALJ_EKHBENMNOJA_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Boolean JALDMDKJFJL(::System::Single BHFAGMPDIGJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCLBPEPMALJ_JALDMDKJFJL_OFFSET))(this, BHFAGMPDIGJ);
	}

	::System::Boolean IKGHFBHODNF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPEPMALJ_IKGHFBHODNF_OFFSET))(this);
	}
};
