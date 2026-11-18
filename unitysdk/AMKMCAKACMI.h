#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class JKHEHAHFEHK;
class OCLKPPOGDMO;
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace System { class String; }

#define AMKMCAKACMI_HBKOGJJDLCK_OFFSET UNITYSDK_OFFSET(0x143B97F0)
#define AMKMCAKACMI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x143B9710)
#define AMKMCAKACMI_JOHMMGKMJMI_OFFSET UNITYSDK_OFFSET(0x143B9800)
#define AMKMCAKACMI_JPBNOOMAKNG_OFFSET UNITYSDK_OFFSET(0x143B9630)
#define AMKMCAKACMI_PNAGBFPFLGM_OFFSET UNITYSDK_OFFSET(0x143B97E0)
#define AMKMCAKACMI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x143B9470)
#define AMKMCAKACMI__CTOR_OFFSET UNITYSDK_OFFSET(0x143B9380)

inline static constexpr unsigned int AMKMCAKACMI_TypeDefinitionIndex = 39979;

class AMKMCAKACMI
{
public:
	::OCLKPPOGDMO* _HMFGEJFKEND_k__BackingField; // 0x28
	::JKHEHAHFEHK* _GDCIBMKGAAF_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKMCAKACMI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + AMKMCAKACMI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::MoleMole::Cameras::OverShoulderCameraConfig* JPBNOOMAKNG(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Cameras::OverShoulderCameraConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AMKMCAKACMI_JPBNOOMAKNG_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + AMKMCAKACMI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::JKHEHAHFEHK* PNAGBFPFLGM()
	{
		return ((::JKHEHAHFEHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKMCAKACMI_PNAGBFPFLGM_OFFSET))(this);
	}

	::OCLKPPOGDMO* HBKOGJJDLCK()
	{
		return ((::OCLKPPOGDMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKMCAKACMI_HBKOGJJDLCK_OFFSET))(this);
	}

	::MoleMole::Cameras::OverrideOverShoulderCameraConfig* JOHMMGKMJMI(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Cameras::OverrideOverShoulderCameraConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AMKMCAKACMI_JOHMMGKMJMI_OFFSET))(this, MCOHLHMKLIP);
	}
};
