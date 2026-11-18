#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Config { class ConfigChromaticAberration; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }

#define CAAGOGKAEJF_CKLNMFDFBFJ_OFFSET UNITYSDK_OFFSET(0x18DBE1C0)
#define CAAGOGKAEJF_DEDBKHAHNKB_OFFSET UNITYSDK_OFFSET(0x18DBDE20)
#define CAAGOGKAEJF_DHHGGHJNNCB_OFFSET UNITYSDK_OFFSET(0x18DBDFD0)
#define CAAGOGKAEJF_EGOBPCCKODL_OFFSET UNITYSDK_OFFSET(0x18DBDEB0)
#define CAAGOGKAEJF_GBJBGDEIHKF_OFFSET UNITYSDK_OFFSET(0x18DBE2A0)
#define CAAGOGKAEJF_OPNLPBNKFFD_OFFSET UNITYSDK_OFFSET(0x18DBE3D0)
#define CAAGOGKAEJF__CTOR_OFFSET UNITYSDK_OFFSET(0x18DBDD90)

inline static constexpr unsigned int CAAGOGKAEJF_TypeDefinitionIndex = 72435;

class CAAGOGKAEJF
{
public:
	::MoleMole::TwoValue_1<::System::Single>* OCIANCLMDKO; // 0xA8

	::System::Void _ctor(::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigChromaticAberration* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigChromaticAberration*))((::PBYTE)hIl2Cpp + CAAGOGKAEJF__CTOR_OFFSET))(this, KLNJAFHIDJM, DFMKILICPFB);
	}

	::System::Void DEDBKHAHNKB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::ChromaticAberration* ALLJBBPIDDA, ::System::Boolean NGJMKJNOGJN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Boolean))((::PBYTE)hIl2Cpp + CAAGOGKAEJF_DEDBKHAHNKB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, NGJMKJNOGJN);
	}

	::System::Void EGOBPCCKODL(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::ChromaticAberration* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*))((::PBYTE)hIl2Cpp + CAAGOGKAEJF_EGOBPCCKODL_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void DHHGGHJNNCB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::ChromaticAberration* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*))((::PBYTE)hIl2Cpp + CAAGOGKAEJF_DHHGGHJNNCB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void CKLNMFDFBFJ(::UnityEngine::Rendering::Universal::ChromaticAberration* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CAAGOGKAEJF_CKLNMFDFBFJ_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void GBJBGDEIHKF(::UnityEngine::Rendering::Universal::ChromaticAberration* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CAAGOGKAEJF_GBJBGDEIHKF_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void OPNLPBNKFFD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::ChromaticAberration* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CAAGOGKAEJF_OPNLPBNKFFD_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, PMNLNNGEIFM);
	}
};
