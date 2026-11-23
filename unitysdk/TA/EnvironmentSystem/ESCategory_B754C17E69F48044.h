#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TA::EnvironmentSystem { class ESCustomData; }

#define TA_ENVIRONMENTSYSTEM_ESCATEGORY_B754C17E69F48044_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x28DD360)
#define TA_ENVIRONMENTSYSTEM_ESCATEGORY_B754C17E69F48044_EB0354AC58FB077D_OFFSET UNITYSDK_OFFSET(0x28DD420)
#define TA_ENVIRONMENTSYSTEM_ESCATEGORY_B754C17E69F48044__CTOR_OFFSET UNITYSDK_OFFSET(0x28DD3C0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESCategory_B754C17E69F48044_TypeDefinitionIndex = 16354;

	struct alignas(8) ESCategory_B754C17E69F48044
	{
		::System::Collections::Generic::List_1<::TA::EnvironmentSystem::ESCustomData*>* E071E38F760F330D; // 0x10
		::System::Int32 AD0A6FD94E858431; // 0x18
		::System::Int32 A02AF894637B3DAE; // 0x1C

		::System::Void _ctor(::System::Collections::Generic::List_1<::TA::EnvironmentSystem::ESCustomData*>* F7A3A9CBD78A50FC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TA::EnvironmentSystem::ESCustomData*>*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESCATEGORY_B754C17E69F48044__CTOR_OFFSET))(this, F7A3A9CBD78A50FC);
		}

		::System::Boolean E6CAD58306FCDCB5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESCATEGORY_B754C17E69F48044_E6CAD58306FCDCB5_OFFSET))(this);
		}

		::TA::EnvironmentSystem::ESCustomData* EB0354AC58FB077D()
		{
			return ((::TA::EnvironmentSystem::ESCustomData*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESCATEGORY_B754C17E69F48044_EB0354AC58FB077D_OFFSET))(this);
		}
	};
}
