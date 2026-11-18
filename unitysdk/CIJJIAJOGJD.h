#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class JMNOLMMPKNL;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityVignette; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class Vignette; }

#define CIJJIAJOGJD_CKLNMFDFBFJ_OFFSET UNITYSDK_OFFSET(0x18DD49C0)
#define CIJJIAJOGJD_DEDBKHAHNKB_OFFSET UNITYSDK_OFFSET(0x18DD7180)
#define CIJJIAJOGJD_DHHGGHJNNCB_OFFSET UNITYSDK_OFFSET(0x18DD5630)
#define CIJJIAJOGJD_EGOBPCCKODL_OFFSET UNITYSDK_OFFSET(0x18DD3160)
#define CIJJIAJOGJD_GBJBGDEIHKF_OFFSET UNITYSDK_OFFSET(0x18DD4160)
#define CIJJIAJOGJD_NDACCPIEBFF_OFFSET UNITYSDK_OFFSET(0x18DD81A0)
#define CIJJIAJOGJD_OPNLPBNKFFD_OFFSET UNITYSDK_OFFSET(0x18DD6410)
#define CIJJIAJOGJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18DD7960)
#define CIJJIAJOGJD__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD3000)

inline static constexpr unsigned int CIJJIAJOGJD_TypeDefinitionIndex = 78780;

class CIJJIAJOGJD
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* IIGKOEAJLHB; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* OCIANCLMDKO; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* MKEGNKPNOAB; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* GMIPBCKNEFH; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* FNPNJGNEFHE; // 0xC8
	::System::Single PLANMHBDEJI; // 0xD0
	::System::Boolean JPMCENIDHCI; // 0xD4
	::System::Byte _padding0[0x3];
	::System::Single OMGPGECLHMO; // 0xD8
	::UnityEngine::Color FICDABHOPPO; // 0xDC
	::UnityEngine::Vector2 AOODJEMHLIK; // 0xEC

	::System::Void _ctor(::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigEntityVignette* DFMKILICPFB, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityVignette*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + CIJJIAJOGJD__CTOR_OFFSET))(this, KLNJAFHIDJM, DFMKILICPFB, PHLFMCCNEGD, NGODDCIOJDP, BCNGPJIGAIG);
	}

	::System::Void EGOBPCCKODL(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::Vignette* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Vignette*))((::PBYTE)hIl2Cpp + CIJJIAJOGJD_EGOBPCCKODL_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void GBJBGDEIHKF(::UnityEngine::Rendering::Universal::Vignette* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Vignette*, ::System::Single))((::PBYTE)hIl2Cpp + CIJJIAJOGJD_GBJBGDEIHKF_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void CKLNMFDFBFJ(::UnityEngine::Rendering::Universal::Vignette* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Vignette*, ::System::Single))((::PBYTE)hIl2Cpp + CIJJIAJOGJD_CKLNMFDFBFJ_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DHHGGHJNNCB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::Vignette* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Vignette*))((::PBYTE)hIl2Cpp + CIJJIAJOGJD_DHHGGHJNNCB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void OPNLPBNKFFD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::Vignette* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Vignette*, ::System::Single))((::PBYTE)hIl2Cpp + CIJJIAJOGJD_OPNLPBNKFFD_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DEDBKHAHNKB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::Vignette* ALLJBBPIDDA, ::System::Boolean NGJMKJNOGJN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Vignette*, ::System::Boolean))((::PBYTE)hIl2Cpp + CIJJIAJOGJD_DEDBKHAHNKB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, NGJMKJNOGJN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJJIAJOGJD_TOSTRING_OFFSET))(this);
	}

	::System::Void NDACCPIEBFF(::UnityEngine::Rendering::Universal::Vignette* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Vignette*))((::PBYTE)hIl2Cpp + CIJJIAJOGJD_NDACCPIEBFF_OFFSET))(this, ALLJBBPIDDA);
	}
};
