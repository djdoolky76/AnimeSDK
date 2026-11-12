#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADKFPNMPIDD.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCharacterController; }

#define BACDIGOHEFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16CE31C0)
#define BACDIGOHEFJ_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x16CE30D0)
#define BACDIGOHEFJ_IFOODPPCJIK_OFFSET UNITYSDK_OFFSET(0x16CE2EE0)
#define BACDIGOHEFJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16CE3130)
#define BACDIGOHEFJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16CE2A50)
#define BACDIGOHEFJ_LEOHPDFIKHB_OFFSET UNITYSDK_OFFSET(0x16CE2C10)
#define BACDIGOHEFJ_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x16CE2B10)
#define BACDIGOHEFJ_NDFBMHNEKMD_OFFSET UNITYSDK_OFFSET(0x16CE2CE0)
#define BACDIGOHEFJ_PODJJPBKLDC_OFFSET UNITYSDK_OFFSET(0x16CE2AC0)

inline static constexpr unsigned int BACDIGOHEFJ_TypeDefinitionIndex = 58209;

	class BACDIGOHEFJ : public ::ADKFPNMPIDD
	{
	public:
		::RPG::GameCore::AdventureCharacterController* NGCHOMCMKPI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACDIGOHEFJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACDIGOHEFJ_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PODJJPBKLDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACDIGOHEFJ_PODJJPBKLDC_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACDIGOHEFJ_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACDIGOHEFJ_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BACDIGOHEFJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean LEOHPDFIKHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BACDIGOHEFJ_LEOHPDFIKHB_OFFSET))(this);
		}

		::System::Boolean NDFBMHNEKMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BACDIGOHEFJ_NDFBMHNEKMD_OFFSET))(this);
		}

		::UnityEngine::Vector3 IFOODPPCJIK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BACDIGOHEFJ_IFOODPPCJIK_OFFSET))(this);
		}

	};
