#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MainlightSwitchType.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define MBAHICFBFHL_AHJDIFCFJOB_OFFSET UNITYSDK_OFFSET(0x1B81B820)
#define MBAHICFBFHL_BJFHIAFJHEE_OFFSET UNITYSDK_OFFSET(0x1B81B590)
#define MBAHICFBFHL_BMFJMHIDOND_OFFSET UNITYSDK_OFFSET(0x1B81AAC0)
#define MBAHICFBFHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B81B920)
#define MBAHICFBFHL_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0x1B81B360)
#define MBAHICFBFHL_FBNOJIGHEPK_OFFSET UNITYSDK_OFFSET(0x1B81AA30)
#define MBAHICFBFHL_IGPDCEGPCGF_OFFSET UNITYSDK_OFFSET(0x1B81AE50)
#define MBAHICFBFHL_KNOOJOPJGNC_OFFSET UNITYSDK_OFFSET(0x1B81B3B0)
#define MBAHICFBFHL_LFBPHEONJAB_OFFSET UNITYSDK_OFFSET(0x1B81B7C0)
#define MBAHICFBFHL_MMAHMGHKBPH_OFFSET UNITYSDK_OFFSET(0x1B81A6A0)
#define MBAHICFBFHL_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B81A7D0)
#define MBAHICFBFHL_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1B81A640)
#define MBAHICFBFHL_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1B81B2F0)
#define MBAHICFBFHL_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B81A860)

inline static constexpr unsigned int MBAHICFBFHL_TypeDefinitionIndex = 49387;

	class MBAHICFBFHL : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::RPG::Client::EnvironmentSystem* MFOEHEOIOEK; // 0x18
		::System::Int32 ODAOIMBLPEK; // 0x20
		::System::Boolean BFPOMNCDOMF; // 0x24
		::System::Boolean FBKELJMHPDB; // 0x25
		::System::Boolean MNGGDGALFGF; // 0x26
		::System::Boolean HNDIKCIBJGF; // 0x27
		::System::Boolean KPBDDGEOGDC; // 0x28
		::System::Byte _padding0[0x7];
		::System::Double LPLOBJGMCKK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHICFBFHL_CTOR_OFFSET))(this);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MBAHICFBFHL_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MBAHICFBFHL_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MBAHICFBFHL_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MBAHICFBFHL_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void FBICIDBOIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHICFBFHL_FBICIDBOIFE_OFFSET))(this);
		}

		::System::Void MMAHMGHKBPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHICFBFHL_MMAHMGHKBPH_OFFSET))(this);
		}

		::System::Void BMFJMHIDOND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHICFBFHL_BMFJMHIDOND_OFFSET))(this);
		}

		::System::Void IGPDCEGPCGF(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MBAHICFBFHL_IGPDCEGPCGF_OFFSET))(this, a1);
		}

		::System::Void AHJDIFCFJOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHICFBFHL_AHJDIFCFJOB_OFFSET))(this);
		}

		static ::System::Boolean LFBPHEONJAB(::RPG::Client::EnvironmentSystem* a1, ::RPG::Client::MainlightSwitchType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::EnvironmentSystem*, ::RPG::Client::MainlightSwitchType))((::PBYTE)hIl2Cpp + MBAHICFBFHL_LFBPHEONJAB_OFFSET))(a1, a2);
		}

		::System::Void BJFHIAFJHEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHICFBFHL_BJFHIAFJHEE_OFFSET))(this);
		}

		::System::Void KNOOJOPJGNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHICFBFHL_KNOOJOPJGNC_OFFSET))(this);
		}

		::System::Void FBNOJIGHEPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHICFBFHL_FBNOJIGHEPK_OFFSET))(this);
		}

	};
