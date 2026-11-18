#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/CurvyController.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/MovementDirection.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyClamping.h"
#include "unitysdk/FluffyUnderware/DevTools/FloatRegion.h"
#include "unitysdk/FluffyUnderware/DevTools/RegionOptions_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy::Generator { class CGDataReference; }
namespace FluffyUnderware::Curvy::Generator { class CGVolume; }

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_ABSOLUTETORELATIVE_OFFSET UNITYSDK_OFFSET(0x1F242D30)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1F2435F0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_CROSSABSOLUTETORELATIVE_OFFSET UNITYSDK_OFFSET(0x1F2429A0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_CROSSRELATIVETOABSOLUTE_OFFSET UNITYSDK_OFFSET(0x1F2427F0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GETCLAMPEDCROSSPOSITION_OFFSET UNITYSDK_OFFSET(0x1F242630)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GETINTERPOLATEDSOURCEPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1F243050)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GETINTERPOLATEDSOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F242EB0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GETORIENTATION_OFFSET UNITYSDK_OFFSET(0x1F243450)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GETTANGENT_OFFSET UNITYSDK_OFFSET(0x1F2432B0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_CROSSCLAMPING_OFFSET UNITYSDK_OFFSET(0x1F2425E0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_CROSSFROM_OFFSET UNITYSDK_OFFSET(0x1F242540)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_CROSSLENGTH_OFFSET UNITYSDK_OFFSET(0x1F2425C0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_CROSSRANGEOPTIONS_OFFSET UNITYSDK_OFFSET(0x1F243960)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_CROSSRELATIVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F242600)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_CROSSTO_OFFSET UNITYSDK_OFFSET(0x1F242580)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x1F242B50)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1F242690)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_MAXCROSSRELATIVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F2439E0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_MINCROSSRELATIVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F2439D0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_VOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1F2424B0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1F242490)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F2439F0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_RELATIVETOABSOLUTE_OFFSET UNITYSDK_OFFSET(0x1F242BA0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_SET_CROSSCLAMPING_OFFSET UNITYSDK_OFFSET(0x1F2425F0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_SET_CROSSFROM_OFFSET UNITYSDK_OFFSET(0x1F242550)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_SET_CROSSRELATIVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F242650)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_SET_CROSSTO_OFFSET UNITYSDK_OFFSET(0x1F242590)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1F2424A0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_SIMULATEADVANCE_OFFSET UNITYSDK_OFFSET(0x1F243660)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F243A70)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int VolumeController_TypeDefinitionIndex = 37592;

	class VolumeController : public ::FluffyUnderware::Curvy::Controllers::CurvyController
	{
	public:
		// static const ::System::Single CrossPositionRangeMin; // 0x0
		// static const ::System::Single CrossPositionRangeMax; // 0x0
		::FluffyUnderware::Curvy::Generator::CGDataReference* m_Volume; // 0xB0
		::FluffyUnderware::DevTools::FloatRegion m_CrossRange; // 0xB8
		::System::Single crossRelativePosition; // 0xC4
		::FluffyUnderware::Curvy::CurvyClamping m_CrossClamping; // 0xC8
		::System::Single m_CrossInitialPosition; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::CGDataReference* get_Volume()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGDataReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_VOLUME_OFFSET))(this);
		}

		::System::Void set_Volume(::FluffyUnderware::Curvy::Generator::CGDataReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGDataReference*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_SET_VOLUME_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::CGVolume* get_VolumeData()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_VOLUMEDATA_OFFSET))(this);
		}

		::System::Single get_CrossFrom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_CROSSFROM_OFFSET))(this);
		}

		::System::Void set_CrossFrom(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_SET_CROSSFROM_OFFSET))(this, value);
		}

		::System::Single get_CrossTo()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_CROSSTO_OFFSET))(this);
		}

		::System::Void set_CrossTo(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_SET_CROSSTO_OFFSET))(this, value);
		}

		::System::Single get_CrossLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_CROSSLENGTH_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvyClamping get_CrossClamping()
		{
			return ((::FluffyUnderware::Curvy::CurvyClamping(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_CROSSCLAMPING_OFFSET))(this);
		}

		::System::Void set_CrossClamping(::FluffyUnderware::Curvy::CurvyClamping value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_SET_CROSSCLAMPING_OFFSET))(this, value);
		}

		::System::Single get_CrossRelativePosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_CROSSRELATIVEPOSITION_OFFSET))(this);
		}

		::System::Void set_CrossRelativePosition(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_SET_CROSSRELATIVEPOSITION_OFFSET))(this, value);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_LENGTH_OFFSET))(this);
		}

		::System::Single CrossRelativeToAbsolute(::System::Single relativeDistance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_CROSSRELATIVETOABSOLUTE_OFFSET))(this, relativeDistance);
		}

		::System::Single CrossAbsoluteToRelative(::System::Single worldUnitDistance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_CROSSABSOLUTETORELATIVE_OFFSET))(this, worldUnitDistance);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_ISREADY_OFFSET))(this);
		}

		::System::Single RelativeToAbsolute(::System::Single relativeDistance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_RELATIVETOABSOLUTE_OFFSET))(this, relativeDistance);
		}

		::System::Single AbsoluteToRelative(::System::Single worldUnitDistance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_ABSOLUTETORELATIVE_OFFSET))(this, worldUnitDistance);
		}

		::UnityEngine::Vector3 GetInterpolatedSourcePosition(::System::Single tf)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GETINTERPOLATEDSOURCEPOSITION_OFFSET))(this, tf);
		}

		::System::Void GetInterpolatedSourcePosition_1(::System::Single tf, ::UnityEngine::Vector3& interpolatedPosition, ::UnityEngine::Vector3& tangent, ::UnityEngine::Vector3& up)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GETINTERPOLATEDSOURCEPOSITION_1_OFFSET))(this, tf, interpolatedPosition, tangent, up);
		}

		::UnityEngine::Vector3 GetTangent(::System::Single tf)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GETTANGENT_OFFSET))(this, tf);
		}

		::UnityEngine::Vector3 GetOrientation(::System::Single tf)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GETORIENTATION_OFFSET))(this, tf);
		}

		::System::Void Advance(::System::Single speed, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_ADVANCE_OFFSET))(this, speed, deltaTime);
		}

		::System::Void SimulateAdvance(::System::Single& tf, ::FluffyUnderware::Curvy::Controllers::MovementDirection& direction, ::System::Single speed, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::FluffyUnderware::Curvy::Controllers::MovementDirection&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_SIMULATEADVANCE_OFFSET))(this, tf, direction, speed, deltaTime);
		}

		::FluffyUnderware::DevTools::RegionOptions_1<::System::Single> get_CrossRangeOptions()
		{
			return ((::FluffyUnderware::DevTools::RegionOptions_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_CROSSRANGEOPTIONS_OFFSET))(this);
		}

		::System::Single get_MinCrossRelativePosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_MINCROSSRELATIVEPOSITION_OFFSET))(this);
		}

		::System::Single get_MaxCrossRelativePosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GET_MAXCROSSRELATIVEPOSITION_OFFSET))(this);
		}

		::System::Single GetClampedCrossPosition(::System::Single position)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_GETCLAMPEDCROSSPOSITION_OFFSET))(this, position);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_VOLUMECONTROLLER_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
