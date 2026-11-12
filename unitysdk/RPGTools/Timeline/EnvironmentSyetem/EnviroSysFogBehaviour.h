#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPGTools/Timeline/EnvironmentSyetem/EnvSysFogParam.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class CDIAEAMFDIB;
class ONCAOGIEEIG;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPGTools::Timeline::EnvironmentSyetem { class EnviroSysFogBehaviour_FGPOODIEPJE; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Gradient; }

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_CCTOR_OFFSET UNITYSDK_OFFSET(0xF3D3AF0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xF3D3A40)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_EHNOABGCNLE_OFFSET UNITYSDK_OFFSET(0xF3D3550)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_EJJFEDLLNCJ_OFFSET UNITYSDK_OFFSET(0xF3D3960)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0xF3D2C30)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_FKCOJECHJPN_OFFSET UNITYSDK_OFFSET(0xF3D3380)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_GELGAMBBHMA_OFFSET UNITYSDK_OFFSET(0xF3D2CD0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_IGHMIDNKOEM_OFFSET UNITYSDK_OFFSET(0xF3CEFE0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_LCADGHMINII_OFFSET UNITYSDK_OFFSET(0xF3D3660)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_MMKDGKLPDHA_OFFSET UNITYSDK_OFFSET(0xF3D0EC0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_NPDCIDAIFHI_OFFSET UNITYSDK_OFFSET(0xF3CF080)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_OGBDLLHIFDJ_OFFSET UNITYSDK_OFFSET(0xF3D3600)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_OHOMFDOKEFB_OFFSET UNITYSDK_OFFSET(0xF3D3230)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_OINELLMAMFF_OFFSET UNITYSDK_OFFSET(0xF3D0440)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xF3D0D10)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xF3CE6A0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xF3D0DB0)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	inline static constexpr unsigned int EnviroSysFogBehaviour_TypeDefinitionIndex = 49679;

	class EnviroSysFogBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam OrignEnvSysFogParameter; // 0x18
		::System::Int64 tk; // 0x60
		::System::Boolean SceneUseFogV2; // 0x68
		::System::Byte _padding0[0x3];
		::System::Single V2FogDensity; // 0x6C
		::System::Single V2HightFogDensity; // 0x70
		::System::Byte _padding1[0x4];
		::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam EnvSysFogParameter; // 0x78
		::CDIAEAMFDIB* _MyFogColorProp; // 0xC0
		::System::Int32 _MyFogColorPropId; // 0xC8
		::System::Byte _padding2[0x4];
		::CDIAEAMFDIB* _MyHeightFogColorProp; // 0xD0
		::System::Int32 _MyHeightFogColorPropId; // 0xD8
		::System::Byte _padding3[0x4];
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0xE0
		static ::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::Object*>** StaticGet_s_GradientSlots()
		{
			return (::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::Object*>**)UnitySDK::FromName("RPGTools.Timeline.EnvironmentSyetem", "EnviroSysFogBehaviour")->GetStaticField(0x73D80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_CCTOR_OFFSET))();
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FBICIDBOIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_FBICIDBOIFE_OFFSET))(this);
		}

		::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam NPDCIDAIFHI()
		{
			return ((::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_NPDCIDAIFHI_OFFSET))(this);
		}

		::System::Void MMKDGKLPDHA(::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_MMKDGKLPDHA_OFFSET))(this, a1);
		}

		static ::System::Boolean OHOMFDOKEFB()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_OHOMFDOKEFB_OFFSET))();
		}

		static ::RPGTools::Timeline::EnvironmentSyetem::EnviroSysFogBehaviour_FGPOODIEPJE* FKCOJECHJPN(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::RPGTools::Timeline::EnvironmentSyetem::EnviroSysFogBehaviour_FGPOODIEPJE*(*)(::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_FKCOJECHJPN_OFFSET))(a1);
		}

		static ::ONCAOGIEEIG* EHNOABGCNLE(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Int32 a2)
		{
			return ((::ONCAOGIEEIG*(*)(::EnviromentSystem::EnviromentPropertiesID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_EHNOABGCNLE_OFFSET))(a1, a2);
		}

		static ::System::Void OGBDLLHIFDJ(::CDIAEAMFDIB* a1)
		{
			return ((::System::Void(*)(::CDIAEAMFDIB*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_OGBDLLHIFDJ_OFFSET))(a1);
		}

		::CDIAEAMFDIB* LCADGHMINII(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Gradient* a2, ::System::Int32 a3)
		{
			return ((::CDIAEAMFDIB*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Gradient*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_LCADGHMINII_OFFSET))(this, a1, a2, a3);
		}

		::CDIAEAMFDIB* OINELLMAMFF(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Gradient* a2, ::System::Int32 a3)
		{
			return ((::CDIAEAMFDIB*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Gradient*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_OINELLMAMFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GELGAMBBHMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_GELGAMBBHMA_OFFSET))(this);
		}

		::System::Void EJJFEDLLNCJ(::EnviromentSystem::EnviromentPropertiesID a1, ::CDIAEAMFDIB* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::CDIAEAMFDIB*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_EJJFEDLLNCJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IGHMIDNKOEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_IGHMIDNKOEM_OFFSET))(this);
		}

	};
}
