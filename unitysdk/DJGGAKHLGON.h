#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxVector.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DJGGAKHLGON_DGKHOLLHCPA_OFFSET UNITYSDK_OFFSET(0x149B0070)
#define DJGGAKHLGON_EGOBBNHHIIJ_OFFSET UNITYSDK_OFFSET(0x149B0660)
#define DJGGAKHLGON_EPLNBPDLKBJ_OFFSET UNITYSDK_OFFSET(0x149B0440)
#define DJGGAKHLGON_NEHBEMCEPKJ_OFFSET UNITYSDK_OFFSET(0x149B0500)
#define DJGGAKHLGON__CTOR_OFFSET UNITYSDK_OFFSET(0x149B0060)

inline static constexpr unsigned int DJGGAKHLGON_TypeDefinitionIndex = 51286;

class DJGGAKHLGON : public ::System::Object
{
public:
	// static const ::System::Int32 DIEPDNNNIHK = 0x3C; // 0x0
	// static const ::System::Int32 PHIOCCGHMAA = 0x1E; // 0x0
	// static const ::System::Int32 MMAGCLFKCNN = 0x14; // 0x0
	// static const ::System::Int32 BHBKCFDEDBK = 0x14; // 0x0
	::System::Object* FBCGIMKLKPG; // 0x10
	::System::Single DAAKKNMLEMI; // 0x18
	::System::Single ANIGNLDKBKL; // 0x1C
	::System::Single MDABIPEIGOJ; // 0x20
	::System::Int32 CMAGKICODDF; // 0x24
	::System::Single FEFMFIAKEHM; // 0x28
	::System::Int32 KNLPBKDIJCO; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJGGAKHLGON__CTOR_OFFSET))(this);
	}

	::System::Void DGKHOLLHCPA(::FlexBuffers::FlxVector NFHMKIODEPB)
	{
		return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxVector))((::PBYTE)hIl2Cpp + DJGGAKHLGON_DGKHOLLHCPA_OFFSET))(this, NFHMKIODEPB);
	}

	::System::Void EPLNBPDLKBJ(::UnityEngine::Vector3 GBAHDKCCELK, ::System::Int32& HAAEBCOBKFF, ::System::Int32& BFMMEICFNCD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + DJGGAKHLGON_EPLNBPDLKBJ_OFFSET))(this, GBAHDKCCELK, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Void NEHBEMCEPKJ(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD, ::UnityEngine::Vector3& DGPEPKDNABL, ::UnityEngine::Vector3& NPPGNJCIGJC, ::UnityEngine::Vector3& IJOHADBJEJD, ::UnityEngine::Vector3& FMDAPKKIHJJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DJGGAKHLGON_NEHBEMCEPKJ_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD, DGPEPKDNABL, NPPGNJCIGJC, IJOHADBJEJD, FMDAPKKIHJJ);
	}

	::System::Boolean EGOBBNHHIIJ(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DJGGAKHLGON_EGOBBNHHIIJ_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
