#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class NCPFEKEPEKK;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EGGEACHGCJF_BEPOMLFEGHL_OFFSET UNITYSDK_OFFSET(0x16BDCBE0)
#define EGGEACHGCJF_DMAJLDDDBCC_OFFSET UNITYSDK_OFFSET(0x16BDCE30)
#define EGGEACHGCJF_ECGOCKECLHL_OFFSET UNITYSDK_OFFSET(0x16BDC960)
#define EGGEACHGCJF_HGOFINENHAG_OFFSET UNITYSDK_OFFSET(0x16BDC750)
#define EGGEACHGCJF_LJINNPIKAAJ_OFFSET UNITYSDK_OFFSET(0x16BDC9B0)
#define EGGEACHGCJF__CTOR_OFFSET UNITYSDK_OFFSET(0x16BDC740)

inline static constexpr unsigned int EGGEACHGCJF_TypeDefinitionIndex = 69620;

class EGGEACHGCJF : public ::System::Object
{
public:
	::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* LFJDDLLKPPN; // 0x10
	::MoleMole::Cameras::CameraTrackBlending* BGJGEAJDCKK; // 0x18
	::NCPFEKEPEKK* HCGANBEJHCC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGEACHGCJF__CTOR_OFFSET))(this);
	}

	::System::Void HGOFINENHAG(::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + EGGEACHGCJF_HGOFINENHAG_OFFSET))(this, MBNOFPBEFAO);
	}

	::System::Void ECGOCKECLHL(::NCPFEKEPEKK* LNKOEIGICOA)
	{
		return ((::System::Void(*)(::PVOID, ::NCPFEKEPEKK*))((::PBYTE)hIl2Cpp + EGGEACHGCJF_ECGOCKECLHL_OFFSET))(this, LNKOEIGICOA);
	}

	::System::Void LJINNPIKAAJ(::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* HAKFLKOCACN, ::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + EGGEACHGCJF_LJINNPIKAAJ_OFFSET))(this, HAKFLKOCACN, MBNOFPBEFAO);
	}

	::System::Void BEPOMLFEGHL(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGGEACHGCJF_BEPOMLFEGHL_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void DMAJLDDDBCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGEACHGCJF_DMAJLDDDBCC_OFFSET))(this);
	}
};
