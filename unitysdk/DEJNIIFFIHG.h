#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class UILineRenderer; }
namespace UnityEngine { class Transform; }

#define DEJNIIFFIHG_CTOR_OFFSET UNITYSDK_OFFSET(0xE5111E0)
#define DEJNIIFFIHG_EJDAKAECODE_OFFSET UNITYSDK_OFFSET(0xE510EE0)
#define DEJNIIFFIHG_IBDEFAGFPAK_OFFSET UNITYSDK_OFFSET(0xE511000)
#define DEJNIIFFIHG_KNMAAIEHDKH_OFFSET UNITYSDK_OFFSET(0xE511070)
#define DEJNIIFFIHG_LBABPNOHBLJ_OFFSET UNITYSDK_OFFSET(0xE511180)
#define DEJNIIFFIHG_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0xE5110F0)
#define DEJNIIFFIHG__ONBIND_OFFSET UNITYSDK_OFFSET(0xE510E20)

	class DEJNIIFFIHG : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UILineRenderer* HPMDFNCEMOF; // 0x60
		::UnityEngine::Transform* LKHHMNJKLJH; // 0x68
		::RPG::Client::UILineRenderer* EFCKDNAAHEJ; // 0x70
		::System::Single LKBKDNAMNEG; // 0x78
		::System::Boolean EMHAACACFOM; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJNIIFFIHG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJNIIFFIHG__ONBIND_OFFSET))(this);
		}

		::System::Void EJDAKAECODE(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + DEJNIIFFIHG_EJDAKAECODE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IBDEFAGFPAK(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEJNIIFFIHG_IBDEFAGFPAK_OFFSET))(this, a1);
		}

		::System::Void KNMAAIEHDKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJNIIFFIHG_KNMAAIEHDKH_OFFSET))(this);
		}

		::System::Void LEEEAMMHPFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJNIIFFIHG_LEEEAMMHPFM_OFFSET))(this);
		}

		::System::Void LBABPNOHBLJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEJNIIFFIHG_LBABPNOHBLJ_OFFSET))(this, a1);
		}

	};
