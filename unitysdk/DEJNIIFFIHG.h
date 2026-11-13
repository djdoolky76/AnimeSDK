#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class UILineRenderer; }
namespace UnityEngine { class Transform; }

#define DEJNIIFFIHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B3777A0)
#define DEJNIIFFIHG_EJDAKAECODE_OFFSET UNITYSDK_OFFSET(0x1B3774A0)
#define DEJNIIFFIHG_IBDEFAGFPAK_OFFSET UNITYSDK_OFFSET(0x1B3775C0)
#define DEJNIIFFIHG_KNMAAIEHDKH_OFFSET UNITYSDK_OFFSET(0x1B377630)
#define DEJNIIFFIHG_LBABPNOHBLJ_OFFSET UNITYSDK_OFFSET(0x1B377740)
#define DEJNIIFFIHG_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0x1B3776B0)
#define DEJNIIFFIHG__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B377310)

inline static constexpr unsigned int DEJNIIFFIHG_TypeDefinitionIndex = 73692;

	class DEJNIIFFIHG : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UILineRenderer* HPMDFNCEMOF; // 0x60
		::UnityEngine::Transform* LKHHMNJKLJH; // 0x68
		::RPG::Client::UILineRenderer* EFCKDNAAHEJ; // 0x70
		::System::Boolean EMHAACACFOM; // 0x78
		::System::Byte _padding0[0x3];
		::System::Single LKBKDNAMNEG; // 0x7C
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
