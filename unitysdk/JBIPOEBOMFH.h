#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFAFEDEPF.h"
#include "unitysdk/OCLPKBONCJJ.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define JBIPOEBOMFH_CEIGDOCAPIM_OFFSET UNITYSDK_OFFSET(0x153CA380)
#define JBIPOEBOMFH_CMJEGIAKJKP_OFFSET UNITYSDK_OFFSET(0x153CA2C0)
#define JBIPOEBOMFH_DDMLMBDEPKC_OFFSET UNITYSDK_OFFSET(0x153CA420)
#define JBIPOEBOMFH_DEAPJEIDFDP_OFFSET UNITYSDK_OFFSET(0x153CA330)
#define JBIPOEBOMFH_LFPKJCAHLPN_OFFSET UNITYSDK_OFFSET(0x153CA410)
#define JBIPOEBOMFH_MHOCMEMLCDI_OFFSET UNITYSDK_OFFSET(0x153CA2D0)
#define JBIPOEBOMFH_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x153C9F50)
#define JBIPOEBOMFH__CTOR_OFFSET UNITYSDK_OFFSET(0x153C9F40)

inline static constexpr unsigned int JBIPOEBOMFH_TypeDefinitionIndex = 54712;

class JBIPOEBOMFH : public ::System::Object
{
public:
	::System::Nullable_1<::OCLPKBONCJJ> LBLDJIPHIAK; // 0x10
	::System::Byte _padding0[0x20];
	::System::Nullable_1<::BBKFAFEDEPF> NAELMCDFEHF; // 0x38
	::System::Byte _padding1[0x58];
	::PipelineCamera::WorldBasicCameraDataDeltaFlag MFLEFEGAMHG; // 0x98
	::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> HCMMNDDJIHL; // 0x9C

	::System::Void _ctor(::PipelineCamera::WorldBasicCameraDataDeltaFlag GOMLCMDELHF)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + JBIPOEBOMFH__CTOR_OFFSET))(this, GOMLCMDELHF);
	}

	::PipelineCamera::WorldBasicCameraData OKJCHFGIKBH(::System::Single DHEDCAIGHPI, ::System::Single PEDEAPLEKJL, ::PipelineCamera::WorldBasicCameraData& ELKGOHFIOEH)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::System::Single, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + JBIPOEBOMFH_OKJCHFGIKBH_OFFSET))(this, DHEDCAIGHPI, PEDEAPLEKJL, ELKGOHFIOEH);
	}

	::System::Boolean CMJEGIAKJKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIPOEBOMFH_CMJEGIAKJKP_OFFSET))(this);
	}

	::System::Void MHOCMEMLCDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIPOEBOMFH_MHOCMEMLCDI_OFFSET))(this);
	}

	::System::Void DEAPJEIDFDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIPOEBOMFH_DEAPJEIDFDP_OFFSET))(this);
	}

	::System::Void CEIGDOCAPIM(::PipelineCamera::WorldBasicCameraData& GPBKDGGEBCF)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + JBIPOEBOMFH_CEIGDOCAPIM_OFFSET))(this, GPBKDGGEBCF);
	}

	::System::Boolean LFPKJCAHLPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIPOEBOMFH_LFPKJCAHLPN_OFFSET))(this);
	}

	::System::Void DDMLMBDEPKC(::OCLPKBONCJJ& KHFKFKBLEAC)
	{
		return ((::System::Void(*)(::PVOID, ::OCLPKBONCJJ&))((::PBYTE)hIl2Cpp + JBIPOEBOMFH_DDMLMBDEPKC_OFFSET))(this, KHFKFKBLEAC);
	}
};
