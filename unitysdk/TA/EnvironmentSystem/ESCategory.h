#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TA/EnvironmentSystem/ESCategory_B754C17E69F48044.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TA::EnvironmentSystem { class ESCustomData; }

#define TA_ENVIRONMENTSYSTEM_ESCATEGORY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x28D9E40)
#define TA_ENVIRONMENTSYSTEM_ESCATEGORY__CTOR_OFFSET UNITYSDK_OFFSET(0x28D9F00)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESCategory_TypeDefinitionIndex = 16355;

	class ESCategory : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::TA::EnvironmentSystem::ESCustomData*>* customDatas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESCATEGORY__CTOR_OFFSET))(this);
		}

		::TA::EnvironmentSystem::ESCategory_B754C17E69F48044 GetEnumerator()
		{
			return ((::TA::EnvironmentSystem::ESCategory_B754C17E69F48044(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESCATEGORY_GETENUMERATOR_OFFSET))(this);
		}
	};
}
