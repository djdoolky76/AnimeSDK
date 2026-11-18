#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigTimelineCamera; }
namespace MoleMole { class ConfigTimelineCamera_CameraCurveGroup; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define BJDBLIFKPGL_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15079C00)
#define BJDBLIFKPGL_GMIJFFLOEEF_OFFSET UNITYSDK_OFFSET(0x1507A010)
#define BJDBLIFKPGL_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1507A3F0)
#define BJDBLIFKPGL_KJHBHDAJANC_OFFSET UNITYSDK_OFFSET(0x1507A1E0)
#define BJDBLIFKPGL_MNGGCOEBEOA_OFFSET UNITYSDK_OFFSET(0x1507A4C0)
#define BJDBLIFKPGL_NDFGDKOJDAL_OFFSET UNITYSDK_OFFSET(0x1507A250)
#define BJDBLIFKPGL_NNENLNPCIKD_OFFSET UNITYSDK_OFFSET(0x1507A630)
#define BJDBLIFKPGL_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x15079B60)
#define BJDBLIFKPGL__CTOR_OFFSET UNITYSDK_OFFSET(0x15079AD0)

inline static constexpr unsigned int BJDBLIFKPGL_TypeDefinitionIndex = 84531;

class BJDBLIFKPGL
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* NCMKAIMMMKI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDBLIFKPGL__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BJDBLIFKPGL_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigTimelineCamera*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigTimelineCamera*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDBLIFKPGL_CREATEOP_OFFSET))(this);
	}

	::System::String* GMIJFFLOEEF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDBLIFKPGL_GMIJFFLOEEF_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* KJHBHDAJANC(::System::String* JPEHOCBIHBC, ::System::String* KEKLFCCONCL)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BJDBLIFKPGL_KJHBHDAJANC_OFFSET))(this, JPEHOCBIHBC, KEKLFCCONCL);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BJDBLIFKPGL_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean MNGGCOEBEOA(::System::String* JPEHOCBIHBC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJDBLIFKPGL_MNGGCOEBEOA_OFFSET))(this, JPEHOCBIHBC);
	}

	::System::Void NNENLNPCIKD(::MoleMole::ConfigTimelineCamera* GKJIDKDGIAO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTimelineCamera*))((::PBYTE)hIl2Cpp + BJDBLIFKPGL_NNENLNPCIKD_OFFSET))(this, GKJIDKDGIAO);
	}

	::MoleMole::ConfigTimelineCamera_CameraCurveGroup* NDFGDKOJDAL(::System::String* JPEHOCBIHBC)
	{
		return ((::MoleMole::ConfigTimelineCamera_CameraCurveGroup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJDBLIFKPGL_NDFGDKOJDAL_OFFSET))(this, JPEHOCBIHBC);
	}
};
