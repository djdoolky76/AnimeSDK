#pragma once
#include "unitysdk/unitysdk.h"

class JMNOLMMPKNL;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityCharacterVolumeProxyEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class CharacterVolumeProxy; }

#define JACFFDENJLD_CKLNMFDFBFJ_OFFSET UNITYSDK_OFFSET(0x1988FBB0)
#define JACFFDENJLD_DEDBKHAHNKB_OFFSET UNITYSDK_OFFSET(0x19890780)
#define JACFFDENJLD_DHHGGHJNNCB_OFFSET UNITYSDK_OFFSET(0x1988FDA0)
#define JACFFDENJLD_EGOBPCCKODL_OFFSET UNITYSDK_OFFSET(0x1988F480)
#define JACFFDENJLD_GBJBGDEIHKF_OFFSET UNITYSDK_OFFSET(0x1988F9C0)
#define JACFFDENJLD_OPNLPBNKFFD_OFFSET UNITYSDK_OFFSET(0x198902D0)
#define JACFFDENJLD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19890A50)
#define JACFFDENJLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1988F3D0)

inline static constexpr unsigned int JACFFDENJLD_TypeDefinitionIndex = 66979;

class JACFFDENJLD
{
public:
	::MoleMole::TwoValue_1<::System::Single>* HLNGODNMABG; // 0xA8
	::System::Single JDOBNGCIJBD; // 0xB0

	::System::Void _ctor(::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect* DFMKILICPFB, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + JACFFDENJLD__CTOR_OFFSET))(this, KLNJAFHIDJM, DFMKILICPFB, PHLFMCCNEGD, NGODDCIOJDP, BCNGPJIGAIG);
	}

	::System::Void EGOBPCCKODL(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy*))((::PBYTE)hIl2Cpp + JACFFDENJLD_EGOBPCCKODL_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void GBJBGDEIHKF(::UnityEngine::Rendering::Universal::CharacterVolumeProxy* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy*, ::System::Single))((::PBYTE)hIl2Cpp + JACFFDENJLD_GBJBGDEIHKF_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void CKLNMFDFBFJ(::UnityEngine::Rendering::Universal::CharacterVolumeProxy* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy*, ::System::Single))((::PBYTE)hIl2Cpp + JACFFDENJLD_CKLNMFDFBFJ_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DHHGGHJNNCB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy*))((::PBYTE)hIl2Cpp + JACFFDENJLD_DHHGGHJNNCB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void OPNLPBNKFFD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy*, ::System::Single))((::PBYTE)hIl2Cpp + JACFFDENJLD_OPNLPBNKFFD_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DEDBKHAHNKB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy* ALLJBBPIDDA, ::System::Boolean NGJMKJNOGJN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy*, ::System::Boolean))((::PBYTE)hIl2Cpp + JACFFDENJLD_DEDBKHAHNKB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, NGJMKJNOGJN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFFDENJLD_TOSTRING_OFFSET))(this);
	}
};
