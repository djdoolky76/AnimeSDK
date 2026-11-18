#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineCamera; }
namespace MoleMole { class ConfigTimelineCamera_CameraCurveGroup; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define ENONMPMFMBP_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xF9E4A30)
#define ENONMPMFMBP_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xF9E5050)
#define ENONMPMFMBP_GMIJFFLOEEF_OFFSET UNITYSDK_OFFSET(0xF9E4470)
#define ENONMPMFMBP_KJHBHDAJANC_OFFSET UNITYSDK_OFFSET(0xF9E4E00)
#define ENONMPMFMBP_MNGGCOEBEOA_OFFSET UNITYSDK_OFFSET(0xF9E47B0)
#define ENONMPMFMBP_NDFGDKOJDAL_OFFSET UNITYSDK_OFFSET(0xF9E4170)
#define ENONMPMFMBP_PDGLADGDHOI_OFFSET UNITYSDK_OFFSET(0xF9E4430)
#define ENONMPMFMBP__CTOR_OFFSET UNITYSDK_OFFSET(0xF9E4160)

inline static constexpr unsigned int ENONMPMFMBP_TypeDefinitionIndex = 67671;

class ENONMPMFMBP : public ::System::Object
{
public:
	static ::MoleMole::ConfigTimelineCamera** StaticGet_DFMKILICPFB()
	{
		return (::MoleMole::ConfigTimelineCamera**)Il2CppClass::FromTypeDefinitionIndex(ENONMPMFMBP_TypeDefinitionIndex)->GetStaticField(0x43400);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_CLEDLLGDBEE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ENONMPMFMBP_TypeDefinitionIndex)->GetStaticField(0x43408);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENONMPMFMBP__CTOR_OFFSET))(this);
	}

	static ::MoleMole::ConfigTimelineCamera_CameraCurveGroup* NDFGDKOJDAL(::System::String* JPEHOCBIHBC)
	{
		return ((::MoleMole::ConfigTimelineCamera_CameraCurveGroup*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENONMPMFMBP_NDFGDKOJDAL_OFFSET))(JPEHOCBIHBC);
	}

	static ::System::String* GMIJFFLOEEF()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ENONMPMFMBP_GMIJFFLOEEF_OFFSET))();
	}

	static ::System::Boolean MNGGCOEBEOA(::System::String* JPEHOCBIHBC)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ENONMPMFMBP_MNGGCOEBEOA_OFFSET))(JPEHOCBIHBC);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + ENONMPMFMBP_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::UnityEngine::AnimationCurve* KJHBHDAJANC(::System::String* JPEHOCBIHBC, ::System::String* KEKLFCCONCL)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENONMPMFMBP_KJHBHDAJANC_OFFSET))(JPEHOCBIHBC, KEKLFCCONCL);
	}

	static ::System::Void PDGLADGDHOI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENONMPMFMBP_PDGLADGDHOI_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + ENONMPMFMBP_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
