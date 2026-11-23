#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineImpulseDefinition_B2CA1E94F34C2B7F.h"
#include "unitysdk/Cinemachine/CinemachineImpulseDefinition_B643A117C825B7DF.h"
#include "unitysdk/Cinemachine/CinemachineImpulseDefinition_B972E84B3E681456.h"
#include "unitysdk/E7ED61E0B00DDE0C/E5962D3415195593_EnvelopeDefinition.h"
#include "unitysdk/E7ED61E0B00DDE0C/E5962D3415195593_FE86E3FB574455A0_BB46E180FC9EB753.h"
#include "unitysdk/E7ED61E0B00DDE0C/E5962D3415195593_FE86E3FB574455A0_FC6217B4FC8FF162.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class SignalSourceAsset; }
namespace E7ED61E0B00DDE0C { class E5962D3415195593_FE86E3FB574455A0; }
namespace UnityEngine { class FAED0374422E783A; }

#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATEANDRETURNEVENT_OFFSET UNITYSDK_OFFSET(0x2A63D40)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATEEVENT_OFFSET UNITYSDK_OFFSET(0x2A63F70)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATESTANDARDSHAPES_OFFSET UNITYSDK_OFFSET(0x2A63FB0)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_GETSTANDARDCURVE_OFFSET UNITYSDK_OFFSET(0x2A65190)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_GET_IMPULSECURVE_OFFSET UNITYSDK_OFFSET(0x2A656B0)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_LEGACYCREATEANDRETURNEVENT_OFFSET UNITYSDK_OFFSET(0x2A65210)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x2A65500)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x2A655E0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseDefinition_TypeDefinitionIndex = 18407;

	class CinemachineImpulseDefinition : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::FAED0374422E783A*>** StaticGet_sStandardShapes()
		{
			return (::Il2CppArray<::UnityEngine::FAED0374422E783A*>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineImpulseDefinition_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 m_ImpulseChannel; // 0x10
		::Cinemachine::CinemachineImpulseDefinition_B2CA1E94F34C2B7F m_ImpulseShape; // 0x14
		::UnityEngine::FAED0374422E783A* m_CustomImpulseShape; // 0x18
		::System::Single m_ImpulseDuration; // 0x20
		::Cinemachine::CinemachineImpulseDefinition_B972E84B3E681456 m_ImpulseType; // 0x24
		::System::Single m_DissipationRate; // 0x28
		::System::Byte _padding0[0x4];
		::Cinemachine::SignalSourceAsset* m_RawSignal; // 0x30
		::System::Single m_AmplitudeGain; // 0x38
		::System::Single m_FrequencyGain; // 0x3C
		::Cinemachine::CinemachineImpulseDefinition_B643A117C825B7DF m_RepeatMode; // 0x40
		::System::Boolean m_Randomize; // 0x44
		::System::Byte _padding1[0x3];
		::E7ED61E0B00DDE0C::E5962D3415195593_EnvelopeDefinition m_TimeEnvelope; // 0x48
		::System::Single m_ImpactRadius; // 0x68
		::E7ED61E0B00DDE0C::E5962D3415195593_FE86E3FB574455A0_BB46E180FC9EB753 m_DirectionMode; // 0x6C
		::E7ED61E0B00DDE0C::E5962D3415195593_FE86E3FB574455A0_FC6217B4FC8FF162 m_DissipationMode; // 0x70
		::System::Single m_DissipationDistance; // 0x74
		::System::Single m_PropagationSpeed; // 0x78

		static ::System::Void CreateStandardShapes()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATESTANDARDSHAPES_OFFSET))();
		}

		::E7ED61E0B00DDE0C::E5962D3415195593_FE86E3FB574455A0* CreateAndReturnEvent(::UnityEngine::Vector3 EB211B01816ACA79, ::UnityEngine::Vector3 E53F9540C727B4AB)
		{
			return ((::E7ED61E0B00DDE0C::E5962D3415195593_FE86E3FB574455A0*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATEANDRETURNEVENT_OFFSET))(this, EB211B01816ACA79, E53F9540C727B4AB);
		}

		::UnityEngine::FAED0374422E783A* get_ImpulseCurve()
		{
			return ((::UnityEngine::FAED0374422E783A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_GET_IMPULSECURVE_OFFSET))(this);
		}

		::System::Void CreateEvent(::UnityEngine::Vector3 EB211B01816ACA79, ::UnityEngine::Vector3 E53F9540C727B4AB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATEEVENT_OFFSET))(this, EB211B01816ACA79, E53F9540C727B4AB);
		}

		::E7ED61E0B00DDE0C::E5962D3415195593_FE86E3FB574455A0* LegacyCreateAndReturnEvent(::UnityEngine::Vector3 EB211B01816ACA79, ::UnityEngine::Vector3 E53F9540C727B4AB)
		{
			return ((::E7ED61E0B00DDE0C::E5962D3415195593_FE86E3FB574455A0*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_LEGACYCREATEANDRETURNEVENT_OFFSET))(this, EB211B01816ACA79, E53F9540C727B4AB);
		}

		static ::UnityEngine::FAED0374422E783A* GetStandardCurve(::Cinemachine::CinemachineImpulseDefinition_B2CA1E94F34C2B7F B9321BFB972550CD)
		{
			return ((::UnityEngine::FAED0374422E783A*(*)(::Cinemachine::CinemachineImpulseDefinition_B2CA1E94F34C2B7F))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_GETSTANDARDCURVE_OFFSET))(B9321BFB972550CD);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_ONVALIDATE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION__CTOR_OFFSET))(this);
		}
	};
}
