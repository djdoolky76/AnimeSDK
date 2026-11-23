#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineDollyCart_FE273D90A973A942.h"
#include "unitysdk/Cinemachine/CinemachinePathBase_EBD9A49237BF2C79.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachinePathBase; }

#define CINEMACHINE_CINEMACHINEDOLLYCART_AD81EA9026F6F41A_OFFSET UNITYSDK_OFFSET(0x2A4B630)
#define CINEMACHINE_CINEMACHINEDOLLYCART_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x2A4B780)
#define CINEMACHINE_CINEMACHINEDOLLYCART_E2C396BED688BD14_OFFSET UNITYSDK_OFFSET(0x2A4B530)
#define CINEMACHINE_CINEMACHINEDOLLYCART_F5E407B60CCCAC07_OFFSET UNITYSDK_OFFSET(0x2A4B580)
#define CINEMACHINE_CINEMACHINEDOLLYCART__CTOR_OFFSET UNITYSDK_OFFSET(0x2A4B820)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineDollyCart_TypeDefinitionIndex = 18363;

	class CinemachineDollyCart : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachinePathBase* m_Path; // 0x20
		::Cinemachine::CinemachineDollyCart_FE273D90A973A942 m_UpdateMethod; // 0x28
		::Cinemachine::CinemachinePathBase_EBD9A49237BF2C79 m_PositionUnits; // 0x2C
		::System::Single m_Speed; // 0x30
		::System::Single m_Position; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART__CTOR_OFFSET))(this);
		}

		::System::Void AD81EA9026F6F41A(::System::Single E1824A92861E770E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART_AD81EA9026F6F41A_OFFSET))(this, E1824A92861E770E);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART_E02954280801633F_OFFSET))(this);
		}

		::System::Void F5E407B60CCCAC07()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART_F5E407B60CCCAC07_OFFSET))(this);
		}

		::System::Void E2C396BED688BD14()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEDOLLYCART_E2C396BED688BD14_OFFSET))(this);
		}
	};
}
