#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class JBIPOEBOMFH;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CPEJEKCGEDH_IBBLCAOMCKF_1_OFFSET UNITYSDK_OFFSET(0x153489C0)
#define CPEJEKCGEDH_IBBLCAOMCKF_2_OFFSET UNITYSDK_OFFSET(0x153489F0)
#define CPEJEKCGEDH_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x15348980)
#define CPEJEKCGEDH_IDFJCLJNIIO_OFFSET UNITYSDK_OFFSET(0x15348D20)
#define CPEJEKCGEDH_JCNFFEIPPMH_OFFSET UNITYSDK_OFFSET(0x15348F40)
#define CPEJEKCGEDH_JLLNCGKKPHL_OFFSET UNITYSDK_OFFSET(0x15348CC0)
#define CPEJEKCGEDH_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x15348A20)
#define CPEJEKCGEDH_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x15348A90)
#define CPEJEKCGEDH__CTOR_OFFSET UNITYSDK_OFFSET(0x15348A40)

inline static constexpr unsigned int CPEJEKCGEDH_TypeDefinitionIndex = 67481;

class CPEJEKCGEDH : public ::System::Object
{
public:
	::JBIPOEBOMFH* MJPMJMCFPIC; // 0x10
	::Foundation::Variable_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>> LHPFGIEGNCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEJEKCGEDH__CTOR_OFFSET))(this);
	}

	::System::Void IBBLCAOMCKF(::PipelineCamera::WorldBasicCameraData& BPEGDPLGFPO, ::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CPEJEKCGEDH_IBBLCAOMCKF_OFFSET))(this, BPEGDPLGFPO, MBNOFPBEFAO);
	}

	::System::Void IBBLCAOMCKF_1(::System::Func_1<::PipelineCamera::WorldBasicCameraData>* JEAMKOOJJJC, ::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CPEJEKCGEDH_IBBLCAOMCKF_1_OFFSET))(this, JEAMKOOJJJC, MBNOFPBEFAO);
	}

	::System::Void IBBLCAOMCKF_2(::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* NBNMHGHLHBF, ::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CPEJEKCGEDH_IBBLCAOMCKF_2_OFFSET))(this, NBNMHGHLHBF, MBNOFPBEFAO);
	}

	::System::Void NPOLNFDBOOD(::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CPEJEKCGEDH_NPOLNFDBOOD_OFFSET))(this, MBNOFPBEFAO);
	}

	::PipelineCamera::WorldBasicCameraData OMPFLKCBFHF(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> AAOCANGHBDG)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CPEJEKCGEDH_OMPFLKCBFHF_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean JLLNCGKKPHL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEJEKCGEDH_JLLNCGKKPHL_OFFSET))(this);
	}

	::System::Void IDFJCLJNIIO(::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CPEJEKCGEDH_IDFJCLJNIIO_OFFSET))(this, MBNOFPBEFAO);
	}

	::System::Void JCNFFEIPPMH(::PipelineCamera::WorldBasicCameraData& BPEGDPLGFPO, ::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CPEJEKCGEDH_JCNFFEIPPMH_OFFSET))(this, BPEGDPLGFPO, MBNOFPBEFAO);
	}
};
