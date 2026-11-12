#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGBPMPBLDNK.h"
namespace RPGTools::Timeline { class VFXTearClip_FaceTearConfig; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_LEDNKJNPNMD_CTOR_OFFSET UNITYSDK_OFFSET(0xF477A30)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_LEDNKJNPNMD_DCDJFENHLKE_OFFSET UNITYSDK_OFFSET(0xF478900)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_LEDNKJNPNMD_FCGPPFGOFPE_OFFSET UNITYSDK_OFFSET(0xF478670)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_LEDNKJNPNMD_HOLGGDMLIDM_OFFSET UNITYSDK_OFFSET(0xF477C40)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_LEDNKJNPNMD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xF477A40)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_LEDNKJNPNMD_MAINHMKKGJH_OFFSET UNITYSDK_OFFSET(0xF4786C0)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_LEDNKJNPNMD_NCCEKLOFKFE_OFFSET UNITYSDK_OFFSET(0xF478950)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VFXTearBehaviour_LEDNKJNPNMD_TypeDefinitionIndex = 49112;

	class VFXTearBehaviour_LEDNKJNPNMD : public ::OGBPMPBLDNK
	{
	public:
		::RPGTools::Timeline::VFXTearClip_FaceTearConfig* IGHAHBNLIJA; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_LEDNKJNPNMD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPGTools::Timeline::VFXTearClip_FaceTearConfig* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFXTearClip_FaceTearConfig*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_LEDNKJNPNMD_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean HOLGGDMLIDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_LEDNKJNPNMD_HOLGGDMLIDM_OFFSET))(this);
		}

		::System::Void FCGPPFGOFPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_LEDNKJNPNMD_FCGPPFGOFPE_OFFSET))(this);
		}

		::System::Void DCDJFENHLKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_LEDNKJNPNMD_DCDJFENHLKE_OFFSET))(this);
		}

		::System::Void MAINHMKKGJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_LEDNKJNPNMD_MAINHMKKGJH_OFFSET))(this);
		}

		::System::Void NCCEKLOFKFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_LEDNKJNPNMD_NCCEKLOFKFE_OFFSET))(this);
		}

	};
}
