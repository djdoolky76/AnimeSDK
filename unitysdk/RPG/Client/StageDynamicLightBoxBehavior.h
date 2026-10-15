#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class StageDynamicLightBoxMonoPlugin; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_AIADCIFJAHO_OFFSET UNITYSDK_OFFSET(0xE109780)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_CDGPLNADJLD_OFFSET UNITYSDK_OFFSET(0xE109C80)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE10B050)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE10B300)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_ENGNOBNGGDM_OFFSET UNITYSDK_OFFSET(0xE1098F0)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE1098B0)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE10B170)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE10AEC0)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE10AFF0)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE10B270)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE10B1D0)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE10AF60)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xE10B230)
#define RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE10B0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageDynamicLightBoxBehavior_TypeDefinitionIndex = 70952;

	class StageDynamicLightBoxBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Int32 _CurrentTemplateID; // 0x38
		::System::Single _CurrentTime; // 0x3C
		::UnityEngine::MeshRenderer* _Renderer; // 0x40
		::System::Boolean _MatDirty; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 _ProgressMapID; // 0x4C
		::System::Int32 _FormationMapID; // 0x50
		::System::Int32 _ProgressID; // 0x54
		::System::Int32 _BulbXID; // 0x58
		::System::Int32 _BulbYID; // 0x5C
		::System::Int32 _FormationRepeateXID; // 0x60
		::System::Int32 _FormationRepeateYID; // 0x64
		::System::Int32 _LayoutModeXID; // 0x68
		::System::Int32 _LayoutModeYID; // 0x6C
		::System::Int32 _FormationAdaptiveModeID; // 0x70
		::System::Int32 _FormationAdaptiveCountXID; // 0x74
		::System::Int32 _FormationAdaptiveCountYID; // 0x78
		::System::Int32 _EmissionColorID; // 0x7C
		::System::Int32 _ThresholdID; // 0x80
		::System::Int32 _EmissionIntID; // 0x84
		::System::Int32 _ThicknessID; // 0x88
		::System::Int32 _ContrastID; // 0x8C
		::System::Int32 _AltasID; // 0x90
		::System::Int32 _MainMapID; // 0x94
		::System::Int32 _SwitchID; // 0x98
		::System::Int32 _FormationmapTypeID; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void AIADCIFJAHO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_AIADCIFJAHO_OFFSET))(this, a1);
		}

		::System::Void ENGNOBNGGDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_ENGNOBNGGDM_OFFSET))(this);
		}

		::System::Void CDGPLNADJLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_CDGPLNADJLD_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::RPG::Client::StageDynamicLightBoxMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::StageDynamicLightBoxMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEDYNAMICLIGHTBOXBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
