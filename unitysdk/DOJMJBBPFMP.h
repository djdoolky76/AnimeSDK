#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAKPIIOFPG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace RPGTools::Timeline::Emotion { class EmoBakedPoseData; }

#define DOJMJBBPFMP_AKIBOOFEIBH_OFFSET UNITYSDK_OFFSET(0x11FEC760)
#define DOJMJBBPFMP_BBLFHPENODE_OFFSET UNITYSDK_OFFSET(0x11FEC9B0)
#define DOJMJBBPFMP_BJLGBCKGBLL_OFFSET UNITYSDK_OFFSET(0x11FECDF0)
#define DOJMJBBPFMP_BPFMDOFPFAL_OFFSET UNITYSDK_OFFSET(0x11FEB2F0)
#define DOJMJBBPFMP_CKFLPOMHENN_OFFSET UNITYSDK_OFFSET(0x11FECF00)
#define DOJMJBBPFMP_CTOR_OFFSET UNITYSDK_OFFSET(0x11FEB1C0)
#define DOJMJBBPFMP_HABKFLMIGHC_OFFSET UNITYSDK_OFFSET(0x11FEB350)
#define DOJMJBBPFMP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x11FEB210)
#define DOJMJBBPFMP_HDMOAMLLMHN_OFFSET UNITYSDK_OFFSET(0x11FEC4A0)
#define DOJMJBBPFMP_HKANICKODCI_OFFSET UNITYSDK_OFFSET(0x11FEB290)
#define DOJMJBBPFMP_LJNAOEOIOON_OFFSET UNITYSDK_OFFSET(0x11FEBF90)
#define DOJMJBBPFMP_MFHDJONIAGP_OFFSET UNITYSDK_OFFSET(0x11FEC680)
#define DOJMJBBPFMP_NGLAGCAIMDF_OFFSET UNITYSDK_OFFSET(0x11FEB980)
#define DOJMJBBPFMP_OJCOENFILOM_OFFSET UNITYSDK_OFFSET(0x11FEB750)

inline static constexpr unsigned int DOJMJBBPFMP_TypeDefinitionIndex = 71131;

	class DOJMJBBPFMP : public ::System::Object
	{
	public:
		::RPG::Client::MonoEmoPlayableGraph* CFKHNPGEAJA; // 0x10
		::HOAKPIIOFPG DBJCCKOJHBG; // 0x18
		::RPGTools::Timeline::Emotion::EmoBakedPoseData* IKAECBJIBEN; // 0x30
		::System::UInt32 DEKIGMAPBJO; // 0x38
		::System::Single NHCKOLMGICF; // 0x3C
		::UnityEngine::Animations::AnimationLayerMixerPlayable HMCEAFCFIOL; // 0x40
		::UnityEngine::Animations::AnimationMixerPlayable JFGPKHKALKO; // 0x50
		::UnityEngine::Playables::PlayableGraph ABGDLKJGIFH; // 0x60
		::System::Single ANMBKHMNHNO; // 0x70
		::System::Void _ctor(::RPG::Client::MonoEmoPlayableGraph* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + DOJMJBBPFMP_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJMJBBPFMP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void BPFMDOFPFAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJMJBBPFMP_BPFMDOFPFAL_OFFSET))(this);
		}

		::System::Void HABKFLMIGHC(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DOJMJBBPFMP_HABKFLMIGHC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OJCOENFILOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJMJBBPFMP_OJCOENFILOM_OFFSET))(this);
		}

		::System::Void AKIBOOFEIBH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DOJMJBBPFMP_AKIBOOFEIBH_OFFSET))(this, a1);
		}

		::System::Void HKANICKODCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJMJBBPFMP_HKANICKODCI_OFFSET))(this);
		}

		::System::Void MFHDJONIAGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJMJBBPFMP_MFHDJONIAGP_OFFSET))(this);
		}

		::System::Void LJNAOEOIOON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJMJBBPFMP_LJNAOEOIOON_OFFSET))(this);
		}

		::System::Void BJLGBCKGBLL(::System::Double a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DOJMJBBPFMP_BJLGBCKGBLL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CKFLPOMHENN(::UnityEngine::Animations::AnimationLayerMixerPlayable a1, ::UnityEngine::Animations::AnimationMixerPlayable a2, ::UnityEngine::Playables::PlayableGraph a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationLayerMixerPlayable, ::UnityEngine::Animations::AnimationMixerPlayable, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + DOJMJBBPFMP_CKFLPOMHENN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NGLAGCAIMDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJMJBBPFMP_NGLAGCAIMDF_OFFSET))(this);
		}

		::System::Void HDMOAMLLMHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJMJBBPFMP_HDMOAMLLMHN_OFFSET))(this);
		}

		::System::Void BBLFHPENODE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJMJBBPFMP_BBLFHPENODE_OFFSET))(this);
		}

	};
