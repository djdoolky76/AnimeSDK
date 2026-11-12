#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MainlightSwitchType.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define MBAHICFBFHL_AHJDIFCFJOB_OFFSET UNITYSDK_OFFSET(0xC0BBB20)
#define MBAHICFBFHL_BJFHIAFJHEE_OFFSET UNITYSDK_OFFSET(0xC0BB890)
#define MBAHICFBFHL_BMFJMHIDOND_OFFSET UNITYSDK_OFFSET(0xC0BADC0)
#define MBAHICFBFHL_CTOR_OFFSET UNITYSDK_OFFSET(0xC0BBC20)
#define MBAHICFBFHL_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0xC0BB660)
#define MBAHICFBFHL_FBNOJIGHEPK_OFFSET UNITYSDK_OFFSET(0xC0BAD30)
#define MBAHICFBFHL_IGPDCEGPCGF_OFFSET UNITYSDK_OFFSET(0xC0BB150)
#define MBAHICFBFHL_KNOOJOPJGNC_OFFSET UNITYSDK_OFFSET(0xC0BB6B0)
#define MBAHICFBFHL_LFBPHEONJAB_OFFSET UNITYSDK_OFFSET(0xC0BBAC0)
#define MBAHICFBFHL_MMAHMGHKBPH_OFFSET UNITYSDK_OFFSET(0xC0BA9A0)
#define MBAHICFBFHL_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xC0BAAD0)
#define MBAHICFBFHL_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xC0BA940)
#define MBAHICFBFHL_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xC0BB5F0)
#define MBAHICFBFHL_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xC0BAB60)

inline static constexpr unsigned int MBAHICFBFHL_TypeDefinitionIndex = 49387;

	class MBAHICFBFHL : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::RPG::Client::EnvironmentSystem* MFOEHEOIOEK; // 0x18
		::System::Boolean BFPOMNCDOMF; // 0x20
		::System::Byte _padding0[0x7];
		::System::Double LPLOBJGMCKK; // 0x28
		::System::Boolean MNGGDGALFGF; // 0x30
		::System::Boolean HNDIKCIBJGF; // 0x31
		::System::Boolean FBKELJMHPDB; // 0x32
		::System::Boolean KPBDDGEOGDC; // 0x33
		::System::Int32 ODAOIMBLPEK; // 0x34
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
