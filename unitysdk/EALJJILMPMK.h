#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class APDAIKOBAKC;
class MFDLPOGAEHM;
namespace MoleMole::Cameras { class AvatarLayoutCameraConfig; }
namespace MoleMole::Config { class ConfigAvatarLayoutCameraMisc; }
namespace System { class String; }

#define EALJJILMPMK_DBBNKNPPMMG_OFFSET UNITYSDK_OFFSET(0x154663F0)
#define EALJJILMPMK_IIMBPNIKCJA_OFFSET UNITYSDK_OFFSET(0x15466510)
#define EALJJILMPMK_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x15466520)
#define EALJJILMPMK_JPBNOOMAKNG_OFFSET UNITYSDK_OFFSET(0x154665F0)
#define EALJJILMPMK_PFNKIBFKFEK_OFFSET UNITYSDK_OFFSET(0x15466400)
#define EALJJILMPMK_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x15466230)
#define EALJJILMPMK__CTOR_OFFSET UNITYSDK_OFFSET(0x15466140)

inline static constexpr unsigned int EALJJILMPMK_TypeDefinitionIndex = 42587;

class EALJJILMPMK
{
public:
	::MFDLPOGAEHM* _NOEPLDLMONO_k__BackingField; // 0x28
	::APDAIKOBAKC* _CKJPBAKMKIM_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EALJJILMPMK__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EALJJILMPMK_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::MFDLPOGAEHM* DBBNKNPPMMG()
	{
		return ((::MFDLPOGAEHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EALJJILMPMK_DBBNKNPPMMG_OFFSET))(this);
	}

	::MoleMole::Config::ConfigAvatarLayoutCameraMisc* PFNKIBFKFEK()
	{
		return ((::MoleMole::Config::ConfigAvatarLayoutCameraMisc*(*)(::PVOID))((::PBYTE)hIl2Cpp + EALJJILMPMK_PFNKIBFKFEK_OFFSET))(this);
	}

	::APDAIKOBAKC* IIMBPNIKCJA()
	{
		return ((::APDAIKOBAKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EALJJILMPMK_IIMBPNIKCJA_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EALJJILMPMK_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Cameras::AvatarLayoutCameraConfig* JPBNOOMAKNG(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Cameras::AvatarLayoutCameraConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EALJJILMPMK_JPBNOOMAKNG_OFFSET))(this, MCOHLHMKLIP);
	}
};
