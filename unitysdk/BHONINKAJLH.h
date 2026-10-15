#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureByIsPropertyValueMinOrMax; }
namespace RPG::GameCore { class TaskContext; }

#define BHONINKAJLH_CTOR_OFFSET UNITYSDK_OFFSET(0xB48E490)
#define BHONINKAJLH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB48E4C0)
#define BHONINKAJLH_ILGKMKEEACE_OFFSET UNITYSDK_OFFSET(0xB48E890)
#define BHONINKAJLH_KCNBAIDPAON_OFFSET UNITYSDK_OFFSET(0xB48E790)

inline static constexpr unsigned int BHONINKAJLH_TypeDefinitionIndex = 54469;

	class BHONINKAJLH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + BHONINKAJLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHONINKAJLH_EVALUATE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint KCNBAIDPAON(::RPG::GameCore::AdventureAbilityComponent* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AdventureAbilityComponent*))((::PBYTE)hIl2Cpp + BHONINKAJLH_KCNBAIDPAON_OFFSET))(this, a1);
		}

		::System::Boolean ILGKMKEEACE(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BHONINKAJLH_ILGKMKEEACE_OFFSET))(this, a1, a2);
		}

	};
