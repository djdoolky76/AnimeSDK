#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/EnvironmentSyetem/EnvSysAdjustLevelParam.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8E9690)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0xE8E9450)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_IGHMIDNKOEM_OFFSET UNITYSDK_OFFSET(0xE8E7760)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_MMKDGKLPDHA_OFFSET UNITYSDK_OFFSET(0xE8E8710)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_NPDCIDAIFHI_OFFSET UNITYSDK_OFFSET(0xE8E7800)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE8E76A0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE8E8590)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8E8600)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	inline static constexpr unsigned int EnviroSysAdjustLevelBehaviour_TypeDefinitionIndex = 48634;

	class EnviroSysAdjustLevelBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::RPGTools::Timeline::EnvironmentSyetem::EnvSysAdjustLevelParam OrignEnvSysAdjustLevelParameter; // 0x18
		::RPGTools::Timeline::EnvironmentSyetem::EnvSysAdjustLevelParam EnvSysAdjustLevelParameter; // 0x68
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FBICIDBOIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_FBICIDBOIFE_OFFSET))(this);
		}

		::RPGTools::Timeline::EnvironmentSyetem::EnvSysAdjustLevelParam NPDCIDAIFHI()
		{
			return ((::RPGTools::Timeline::EnvironmentSyetem::EnvSysAdjustLevelParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_NPDCIDAIFHI_OFFSET))(this);
		}

		::System::Void MMKDGKLPDHA(::RPGTools::Timeline::EnvironmentSyetem::EnvSysAdjustLevelParam a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EnvironmentSyetem::EnvSysAdjustLevelParam))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_MMKDGKLPDHA_OFFSET))(this, a1);
		}

		::System::Void IGHMIDNKOEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELBEHAVIOUR_IGHMIDNKOEM_OFFSET))(this);
		}

	};
}
