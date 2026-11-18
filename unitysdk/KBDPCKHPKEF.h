#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class JMNOLMMPKNL;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityDistortionEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class Distortion; }

#define KBDPCKHPKEF_CKLNMFDFBFJ_OFFSET UNITYSDK_OFFSET(0x18A33290)
#define KBDPCKHPKEF_DEDBKHAHNKB_OFFSET UNITYSDK_OFFSET(0x18A362A0)
#define KBDPCKHPKEF_DHHGGHJNNCB_OFFSET UNITYSDK_OFFSET(0x18A34400)
#define KBDPCKHPKEF_EGOBPCCKODL_OFFSET UNITYSDK_OFFSET(0x18A315B0)
#define KBDPCKHPKEF_GBJBGDEIHKF_OFFSET UNITYSDK_OFFSET(0x18A32570)
#define KBDPCKHPKEF_OPNLPBNKFFD_OFFSET UNITYSDK_OFFSET(0x18A35250)
#define KBDPCKHPKEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18A36BC0)
#define KBDPCKHPKEF__CTOR_OFFSET UNITYSDK_OFFSET(0x18A313F0)

inline static constexpr unsigned int KBDPCKHPKEF_TypeDefinitionIndex = 90960;

class KBDPCKHPKEF
{
public:
	::MoleMole::TwoValue_1<::System::Single>* HNCJIKKGPEE; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* KHALLPCLHEM; // 0xB0
	::MoleMole::TwoValue_1<::System::Boolean>* PPMPKCNNKEJ; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::DistortionQueueType>* NMDIANNONMG; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* OCIANCLMDKO; // 0xC8
	::MoleMole::TwoValue_1<::System::Int32>* JBCIOEGIBMO; // 0xD0
	::MoleMole::TwoValue_1<::System::Boolean>* LDCPFAJHDII; // 0xD8
	::System::Single JGMFCEFGHDN; // 0xE0
	::UnityEngine::Vector3 CJBICCBACDP; // 0xE4
	::System::Boolean PBKLPHBALIE; // 0xF0
	::System::Boolean JFEBBCNGAFF; // 0xF1
	::System::Byte _padding0[0x2];
	::UnityEngine::NAPRenderPipeline0::DistortionQueueType MLKINFIBHLH; // 0xF4
	::System::Int32 HDLOCHJGKEO; // 0xF8
	::System::Single PLANMHBDEJI; // 0xFC

	::System::Void _ctor(::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigEntityDistortionEffect* DFMKILICPFB, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + KBDPCKHPKEF__CTOR_OFFSET))(this, KLNJAFHIDJM, DFMKILICPFB, PHLFMCCNEGD, NGODDCIOJDP, BCNGPJIGAIG);
	}

	::System::Void EGOBPCCKODL(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::Distortion* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*))((::PBYTE)hIl2Cpp + KBDPCKHPKEF_EGOBPCCKODL_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void GBJBGDEIHKF(::UnityEngine::Rendering::Universal::Distortion* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + KBDPCKHPKEF_GBJBGDEIHKF_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void CKLNMFDFBFJ(::UnityEngine::Rendering::Universal::Distortion* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + KBDPCKHPKEF_CKLNMFDFBFJ_OFFSET))(this, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DHHGGHJNNCB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::Distortion* ALLJBBPIDDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*))((::PBYTE)hIl2Cpp + KBDPCKHPKEF_DHHGGHJNNCB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA);
	}

	::System::Void OPNLPBNKFFD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::Distortion* ALLJBBPIDDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + KBDPCKHPKEF_OPNLPBNKFFD_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, PMNLNNGEIFM);
	}

	::System::Void DEDBKHAHNKB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* JFDDLNDKIKM, ::UnityEngine::Rendering::Universal::Distortion* ALLJBBPIDDA, ::System::Boolean NGJMKJNOGJN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBDPCKHPKEF_DEDBKHAHNKB_OFFSET))(this, JFDDLNDKIKM, ALLJBBPIDDA, NGJMKJNOGJN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDPCKHPKEF_TOSTRING_OFFSET))(this);
	}
};
