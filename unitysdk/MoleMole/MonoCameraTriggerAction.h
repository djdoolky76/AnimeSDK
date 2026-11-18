#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOCAMERATRIGGERACTION_FOKANGNBOOD_OFFSET UNITYSDK_OFFSET(0x14685030)
#define MOLEMOLE_MONOCAMERATRIGGERACTION_TRIGGERVCAMPOINTCLEAR_OFFSET UNITYSDK_OFFSET(0x14685610)
#define MOLEMOLE_MONOCAMERATRIGGERACTION_TRIGGERVCAMPOINTENTER_OFFSET UNITYSDK_OFFSET(0x14684A10)
#define MOLEMOLE_MONOCAMERATRIGGERACTION_TRIGGERVCAMPOINTEXIT_OFFSET UNITYSDK_OFFSET(0x146856A0)
#define MOLEMOLE_MONOCAMERATRIGGERACTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x14685780)
#define MOLEMOLE_MONOCAMERATRIGGERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x14685720)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCameraTriggerAction_TypeDefinitionIndex = 59595;

	class MonoCameraTriggerAction : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_HPPOEGLJPIB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCameraTriggerAction_TypeDefinitionIndex)->GetStaticField(0x11A10);
		}
		// static const ::System::String* AHMPAFMJOCG; // 0x0
		::System::Single tolerateAngle; // 0x18
		::System::Boolean isElevationRatioRecover; // 0x1C
		::System::Byte _padding0[0x3];
		::Cinemachine::CinemachineBlendDefinition BlendDefinitionEnter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAMERATRIGGERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAMERATRIGGERACTION__CCTOR_OFFSET))();
		}

		::System::Void TriggerVCamPointEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAMERATRIGGERACTION_TRIGGERVCAMPOINTENTER_OFFSET))(this);
		}

		static ::System::Void TriggerVCamPointClear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAMERATRIGGERACTION_TRIGGERVCAMPOINTCLEAR_OFFSET))();
		}

		::System::Void TriggerVCamPointExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAMERATRIGGERACTION_TRIGGERVCAMPOINTEXIT_OFFSET))(this);
		}

		::System::Single FOKANGNBOOD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAMERATRIGGERACTION_FOKANGNBOOD_OFFSET))(this);
		}
	};
}
