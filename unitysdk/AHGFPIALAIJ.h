#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurDirection.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurQuality.h"

class JMNOLMMPKNL;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityMotionBlurEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class MotionBlur; }

#define AHGFPIALAIJ_CKLNMFDFBFJ_OFFSET UNITYSDK_OFFSET(0x135E41A0)
#define AHGFPIALAIJ_DEDBKHAHNKB_OFFSET UNITYSDK_OFFSET(0x135E6110)
#define AHGFPIALAIJ_DHHGGHJNNCB_OFFSET UNITYSDK_OFFSET(0x135E4A60)
#define AHGFPIALAIJ_EGOBPCCKODL_OFFSET UNITYSDK_OFFSET(0x135E2CA0)
#define AHGFPIALAIJ_GBJBGDEIHKF_OFFSET UNITYSDK_OFFSET(0x135E3970)
#define AHGFPIALAIJ_OPNLPBNKFFD_OFFSET UNITYSDK_OFFSET(0x135E5600)
#define AHGFPIALAIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x135E6600)
#define AHGFPIALAIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x135E2B20)

inline static constexpr unsigned int AHGFPIALAIJ_TypeDefinitionIndex = 49974;

class AHGFPIALAIJ
{
public:
	::MoleMole::TwoValue_1<::System::Single>* MGDLGFJBGEO; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::MotionBlurDirection>* JKNBCNNGHCC; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::MotionBlurQuality>* MMFKEEIGJAN; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* OCIANCLMDKO; // 0xC0
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::MotionBlurMode>* EJHGOKAMACC; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* LMDEENLBHGC; // 0xD0
	::UnityEngine::NAPRenderPipeline0::MotionBlurDirection OFHPHAOOHPG; // 0xD8
	::System::Single PLANMHBDEJI; // 0xDC
	::System::Single EPMPAOHCLDP; // 0xE0
	::UnityEngine::NAPRenderPipeline0::MotionBlurMode HGMKICPNBDO; // 0xE4
	::UnityEngine::NAPRenderPipeline0::MotionBlurQuality MNBAONHHBPH; // 0xE8
	::System::Single EOGEAOIOHCF; // 0xEC

	::System::Void _ctor(::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigEntityMotionBlurEffect* DFMKILICPFB, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + AHGFPIALAIJ__CTOR_OFFSET))(this, KLNJAFHIDJM, DFMKILICPFB, PHLFMCCNEGD, NGODDCIOJDP, BCNGPJIGAIG);
	}

	::System::Void EGOBPCCKODL(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::MotionBlur* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*))((::PBYTE)hIl2Cpp + AHGFPIALAIJ_EGOBPCCKODL_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void GBJBGDEIHKF(::UnityEngine::Rendering::Universal::MotionBlur* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Single))((::PBYTE)hIl2Cpp + AHGFPIALAIJ_GBJBGDEIHKF_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void CKLNMFDFBFJ(::UnityEngine::Rendering::Universal::MotionBlur* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Single))((::PBYTE)hIl2Cpp + AHGFPIALAIJ_CKLNMFDFBFJ_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DHHGGHJNNCB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::MotionBlur* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*))((::PBYTE)hIl2Cpp + AHGFPIALAIJ_DHHGGHJNNCB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void OPNLPBNKFFD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::MotionBlur* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Single))((::PBYTE)hIl2Cpp + AHGFPIALAIJ_OPNLPBNKFFD_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DEDBKHAHNKB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::MotionBlur* ALLJBBPIDDA, ::System::Boolean NGJMKJNOGJN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + AHGFPIALAIJ_DEDBKHAHNKB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, NGJMKJNOGJN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGFPIALAIJ_TOSTRING_OFFSET))(this);
	}
};
