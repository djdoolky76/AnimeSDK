#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class NPCEmotionClipAsset;
class NPCEmotionClipConfig;
class NPCEmotionConfigSO;
class NPCEmotionEffectConfig;
namespace NPCCrowd { template <typename T> class NPCSoftAssetPath_1; }
namespace NPCCrowd::Avatar { class NPCEmotionControl; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }

#define DHIKLKPLCCG_BOJBNFNFJJL_OFFSET UNITYSDK_OFFSET(0x7FB9820)
#define DHIKLKPLCCG_CKIMHCNKDNN_OFFSET UNITYSDK_OFFSET(0x7FB9A80)
#define DHIKLKPLCCG_DBGGMBPDOJM_OFFSET UNITYSDK_OFFSET(0x7FB9C20)
#define DHIKLKPLCCG_ECDFGFGINKP_OFFSET UNITYSDK_OFFSET(0x7FB95E0)
#define DHIKLKPLCCG_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x7FB9A10)
#define DHIKLKPLCCG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x7FB9300)
#define DHIKLKPLCCG_HPMOAKCBJIH_OFFSET UNITYSDK_OFFSET(0x7FB9910)
#define DHIKLKPLCCG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x7FB9990)
#define DHIKLKPLCCG_JPMFMDOJPCA_OFFSET UNITYSDK_OFFSET(0x7FB9D90)
#define DHIKLKPLCCG_KABKMPIADDD_OFFSET UNITYSDK_OFFSET(0x7FB94B0)
#define DHIKLKPLCCG_KKHGKKHOBOL_OFFSET UNITYSDK_OFFSET(0x7FB95D0)
#define DHIKLKPLCCG_LKNGJIMBAKL_OFFSET UNITYSDK_OFFSET(0x7FB9A70)
#define DHIKLKPLCCG_MDJNKGIJDBD_OFFSET UNITYSDK_OFFSET(0x7FB9DA0)
#define DHIKLKPLCCG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x7FB9540)
#define DHIKLKPLCCG_MOCNBOLEDBJ_OFFSET UNITYSDK_OFFSET(0x7FB9680)
#define DHIKLKPLCCG_NKNGFGAAEMI_OFFSET UNITYSDK_OFFSET(0x7FB91C0)
#define DHIKLKPLCCG_NLFEFJECIKE_OFFSET UNITYSDK_OFFSET(0x7FB93E0)
#define DHIKLKPLCCG_OHPBOKHMKLL_OFFSET UNITYSDK_OFFSET(0x7FB9D00)
#define DHIKLKPLCCG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x7FB9170)
#define DHIKLKPLCCG__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FB9350)
#define DHIKLKPLCCG__CTOR_OFFSET UNITYSDK_OFFSET(0x7FB93D0)

inline static constexpr unsigned int DHIKLKPLCCG_TypeDefinitionIndex = 56551;

class DHIKLKPLCCG : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xA4; // 0x0
	::NPCCrowd::NPCSoftAssetPath_1<::NPCEmotionConfigSO*>* MLEMPMACOIC; // 0x48
	::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::AnimationClip*>* IEFLNNOHGFE; // 0x50
	::NPCCrowd::Avatar::NPCEmotionControl* _BIDLIBOHFFO_k__BackingField; // 0x58
	::System::String* HMBBDHDCKHN; // 0x60
	::Foundation::AssetPath BFPJEKGILFL; // 0x68
	::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::AnimationClip*>* FKHNMJPLHEE; // 0x78
	::NPCEmotionEffectConfig* LKKJABIDNLI; // 0x80
	::NPCEmotionClipAsset* FLIGDHJKKHO; // 0x88
	::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::AvatarMask*>* CBAGJLFHJDJ; // 0x90
	::NPCEmotionClipConfig* JKBMLHGHHGC; // 0x98
	::System::Int32 ACLKKNOEMKH; // 0xA0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHIKLKPLCCG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::AnimationClip* NLFEFJECIKE()
	{
		return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_NLFEFJECIKE_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::String* KKHGKKHOBOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_KKHGKKHOBOL_OFFSET))(this);
	}

	::System::Void ECDFGFGINKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_ECDFGFGINKP_OFFSET))(this);
	}

	::NPCEmotionClipConfig* MOCNBOLEDBJ()
	{
		return ((::NPCEmotionClipConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_MOCNBOLEDBJ_OFFSET))(this);
	}

	::System::Void HPMOAKCBJIH(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_HPMOAKCBJIH_OFFSET))(this, EGEGIMGMJHN);
	}

	::NPCCrowd::NPCSoftAssetPath_1<::NPCEmotionConfigSO*>* BOJBNFNFJJL()
	{
		return ((::NPCCrowd::NPCSoftAssetPath_1<::NPCEmotionConfigSO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_BOJBNFNFJJL_OFFSET))(this);
	}

	static ::DHIKLKPLCCG* JFDOOELFAOA()
	{
		return ((::DHIKLKPLCCG*(*)())((::PBYTE)hIl2Cpp + DHIKLKPLCCG_JFDOOELFAOA_OFFSET))();
	}

	::System::Void GALGFCPKMGC(::Foundation::AssetPath OIIHCACKLHD, ::System::Int32 IFGMFALNKOH)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Int32))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_GALGFCPKMGC_OFFSET))(this, OIIHCACKLHD, IFGMFALNKOH);
	}

	::System::Void LKNGJIMBAKL(::NPCCrowd::Avatar::NPCEmotionControl* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCEmotionControl*))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_LKNGJIMBAKL_OFFSET))(this, EGEGIMGMJHN);
	}

	::NPCEmotionEffectConfig* CKIMHCNKDNN()
	{
		return ((::NPCEmotionEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_CKIMHCNKDNN_OFFSET))(this);
	}

	::UnityEngine::AvatarMask* DBGGMBPDOJM()
	{
		return ((::UnityEngine::AvatarMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_DBGGMBPDOJM_OFFSET))(this);
	}

	::NPCEmotionClipAsset* KABKMPIADDD()
	{
		return ((::NPCEmotionClipAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_KABKMPIADDD_OFFSET))(this);
	}

	::System::Void OHPBOKHMKLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_OHPBOKHMKLL_OFFSET))(this);
	}

	::System::Void NKNGFGAAEMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_NKNGFGAAEMI_OFFSET))(this);
	}

	::NPCCrowd::Avatar::NPCEmotionControl* JPMFMDOJPCA()
	{
		return ((::NPCCrowd::Avatar::NPCEmotionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_JPMFMDOJPCA_OFFSET))(this);
	}

	::UnityEngine::AnimationClip* MDJNKGIJDBD()
	{
		return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKLKPLCCG_MDJNKGIJDBD_OFFSET))(this);
	}
};
