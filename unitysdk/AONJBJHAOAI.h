#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

class JMNOLMMPKNL;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityFXFogEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class FXFog; }

#define AONJBJHAOAI_CKLNMFDFBFJ_OFFSET UNITYSDK_OFFSET(0x17DEFD80)
#define AONJBJHAOAI_DEDBKHAHNKB_OFFSET UNITYSDK_OFFSET(0x17DF92D0)
#define AONJBJHAOAI_DHHGGHJNNCB_OFFSET UNITYSDK_OFFSET(0x17DF3050)
#define AONJBJHAOAI_EGOBPCCKODL_OFFSET UNITYSDK_OFFSET(0x17DE9C40)
#define AONJBJHAOAI_GBJBGDEIHKF_OFFSET UNITYSDK_OFFSET(0x17DED660)
#define AONJBJHAOAI_OPNLPBNKFFD_OFFSET UNITYSDK_OFFSET(0x17DF5F40)
#define AONJBJHAOAI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DFAC40)
#define AONJBJHAOAI__CTOR_OFFSET UNITYSDK_OFFSET(0x17DE97F0)

inline static constexpr unsigned int AONJBJHAOAI_TypeDefinitionIndex = 41592;

class AONJBJHAOAI
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* GKFECFJAMPB; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* JGCDPPGOOFD; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* FNJEAPEAEGD; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* MIBLFIFLANL; // 0xC0
	::MoleMole::TwoValue_1<::System::Boolean>* GCJJKFHPBMA; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* JHAJCFBBNHA; // 0xD0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* OINJHBMKLIM; // 0xD8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* IMHKLPJJEDE; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* NDBFNEODLFB; // 0xE8
	::MoleMole::TwoValue_1<::System::Single>* NJANIOOGKAN; // 0xF0
	::MoleMole::TwoValue_1<::System::Boolean>* OMDKKNLJBOC; // 0xF8
	::MoleMole::TwoValue_1<::System::Single>* MLPNLDPEAJC; // 0x100
	::MoleMole::TwoValue_1<::System::Single>* FCLJKKMMJIN; // 0x108
	::MoleMole::TwoValue_1<::System::Single>* PIAKFJLMGOD; // 0x110
	::MoleMole::TwoValue_1<::System::Single>* MJAJCPBMBCO; // 0x118
	::MoleMole::TwoValue_1<::System::Single>* FAAJIDGHMOD; // 0x120
	::MoleMole::TwoValue_1<::System::Boolean>* OEADMBNJICL; // 0x128
	::MoleMole::TwoValue_1<::UnityEngine::Color>* EOMPFMNCDPH; // 0x130
	::MoleMole::TwoValue_1<::System::Boolean>* KNNJJBGKPAH; // 0x138
	::MoleMole::TwoValue_1<::System::Single>* OIKLLNMDFDI; // 0x140
	::MoleMole::TwoValue_1<::System::Single>* PCOLIHFPEMI; // 0x148
	::MoleMole::TwoValue_1<::System::Boolean>* KOGEBALHGAG; // 0x150
	::MoleMole::TwoValue_1<::System::Single>* GOBPKBOOHFG; // 0x158
	::MoleMole::TwoValue_1<::UnityEngine::Color>* IFMPHJAHFBN; // 0x160
	::System::Single ILOEAEABGEE; // 0x168
	::System::Single HGHAHKOFNMN; // 0x16C
	::UnityEngine::Color FKCLEPFAMEL; // 0x170
	::System::Single GIIFIPMJFIC; // 0x180
	::System::Single NDLJGMAPEBG; // 0x184
	::System::Single LCKJNOFGNCH; // 0x188
	::System::Single PMFHPNAEBIF; // 0x18C
	::System::Single OELBOAEPLGP; // 0x190
	::UnityEngine::Color CAPCMFKDMKN; // 0x194
	::System::Single BKCPNCHBEMD; // 0x1A4
	::UnityEngine::Color CIBBLJODMIJ; // 0x1A8
	::System::Single EKAHLMBJEHB; // 0x1B8
	::UnityEngine::Color EKAOFNMGKKM; // 0x1BC
	::System::Single OADNBAPFGNH; // 0x1CC
	::System::Boolean HFDJPGEFGOF; // 0x1D0
	::System::Boolean HILCNJPLBLK; // 0x1D1
	::System::Boolean MOFCBDALICI; // 0x1D2
	::System::Boolean LBCMODMJAKB; // 0x1D3
	::System::Single PBMFILPBJPM; // 0x1D4
	::System::Single PJJOHHNDKFD; // 0x1D8
	::System::Single GIJHKFONJGK; // 0x1DC
	::System::Single BOCABDOHJBK; // 0x1E0
	::System::Boolean ECKCMCEMCOJ; // 0x1E4
	::System::Boolean NLIODGDJODI; // 0x1E5

	::System::Void _ctor(::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigEntityFXFogEffect* DFMKILICPFB, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + AONJBJHAOAI__CTOR_OFFSET))(this, KLNJAFHIDJM, DFMKILICPFB, PHLFMCCNEGD, NGODDCIOJDP, BCNGPJIGAIG);
	}

	::System::Void EGOBPCCKODL(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::FXFog* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FXFog*))((::PBYTE)hIl2Cpp + AONJBJHAOAI_EGOBPCCKODL_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void GBJBGDEIHKF(::UnityEngine::Rendering::Universal::FXFog* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FXFog*, ::System::Single))((::PBYTE)hIl2Cpp + AONJBJHAOAI_GBJBGDEIHKF_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void CKLNMFDFBFJ(::UnityEngine::Rendering::Universal::FXFog* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FXFog*, ::System::Single))((::PBYTE)hIl2Cpp + AONJBJHAOAI_CKLNMFDFBFJ_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DHHGGHJNNCB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::FXFog* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FXFog*))((::PBYTE)hIl2Cpp + AONJBJHAOAI_DHHGGHJNNCB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void OPNLPBNKFFD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::FXFog* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FXFog*, ::System::Single))((::PBYTE)hIl2Cpp + AONJBJHAOAI_OPNLPBNKFFD_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DEDBKHAHNKB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::FXFog* ALLJBBPIDDA, ::System::Boolean NGJMKJNOGJN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FXFog*, ::System::Boolean))((::PBYTE)hIl2Cpp + AONJBJHAOAI_DEDBKHAHNKB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, NGJMKJNOGJN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AONJBJHAOAI_TOSTRING_OFFSET))(this);
	}
};
