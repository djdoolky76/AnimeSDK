#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskConfig; }

#define FAJKMECFHKO_HCDBMMFEHHK_1_OFFSET UNITYSDK_OFFSET(0x1BA2EC40)
#define FAJKMECFHKO_HCDBMMFEHHK_OFFSET UNITYSDK_OFFSET(0x1BA2EBB0)

inline static constexpr unsigned int FAJKMECFHKO_TypeDefinitionIndex = 58686;

	class FAJKMECFHKO : public ::System::Object
	{
	public:
		static ::System::Boolean HCDBMMFEHHK(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + FAJKMECFHKO_HCDBMMFEHHK_OFFSET))(a1);
		}

		static ::System::Boolean HCDBMMFEHHK_1(::RPG::GameCore::TaskConfig* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + FAJKMECFHKO_HCDBMMFEHHK_1_OFFSET))(a1);
		}

	};
