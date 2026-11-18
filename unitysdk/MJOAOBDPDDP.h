#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofBlurQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

class JMNOLMMPKNL;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityDepthOfFieldEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define MJOAOBDPDDP_AGPLDMGNDNH_OFFSET UNITYSDK_OFFSET(0x151E4C80)
#define MJOAOBDPDDP_CKLNMFDFBFJ_OFFSET UNITYSDK_OFFSET(0x151DD4C0)
#define MJOAOBDPDDP_DEDBKHAHNKB_OFFSET UNITYSDK_OFFSET(0x151E2DF0)
#define MJOAOBDPDDP_DHHGGHJNNCB_OFFSET UNITYSDK_OFFSET(0x151DF320)
#define MJOAOBDPDDP_EGOBPCCKODL_OFFSET UNITYSDK_OFFSET(0x151D9A40)
#define MJOAOBDPDDP_GBJBGDEIHKF_OFFSET UNITYSDK_OFFSET(0x151DBCE0)
#define MJOAOBDPDDP_OPNLPBNKFFD_OFFSET UNITYSDK_OFFSET(0x151E1060)
#define MJOAOBDPDDP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x151E3D10)
#define MJOAOBDPDDP__CTOR_OFFSET UNITYSDK_OFFSET(0x151D9750)

inline static constexpr unsigned int MJOAOBDPDDP_TypeDefinitionIndex = 52624;

class MJOAOBDPDDP
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* DJKBAPEMAEL; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DofDebugMode>* JIFNPBHELJG; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* GKGAPMMEANL; // 0xB8
	::MoleMole::TwoValue_1<::System::Int32>* IMAADMDCFGH; // 0xC0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DofBlurQuality>* HJIHEMFDDON; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* KMPNEMDOHDH; // 0xD0
	::MoleMole::TwoValue_1<::System::Single>* JDCLOAPCBDD; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* BLELKBFJIIM; // 0xE0
	::MoleMole::TwoValue_1<::System::Boolean>* OEBCCJDFNLH; // 0xE8
	::MoleMole::TwoValue_1<::System::Boolean>* HECJNDILPDA; // 0xF0
	::MoleMole::TwoValue_1<::System::Single>* AMMKFFLGBLN; // 0xF8
	::MoleMole::TwoValue_1<::System::Single>* GFFPKPIKAAP; // 0x100
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DepthOfFieldMode>* EJHGOKAMACC; // 0x108
	::MoleMole::TwoValue_1<::System::Single>* LEFCNADDNPE; // 0x110
	::MoleMole::TwoValue_1<::System::Single>* GDJEODCNGKJ; // 0x118
	::System::Single BCLDOKPGBHP; // 0x120
	::UnityEngine::Rendering::Universal::DepthOfFieldMode HGMKICPNBDO; // 0x124
	::System::Boolean OKAKNOIHKIA; // 0x128
	::System::Boolean GICAMONNIKA; // 0x129
	::System::Boolean OEPHPBKCCLF; // 0x12A
	::System::Byte _padding0[0x1];
	::System::Single NKFANBEIGKM; // 0x12C
	::System::Single LPGHGIHPPNI; // 0x130
	::System::Single NNMDINCDGBF; // 0x134
	::System::Int32 DCNJIJFKHKD; // 0x138
	::System::Single LFPGMEMKIEO; // 0x13C
	::UnityEngine::Rendering::Universal::DofDebugMode BBKKDGPBOHI; // 0x140
	::System::Single LAGABOPNDGA; // 0x144
	::System::Single KCFBDLGJOBF; // 0x148
	::System::Single FKKLMMGIKBA; // 0x14C
	::UnityEngine::Rendering::Universal::DofBlurQuality ENGGANKGAAB; // 0x150

	::System::Void _ctor(::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect* DFMKILICPFB, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + MJOAOBDPDDP__CTOR_OFFSET))(this, KLNJAFHIDJM, DFMKILICPFB, PHLFMCCNEGD, NGODDCIOJDP, BCNGPJIGAIG);
	}

	::System::Void EGOBPCCKODL(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::DepthOfField* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + MJOAOBDPDDP_EGOBPCCKODL_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void GBJBGDEIHKF(::UnityEngine::Rendering::Universal::DepthOfField* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + MJOAOBDPDDP_GBJBGDEIHKF_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void CKLNMFDFBFJ(::UnityEngine::Rendering::Universal::DepthOfField* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + MJOAOBDPDDP_CKLNMFDFBFJ_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DHHGGHJNNCB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::DepthOfField* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + MJOAOBDPDDP_DHHGGHJNNCB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void OPNLPBNKFFD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::DepthOfField* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + MJOAOBDPDDP_OPNLPBNKFFD_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DEDBKHAHNKB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::DepthOfField* ALLJBBPIDDA, ::System::Boolean NGJMKJNOGJN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Boolean))((::PBYTE)hIl2Cpp + MJOAOBDPDDP_DEDBKHAHNKB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, NGJMKJNOGJN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOAOBDPDDP_TOSTRING_OFFSET))(this);
	}

	::System::Void AGPLDMGNDNH(::UnityEngine::Rendering::Universal::DepthOfField* GBELIHABEDH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + MJOAOBDPDDP_AGPLDMGNDNH_OFFSET))(this, GBELIHABEDH, PMNLNNGEIFM);
	}
};
