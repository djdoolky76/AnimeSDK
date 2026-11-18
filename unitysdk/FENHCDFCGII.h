#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowResolution.h"

namespace MoleMole { class PerformanceSettingProfile; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define FENHCDFCGII_BOGEAMBEFMJ_OFFSET UNITYSDK_OFFSET(0x1320F080)
#define FENHCDFCGII_EBNLIPFINGB_OFFSET UNITYSDK_OFFSET(0x1320EFC0)
#define FENHCDFCGII_FPMOCAFHAGO_OFFSET UNITYSDK_OFFSET(0x1320F1C0)
#define FENHCDFCGII_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x13208A20)
#define FENHCDFCGII_GNIACNDNMCH_OFFSET UNITYSDK_OFFSET(0x1320F300)
#define FENHCDFCGII_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x1320F240)
#define FENHCDFCGII_MHLOABABHKB_OFFSET UNITYSDK_OFFSET(0x1320F280)
#define FENHCDFCGII_OHHPFOIOIHK_OFFSET UNITYSDK_OFFSET(0x1320F100)
#define FENHCDFCGII__CTOR_OFFSET UNITYSDK_OFFSET(0x13208A10)

inline static constexpr unsigned int FENHCDFCGII_TypeDefinitionIndex = 73747;

class FENHCDFCGII : public ::System::Object
{
public:
	::MoleMole::PerformanceSettingProfile* NFAEDJIBGPP; // 0x10

	::System::Void _ctor(::MoleMole::PerformanceSettingProfile* OOFMBAPKOEN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingProfile*))((::PBYTE)hIl2Cpp + FENHCDFCGII__CTOR_OFFSET))(this, OOFMBAPKOEN);
	}

	::System::Void GIAOBHOJCDP(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FENHCDFCGII_GIAOBHOJCDP_OFFSET))(this, ICALOEBJCBL);
	}

	static ::System::Void BOGEAMBEFMJ(::System::Int32 CJOGPMGIKHL)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FENHCDFCGII_BOGEAMBEFMJ_OFFSET))(CJOGPMGIKHL);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHCDFCGII_HNDGJKPNIHA_OFFSET))(this);
	}

	static ::System::Int32 MHLOABABHKB(::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution))((::PBYTE)hIl2Cpp + FENHCDFCGII_MHLOABABHKB_OFFSET))(HAAEBCOBKFF);
	}

	static ::System::Void FPMOCAFHAGO(::System::Boolean NAHEOPOILMI)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FENHCDFCGII_FPMOCAFHAGO_OFFSET))(NAHEOPOILMI);
	}

	static ::System::Void EBNLIPFINGB(::System::Boolean GOHFNIAPGDJ, ::System::Single FIBPHBLJFIF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + FENHCDFCGII_EBNLIPFINGB_OFFSET))(GOHFNIAPGDJ, FIBPHBLJFIF);
	}

	static ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* OHHPFOIOIHK()
	{
		return ((::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*(*)())((::PBYTE)hIl2Cpp + FENHCDFCGII_OHHPFOIOIHK_OFFSET))();
	}

	static ::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution GNIACNDNMCH(::System::Int32 HAAEBCOBKFF)
	{
		return ((::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution(*)(::System::Int32))((::PBYTE)hIl2Cpp + FENHCDFCGII_GNIACNDNMCH_OFFSET))(HAAEBCOBKFF);
	}
};
