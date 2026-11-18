#pragma once
#include "unitysdk/unitysdk.h"

class JMNOLMMPKNL;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityPaniniProjectionEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class PaniniProjection; }

#define PBIHELLFFCE_CKLNMFDFBFJ_OFFSET UNITYSDK_OFFSET(0x15FFA6B0)
#define PBIHELLFFCE_DEDBKHAHNKB_OFFSET UNITYSDK_OFFSET(0x15FFB790)
#define PBIHELLFFCE_DHHGGHJNNCB_OFFSET UNITYSDK_OFFSET(0x15FFAA30)
#define PBIHELLFFCE_EGOBPCCKODL_OFFSET UNITYSDK_OFFSET(0x15FF9BE0)
#define PBIHELLFFCE_GBJBGDEIHKF_OFFSET UNITYSDK_OFFSET(0x15FFA340)
#define PBIHELLFFCE_OPNLPBNKFFD_OFFSET UNITYSDK_OFFSET(0x15FFB0F0)
#define PBIHELLFFCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15FFBB00)
#define PBIHELLFFCE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF9B00)

inline static constexpr unsigned int PBIHELLFFCE_TypeDefinitionIndex = 66794;

class PBIHELLFFCE
{
public:
	::MoleMole::TwoValue_1<::System::Single>* HKBKCBKJPOM; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* EIPGIKGHFKM; // 0xB0
	::System::Single HNLDCHHKFCJ; // 0xB8
	::System::Single KKDJBDGOILI; // 0xBC

	::System::Void _ctor(::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect* DFMKILICPFB, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + PBIHELLFFCE__CTOR_OFFSET))(this, KLNJAFHIDJM, DFMKILICPFB, PHLFMCCNEGD, NGODDCIOJDP, BCNGPJIGAIG);
	}

	::System::Void EGOBPCCKODL(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::PaniniProjection* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PaniniProjection*))((::PBYTE)hIl2Cpp + PBIHELLFFCE_EGOBPCCKODL_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void GBJBGDEIHKF(::UnityEngine::Rendering::Universal::PaniniProjection* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::PaniniProjection*, ::System::Single))((::PBYTE)hIl2Cpp + PBIHELLFFCE_GBJBGDEIHKF_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void CKLNMFDFBFJ(::UnityEngine::Rendering::Universal::PaniniProjection* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::PaniniProjection*, ::System::Single))((::PBYTE)hIl2Cpp + PBIHELLFFCE_CKLNMFDFBFJ_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DHHGGHJNNCB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::PaniniProjection* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PaniniProjection*))((::PBYTE)hIl2Cpp + PBIHELLFFCE_DHHGGHJNNCB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void OPNLPBNKFFD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::PaniniProjection* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PaniniProjection*, ::System::Single))((::PBYTE)hIl2Cpp + PBIHELLFFCE_OPNLPBNKFFD_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DEDBKHAHNKB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::PaniniProjection* ALLJBBPIDDA, ::System::Boolean NGJMKJNOGJN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PaniniProjection*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBIHELLFFCE_DEDBKHAHNKB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, NGJMKJNOGJN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIHELLFFCE_TOSTRING_OFFSET))(this);
	}
};
