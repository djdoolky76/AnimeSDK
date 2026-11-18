#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP_GETCURVEDICT_OFFSET UNITYSDK_OFFSET(0x1BA5B6F0)
#define MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP_GETCURVE_OFFSET UNITYSDK_OFFSET(0x1BA5B930)
#define MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP_SETCURVE_OFFSET UNITYSDK_OFFSET(0x1BA5BA20)
#define MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA5BB70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTimelineCamera_CameraCurveGroup_TypeDefinitionIndex = 53650;

	class ConfigTimelineCamera_CameraCurveGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* CurveList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* _curveDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* GetCurveDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP_GETCURVEDICT_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* GetCurve(::System::String* propertyName)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP_GETCURVE_OFFSET))(this, propertyName);
		}

		::System::Void SetCurve(::System::String* propertyName, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP_SETCURVE_OFFSET))(this, propertyName, curve);
		}
	};
}
