#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIELGJIPJDM.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
class KCMGAIFFBPL;
namespace UnityEngine::UI { class Image; }

#define GAGGBCGFDBP_AJJCDNMHCLD_OFFSET UNITYSDK_OFFSET(0x1593ABB0)
#define GAGGBCGFDBP_BAKIIABNOFG_OFFSET UNITYSDK_OFFSET(0x1593A660)
#define GAGGBCGFDBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1593AC50)
#define GAGGBCGFDBP_HDDLCBJNPKG_OFFSET UNITYSDK_OFFSET(0x1593A5F0)
#define GAGGBCGFDBP_LDCKMFDEKLM_OFFSET UNITYSDK_OFFSET(0x1593AAC0)
#define GAGGBCGFDBP_PFJDLLGFCOD_OFFSET UNITYSDK_OFFSET(0x1593A290)
#define GAGGBCGFDBP__ONBIND_OFFSET UNITYSDK_OFFSET(0x1593A190)

	class GAGGBCGFDBP : public ::DIELGJIPJDM
	{
	public:
		::UnityEngine::UI::Image* LIDNLCGBDNG; // 0x150
		::UnityEngine::UI::Image* KNJNMFKACAN; // 0x158
		::UnityEngine::UI::Image* LFAMDJJAPJK; // 0x160
		::UnityEngine::UI::Image* KMBOKCMHBBC; // 0x168
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* ECKLIPEJJFJ; // 0x0
		// static const ::System::String* LGIGALKBHLA; // 0x0
		// static const ::System::String* ODIALKBLDDJ; // 0x0
		// static const ::System::String* MLLPFHCABCJ; // 0x0
		// static const ::System::String* ENLMMALDOOL; // 0x0
		// static const ::System::String* NOEKNNOEBLG; // 0x0
		// static const ::System::String* PNOIGDDGEBA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGBCGFDBP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGBCGFDBP__ONBIND_OFFSET))(this);
		}

		::System::Void PFJDLLGFCOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGBCGFDBP_PFJDLLGFCOD_OFFSET))(this);
		}

		::System::Void HDDLCBJNPKG(::RPG::GameCore::EnergyBarState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + GAGGBCGFDBP_HDDLCBJNPKG_OFFSET))(this, a1);
		}

		::System::Void BAKIIABNOFG(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + GAGGBCGFDBP_BAKIIABNOFG_OFFSET))(this, a1);
		}

		::System::Void LDCKMFDEKLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGBCGFDBP_LDCKMFDEKLM_OFFSET))(this);
		}

		::System::Void AJJCDNMHCLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGBCGFDBP_AJJCDNMHCLD_OFFSET))(this);
		}

	};
