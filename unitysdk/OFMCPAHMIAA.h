#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

class JMNOLMMPKNL;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityDirectionalBlurEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class DirectionalBlur; }

#define OFMCPAHMIAA_CKLNMFDFBFJ_OFFSET UNITYSDK_OFFSET(0xF1820A0)
#define OFMCPAHMIAA_DEDBKHAHNKB_OFFSET UNITYSDK_OFFSET(0xF183E80)
#define OFMCPAHMIAA_DHHGGHJNNCB_OFFSET UNITYSDK_OFFSET(0xF182A50)
#define OFMCPAHMIAA_EGOBPCCKODL_OFFSET UNITYSDK_OFFSET(0xF180DA0)
#define OFMCPAHMIAA_GBJBGDEIHKF_OFFSET UNITYSDK_OFFSET(0xF181790)
#define OFMCPAHMIAA_OPNLPBNKFFD_OFFSET UNITYSDK_OFFSET(0xF183410)
#define OFMCPAHMIAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF184400)
#define OFMCPAHMIAA__CTOR_OFFSET UNITYSDK_OFFSET(0xF180C40)

inline static constexpr unsigned int OFMCPAHMIAA_TypeDefinitionIndex = 84848;

class OFMCPAHMIAA
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* JKNBCNNGHCC; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DownSampleLevel>* CCEMMHIKPHE; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::SampleDistanceMode>* HMKLPKCPGOO; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* GEEMKIKDHLB; // 0xC0
	::MoleMole::TwoValue_1<::System::Int32>* GOKFLFLFDKD; // 0xC8
	::UnityEngine::Rendering::Universal::DownSampleLevel CEOFGEOAKJD; // 0xD0
	::UnityEngine::Vector2 OFHPHAOOHPG; // 0xD4
	::System::Single OBECLONFLHD; // 0xDC
	::System::Int32 FAGBHKLGGFA; // 0xE0
	::UnityEngine::Rendering::Universal::SampleDistanceMode LNFHBKJGMNL; // 0xE4

	::System::Void _ctor(::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect* DFMKILICPFB, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + OFMCPAHMIAA__CTOR_OFFSET))(this, KLNJAFHIDJM, DFMKILICPFB, PHLFMCCNEGD, NGODDCIOJDP, BCNGPJIGAIG);
	}

	::System::Void EGOBPCCKODL(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::DirectionalBlur* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DirectionalBlur*))((::PBYTE)hIl2Cpp + OFMCPAHMIAA_EGOBPCCKODL_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void GBJBGDEIHKF(::UnityEngine::Rendering::Universal::DirectionalBlur* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DirectionalBlur*, ::System::Single))((::PBYTE)hIl2Cpp + OFMCPAHMIAA_GBJBGDEIHKF_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void CKLNMFDFBFJ(::UnityEngine::Rendering::Universal::DirectionalBlur* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DirectionalBlur*, ::System::Single))((::PBYTE)hIl2Cpp + OFMCPAHMIAA_CKLNMFDFBFJ_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DHHGGHJNNCB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::DirectionalBlur* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DirectionalBlur*))((::PBYTE)hIl2Cpp + OFMCPAHMIAA_DHHGGHJNNCB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void OPNLPBNKFFD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::DirectionalBlur* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DirectionalBlur*, ::System::Single))((::PBYTE)hIl2Cpp + OFMCPAHMIAA_OPNLPBNKFFD_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DEDBKHAHNKB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::DirectionalBlur* ALLJBBPIDDA, ::System::Boolean NGJMKJNOGJN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DirectionalBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + OFMCPAHMIAA_DEDBKHAHNKB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, NGJMKJNOGJN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMCPAHMIAA_TOSTRING_OFFSET))(this);
	}
};
