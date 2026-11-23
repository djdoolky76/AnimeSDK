#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TA/EnvironmentSystem/ESCategory_B754C17E69F48044.h"

namespace TA::EnvironmentSystem { class ESCategory; }
namespace TA::EnvironmentSystem { class ESCustomData; }

#define TA_ENVIRONMENTSYSTEM_ESPHASE_B49D374ED9CEA60A_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x28C03F0)
#define TA_ENVIRONMENTSYSTEM_ESPHASE_B49D374ED9CEA60A_EB0354AC58FB077D_OFFSET UNITYSDK_OFFSET(0x28C04F0)
#define TA_ENVIRONMENTSYSTEM_ESPHASE_B49D374ED9CEA60A__CTOR_OFFSET UNITYSDK_OFFSET(0x28C04C0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESPhase_B49D374ED9CEA60A_TypeDefinitionIndex = 16295;

	struct alignas(8) ESPhase_B49D374ED9CEA60A
	{
		::Il2CppArray<::TA::EnvironmentSystem::ESCategory*>* E45E175FF4203583; // 0x10
		::System::Int32 ACDA1912599CCFCA; // 0x18
		::System::Byte _padding0[0x4];
		::TA::EnvironmentSystem::ESCategory_B754C17E69F48044 F25453B15CF673A5; // 0x20

		::System::Void _ctor(::Il2CppArray<::TA::EnvironmentSystem::ESCategory*>* E5F11F5B675209B6)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::TA::EnvironmentSystem::ESCategory*>*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPHASE_B49D374ED9CEA60A__CTOR_OFFSET))(this, E5F11F5B675209B6);
		}

		::System::Boolean E6CAD58306FCDCB5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPHASE_B49D374ED9CEA60A_E6CAD58306FCDCB5_OFFSET))(this);
		}

		::TA::EnvironmentSystem::ESCustomData* EB0354AC58FB077D()
		{
			return ((::TA::EnvironmentSystem::ESCustomData*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPHASE_B49D374ED9CEA60A_EB0354AC58FB077D_OFFSET))(this);
		}
	};
}
