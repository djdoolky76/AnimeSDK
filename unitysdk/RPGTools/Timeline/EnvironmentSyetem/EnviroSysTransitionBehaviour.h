#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPGTools::Timeline::EnvironmentSyetem { class EnviroSysTransitionBehaviour; }
namespace RPGTools::Timeline::EnvironmentSyetem { class EnviroSysTransitionBehaviour_KKMDGBMDJFA; }
namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE8EF1F0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8EF1D0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0xE8EDFB0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_FIACKOKAPGK_OFFSET UNITYSDK_OFFSET(0xE8EE100)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_HBLOHBGIEIM_OFFSET UNITYSDK_OFFSET(0xE8EEBA0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_IGHMIDNKOEM_OFFSET UNITYSDK_OFFSET(0xE8EE070)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_IJIELPKCGJI_OFFSET UNITYSDK_OFFSET(0xE8EE2E0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_IMEHFPEPDHK_OFFSET UNITYSDK_OFFSET(0xE8EE7D0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_LILEDBPEGPN_OFFSET UNITYSDK_OFFSET(0xE8EF0F0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_MJCKAJMDDDG_OFFSET UNITYSDK_OFFSET(0xE8EED90)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE8EDDA0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE8EE170)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8EE1E0)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	inline static constexpr unsigned int EnviroSysTransitionBehaviour_TypeDefinitionIndex = 48641;

	class EnviroSysTransitionBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::System::Single TransRate; // 0x18
		::System::Boolean UseStoryPriority; // 0x1C
		::System::Byte _padding0[0x3];
		::System::String* ProfilePath; // 0x20
		::System::Int32 _EnvTransitionHandle; // 0x28
		::System::Byte _padding1[0x4];
		::RPGTools::Timeline::EnvironmentSyetem::EnviroSysTransitionBehaviour_KKMDGBMDJFA* _EnvParamSource; // 0x30
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x38
		static ::RPGTools::Timeline::EnvironmentSyetem::EnviroSysTransitionBehaviour** StaticGet_Current()
		{
			return (::RPGTools::Timeline::EnvironmentSyetem::EnviroSysTransitionBehaviour**)UnitySDK::FromName("RPGTools.Timeline.EnvironmentSyetem", "EnviroSysTransitionBehaviour")->GetStaticField(0x6FC20);
		}

		static ::System::Int32* StaticGet__LastEnvTransitionHandle()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools.Timeline.EnvironmentSyetem", "EnviroSysTransitionBehaviour")->GetStaticField(0x15B10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_CCTOR_OFFSET))();
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FIACKOKAPGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_FIACKOKAPGK_OFFSET))(this);
		}

		::System::Void IMEHFPEPDHK(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_IMEHFPEPDHK_OFFSET))(this, a1);
		}

		::System::Void HBLOHBGIEIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_HBLOHBGIEIM_OFFSET))(this);
		}

		::System::Void MJCKAJMDDDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_MJCKAJMDDDG_OFFSET))(this);
		}

		::System::Void IJIELPKCGJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_IJIELPKCGJI_OFFSET))(this);
		}

		::System::Void FBICIDBOIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_FBICIDBOIFE_OFFSET))(this);
		}

		::System::Void IGHMIDNKOEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_IGHMIDNKOEM_OFFSET))(this);
		}

		::System::Void LILEDBPEGPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_LILEDBPEGPN_OFFSET))(this);
		}

	};
}
