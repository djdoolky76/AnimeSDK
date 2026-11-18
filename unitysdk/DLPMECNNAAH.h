#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Battle/NPCSinglePlayableAnimLayer.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutput.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class GPFMCLEGPHL;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AvatarMask; }

#define DLPMECNNAAH_ANOLFGKPACI_1_OFFSET UNITYSDK_OFFSET(0x12BB8DC0)
#define DLPMECNNAAH_ANOLFGKPACI_OFFSET UNITYSDK_OFFSET(0x12BB8390)
#define DLPMECNNAAH_APGEOKFLNOO_OFFSET UNITYSDK_OFFSET(0x12BB76B0)
#define DLPMECNNAAH_DAJALMHHGBJ_1_OFFSET UNITYSDK_OFFSET(0x12BB7450)
#define DLPMECNNAAH_DAJALMHHGBJ_2_OFFSET UNITYSDK_OFFSET(0x12BB8BA0)
#define DLPMECNNAAH_DAJALMHHGBJ_OFFSET UNITYSDK_OFFSET(0x12BB73C0)
#define DLPMECNNAAH_DOMDCMHMMDH_OFFSET UNITYSDK_OFFSET(0x12BB8B30)
#define DLPMECNNAAH_ELCJOJDGAAM_OFFSET UNITYSDK_OFFSET(0x12BB8850)
#define DLPMECNNAAH_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12BB71D0)
#define DLPMECNNAAH_GKDGPEAHJBO_OFFSET UNITYSDK_OFFSET(0x12BB8F50)
#define DLPMECNNAAH_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x12BB8E50)
#define DLPMECNNAAH_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x12BB7330)
#define DLPMECNNAAH_NALJEHJMKFO_OFFSET UNITYSDK_OFFSET(0x12BB6930)
#define DLPMECNNAAH_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12BB68E0)
#define DLPMECNNAAH_PCFFGBCPPMA_OFFSET UNITYSDK_OFFSET(0x12BB7C20)
#define DLPMECNNAAH__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BB7220)
#define DLPMECNNAAH__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB72A0)

inline static constexpr unsigned int DLPMECNNAAH_TypeDefinitionIndex = 49715;

class DLPMECNNAAH : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 LHIEJHOGLBL = 0x1; // 0x0
	// static const ::System::Int32 FMNICFHEMPK = 0x0; // 0x0
	// static const ::System::Int32 BHIBACABPFG = 0x1; // 0x0
	// static const ::MoleMole::Battle::NPCSinglePlayableAnimLayer NBBJEMCFAPA = 0x0; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x5C; // 0x0
	::System::Collections::Generic::List_1<::GPFMCLEGPHL*>* AIJCLFFFAFG; // 0x48
	::UnityEngine::Animator* FPGIEMNHLEF; // 0x50
	::UnityEngine::Playables::PlayableOutput HONOOKLBFOF; // 0x58
	::System::Boolean NDFGDHONGAJ; // 0x68
	::System::Boolean BLJNLLDHJHK; // 0x69
	::System::Boolean HFODNEHPOAI; // 0x6A
	::System::Byte _padding0[0x1];
	::System::Int32 GMPPDFEMFCD; // 0x6C
	::UnityEngine::Playables::PlayableGraph MDKGDBFDMCG; // 0x70
	::System::Single PLMFGBILKON; // 0x80
	::System::Single APAKOCALNFJ; // 0x84
	::UnityEngine::Animations::AnimationLayerMixerPlayable NPMFOAJDOHJ; // 0x88
	::System::Single FABCELMDOLC; // 0x98
	::System::Int32 DFPHJLKKNIA; // 0x9C
	::UnityEngine::Playables::PlayableOutput LEMGLEOLJLB; // 0xA0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLPMECNNAAH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPMECNNAAH__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPMECNNAAH_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPMECNNAAH_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPMECNNAAH_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void DAJALMHHGBJ(::Foundation::AssetPath KBFABMEAHCE, ::System::Single PALKJEELJHL)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Single))((::PBYTE)hIl2Cpp + DLPMECNNAAH_DAJALMHHGBJ_OFFSET))(this, KBFABMEAHCE, PALKJEELJHL);
	}

	::System::Void DAJALMHHGBJ_1(::Foundation::AssetPath KBFABMEAHCE, ::MoleMole::Battle::NPCSinglePlayableAnimLayer KMOHKCADPNA, ::UnityEngine::AvatarMask* PBDLLFLACGD, ::System::Single PALKJEELJHL, ::System::Boolean BOHKINIBDDP)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Battle::NPCSinglePlayableAnimLayer, ::UnityEngine::AvatarMask*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DLPMECNNAAH_DAJALMHHGBJ_1_OFFSET))(this, KBFABMEAHCE, KMOHKCADPNA, PBDLLFLACGD, PALKJEELJHL, BOHKINIBDDP);
	}

	::System::Void ANOLFGKPACI(::MoleMole::Battle::NPCSinglePlayableAnimLayer KMOHKCADPNA, ::System::Single PALKJEELJHL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::NPCSinglePlayableAnimLayer, ::System::Single))((::PBYTE)hIl2Cpp + DLPMECNNAAH_ANOLFGKPACI_OFFSET))(this, KMOHKCADPNA, PALKJEELJHL);
	}

	::System::Void DOMDCMHMMDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPMECNNAAH_DOMDCMHMMDH_OFFSET))(this);
	}

	::System::Void NALJEHJMKFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPMECNNAAH_NALJEHJMKFO_OFFSET))(this);
	}

	::System::Void DAJALMHHGBJ_2(::UnityEngine::AnimationClip* PHGBOCIDLEI, ::MoleMole::Battle::NPCSinglePlayableAnimLayer KMOHKCADPNA, ::UnityEngine::AvatarMask* PBDLLFLACGD, ::System::Single PALKJEELJHL, ::System::Boolean BOHKINIBDDP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::MoleMole::Battle::NPCSinglePlayableAnimLayer, ::UnityEngine::AvatarMask*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DLPMECNNAAH_DAJALMHHGBJ_2_OFFSET))(this, PHGBOCIDLEI, KMOHKCADPNA, PBDLLFLACGD, PALKJEELJHL, BOHKINIBDDP);
	}

	::System::Void PCFFGBCPPMA(::UnityEngine::AnimationClip* PHGBOCIDLEI, ::Foundation::AssetRequestHandle JAFNFIEENKN, ::MoleMole::Battle::NPCSinglePlayableAnimLayer KMOHKCADPNA, ::UnityEngine::AvatarMask* PBDLLFLACGD, ::System::Single PALKJEELJHL, ::System::Boolean BOHKINIBDDP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::Foundation::AssetRequestHandle, ::MoleMole::Battle::NPCSinglePlayableAnimLayer, ::UnityEngine::AvatarMask*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DLPMECNNAAH_PCFFGBCPPMA_OFFSET))(this, PHGBOCIDLEI, JAFNFIEENKN, KMOHKCADPNA, PBDLLFLACGD, PALKJEELJHL, BOHKINIBDDP);
	}

	::System::Void ANOLFGKPACI_1(::System::Single PALKJEELJHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLPMECNNAAH_ANOLFGKPACI_1_OFFSET))(this, PALKJEELJHL);
	}

	static ::DLPMECNNAAH* JFDOOELFAOA()
	{
		return ((::DLPMECNNAAH*(*)())((::PBYTE)hIl2Cpp + DLPMECNNAAH_JFDOOELFAOA_OFFSET))();
	}

	::System::Void APGEOKFLNOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPMECNNAAH_APGEOKFLNOO_OFFSET))(this);
	}

	::System::Void GKDGPEAHJBO(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLPMECNNAAH_GKDGPEAHJBO_OFFSET))(this, PMNLNNGEIFM);
	}

	::UnityEngine::Animator* ELCJOJDGAAM()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPMECNNAAH_ELCJOJDGAAM_OFFSET))(this);
	}
};
