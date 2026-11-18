#pragma once
#include "unitysdk/unitysdk.h"

class JMNOLMMPKNL;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityColorLookupEffect; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ColorLookup; }

#define ELKFIEIPBCF_CKLNMFDFBFJ_OFFSET UNITYSDK_OFFSET(0x17127C40)
#define ELKFIEIPBCF_DEDBKHAHNKB_OFFSET UNITYSDK_OFFSET(0x17128B70)
#define ELKFIEIPBCF_DHHGGHJNNCB_OFFSET UNITYSDK_OFFSET(0x17127F80)
#define ELKFIEIPBCF_EGOBPCCKODL_OFFSET UNITYSDK_OFFSET(0x171272B0)
#define ELKFIEIPBCF_GBJBGDEIHKF_OFFSET UNITYSDK_OFFSET(0x17127930)
#define ELKFIEIPBCF_OPNLPBNKFFD_OFFSET UNITYSDK_OFFSET(0x171285E0)
#define ELKFIEIPBCF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17128E80)
#define ELKFIEIPBCF__CTOR_OFFSET UNITYSDK_OFFSET(0x171271D0)

inline static constexpr unsigned int ELKFIEIPBCF_TypeDefinitionIndex = 80516;

class ELKFIEIPBCF
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* HJPGOMCLLDG; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* PINPFNGEKPJ; // 0xB0
	::UnityEngine::Texture* CCCKGHGHHFA; // 0xB8
	::System::Single BIAEIPPJOPJ; // 0xC0

	::System::Void _ctor(::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigEntityColorLookupEffect* DFMKILICPFB, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + ELKFIEIPBCF__CTOR_OFFSET))(this, KLNJAFHIDJM, DFMKILICPFB, PHLFMCCNEGD, NGODDCIOJDP, BCNGPJIGAIG);
	}

	::System::Void EGOBPCCKODL(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::ColorLookup* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ColorLookup*))((::PBYTE)hIl2Cpp + ELKFIEIPBCF_EGOBPCCKODL_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void GBJBGDEIHKF(::UnityEngine::Rendering::Universal::ColorLookup* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ColorLookup*, ::System::Single))((::PBYTE)hIl2Cpp + ELKFIEIPBCF_GBJBGDEIHKF_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void CKLNMFDFBFJ(::UnityEngine::Rendering::Universal::ColorLookup* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ColorLookup*, ::System::Single))((::PBYTE)hIl2Cpp + ELKFIEIPBCF_CKLNMFDFBFJ_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DHHGGHJNNCB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::ColorLookup* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ColorLookup*))((::PBYTE)hIl2Cpp + ELKFIEIPBCF_DHHGGHJNNCB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void OPNLPBNKFFD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::ColorLookup* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ColorLookup*, ::System::Single))((::PBYTE)hIl2Cpp + ELKFIEIPBCF_OPNLPBNKFFD_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DEDBKHAHNKB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::ColorLookup* ALLJBBPIDDA, ::System::Boolean NGJMKJNOGJN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ColorLookup*, ::System::Boolean))((::PBYTE)hIl2Cpp + ELKFIEIPBCF_DEDBKHAHNKB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, NGJMKJNOGJN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKFIEIPBCF_TOSTRING_OFFSET))(this);
	}
};
