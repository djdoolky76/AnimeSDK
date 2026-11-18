#pragma once
#include "unitysdk/unitysdk.h"

class JMNOLMMPKNL;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityWhiteBalanceEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class WhiteBalance; }

#define EABFGOEGCGI_CKLNMFDFBFJ_OFFSET UNITYSDK_OFFSET(0x134923A0)
#define EABFGOEGCGI_DEDBKHAHNKB_OFFSET UNITYSDK_OFFSET(0x13493480)
#define EABFGOEGCGI_DHHGGHJNNCB_OFFSET UNITYSDK_OFFSET(0x13492720)
#define EABFGOEGCGI_EGOBPCCKODL_OFFSET UNITYSDK_OFFSET(0x134918D0)
#define EABFGOEGCGI_GBJBGDEIHKF_OFFSET UNITYSDK_OFFSET(0x13492030)
#define EABFGOEGCGI_OPNLPBNKFFD_OFFSET UNITYSDK_OFFSET(0x13492DE0)
#define EABFGOEGCGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x134937F0)
#define EABFGOEGCGI__CTOR_OFFSET UNITYSDK_OFFSET(0x134917F0)

inline static constexpr unsigned int EABFGOEGCGI_TypeDefinitionIndex = 57711;

class EABFGOEGCGI
{
public:
	::MoleMole::TwoValue_1<::System::Single>* HCPEDBAFCHL; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* FHPNBGCKFBI; // 0xB0
	::System::Single KALAPBEMNAP; // 0xB8
	::System::Single LLAGOEABNHB; // 0xBC

	::System::Void _ctor(::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect* DFMKILICPFB, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + EABFGOEGCGI__CTOR_OFFSET))(this, KLNJAFHIDJM, DFMKILICPFB, PHLFMCCNEGD, NGODDCIOJDP, BCNGPJIGAIG);
	}

	::System::Void EGOBPCCKODL(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::WhiteBalance* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::WhiteBalance*))((::PBYTE)hIl2Cpp + EABFGOEGCGI_EGOBPCCKODL_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void GBJBGDEIHKF(::UnityEngine::Rendering::Universal::WhiteBalance* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WhiteBalance*, ::System::Single))((::PBYTE)hIl2Cpp + EABFGOEGCGI_GBJBGDEIHKF_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void CKLNMFDFBFJ(::UnityEngine::Rendering::Universal::WhiteBalance* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WhiteBalance*, ::System::Single))((::PBYTE)hIl2Cpp + EABFGOEGCGI_CKLNMFDFBFJ_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DHHGGHJNNCB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::WhiteBalance* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::WhiteBalance*))((::PBYTE)hIl2Cpp + EABFGOEGCGI_DHHGGHJNNCB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void OPNLPBNKFFD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::WhiteBalance* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::WhiteBalance*, ::System::Single))((::PBYTE)hIl2Cpp + EABFGOEGCGI_OPNLPBNKFFD_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DEDBKHAHNKB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::WhiteBalance* ALLJBBPIDDA, ::System::Boolean NGJMKJNOGJN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::WhiteBalance*, ::System::Boolean))((::PBYTE)hIl2Cpp + EABFGOEGCGI_DEDBKHAHNKB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, NGJMKJNOGJN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EABFGOEGCGI_TOSTRING_OFFSET))(this);
	}
};
