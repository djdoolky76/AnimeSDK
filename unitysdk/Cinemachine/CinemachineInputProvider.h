#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/FE0429FA8B08E762.h"

namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionReference; }

#define CINEMACHINE_CINEMACHINEINPUTPROVIDER_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x2A66140)
#define CINEMACHINE_CINEMACHINEINPUTPROVIDER_BA516E6B1E41A10E_OFFSET UNITYSDK_OFFSET(0x2A66690)
#define CINEMACHINE_CINEMACHINEINPUTPROVIDER_F54CB51A618873CA_OFFSET UNITYSDK_OFFSET(0x2A66160)
#define CINEMACHINE_CINEMACHINEINPUTPROVIDER_FCA7CF1A59105003_OFFSET UNITYSDK_OFFSET(0x2A66050)
#define CINEMACHINE_CINEMACHINEINPUTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x2A66780)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineInputProvider_TypeDefinitionIndex = 18400;

	class CinemachineInputProvider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 PlayerIndex; // 0x20
		::System::Boolean AutoEnableInputs; // 0x24
		::System::Byte _padding0[0x3];
		::UnityEngine::InputSystem::InputActionReference* XYAxis; // 0x28
		::UnityEngine::InputSystem::InputActionReference* ZAxis; // 0x30
		::Il2CppArray<::UnityEngine::InputSystem::InputAction*>* A1262CFBE14572C1; // 0x38

		static ::UnityEngine::InputSystem::InputAction* BA516E6B1E41A10E(::FE0429FA8B08E762& BFC49DB2BCAD82F6, ::UnityEngine::InputSystem::InputActionReference* B8BC42FED07EB777)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::FE0429FA8B08E762&, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTPROVIDER_BA516E6B1E41A10E_OFFSET))(BFC49DB2BCAD82F6, B8BC42FED07EB777);
		}

		::UnityEngine::InputSystem::InputAction* F54CB51A618873CA(::System::Int32 F24A60394CB7A82C, ::UnityEngine::InputSystem::InputActionReference* F06BA04CEB42D9C0)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID, ::System::Int32, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTPROVIDER_F54CB51A618873CA_OFFSET))(this, F24A60394CB7A82C, F06BA04CEB42D9C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTPROVIDER_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Single FCA7CF1A59105003(::System::Int32 F24A60394CB7A82C)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTPROVIDER_FCA7CF1A59105003_OFFSET))(this, F24A60394CB7A82C);
		}
	};
}
