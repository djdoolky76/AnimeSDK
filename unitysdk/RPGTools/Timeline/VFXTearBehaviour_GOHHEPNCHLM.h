#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGBPMPBLDNK.h"
namespace RPGTools::Timeline { class VFXTearClip_EyeTearConfig; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GOHHEPNCHLM_CTOR_OFFSET UNITYSDK_OFFSET(0xE94EB90)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GOHHEPNCHLM_DCDJFENHLKE_OFFSET UNITYSDK_OFFSET(0xE94F890)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GOHHEPNCHLM_FCGPPFGOFPE_OFFSET UNITYSDK_OFFSET(0xE94F600)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GOHHEPNCHLM_HOLGGDMLIDM_OFFSET UNITYSDK_OFFSET(0xE94ED70)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GOHHEPNCHLM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE94EBA0)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GOHHEPNCHLM_MAINHMKKGJH_OFFSET UNITYSDK_OFFSET(0xE94F650)
#define RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GOHHEPNCHLM_NCCEKLOFKFE_OFFSET UNITYSDK_OFFSET(0xE94F8E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VFXTearBehaviour_GOHHEPNCHLM_TypeDefinitionIndex = 48080;

	class VFXTearBehaviour_GOHHEPNCHLM : public ::OGBPMPBLDNK
	{
	public:
		::RPGTools::Timeline::VFXTearClip_EyeTearConfig* IGHAHBNLIJA; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GOHHEPNCHLM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPGTools::Timeline::VFXTearClip_EyeTearConfig* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFXTearClip_EyeTearConfig*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GOHHEPNCHLM_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean HOLGGDMLIDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GOHHEPNCHLM_HOLGGDMLIDM_OFFSET))(this);
		}

		::System::Void FCGPPFGOFPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GOHHEPNCHLM_FCGPPFGOFPE_OFFSET))(this);
		}

		::System::Void DCDJFENHLKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GOHHEPNCHLM_DCDJFENHLKE_OFFSET))(this);
		}

		::System::Void MAINHMKKGJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GOHHEPNCHLM_MAINHMKKGJH_OFFSET))(this);
		}

		::System::Void NCCEKLOFKFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARBEHAVIOUR_GOHHEPNCHLM_NCCEKLOFKFE_OFFSET))(this);
		}

	};
}
