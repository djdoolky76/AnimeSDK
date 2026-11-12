#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ByComparePlanetFesEventProgressLeft; }
namespace RPG::GameCore { class TaskContext; }

#define DPLEFGOCNIN_CTOR_OFFSET UNITYSDK_OFFSET(0x13447EC0)
#define DPLEFGOCNIN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13447EF0)

inline static constexpr unsigned int DPLEFGOCNIN_TypeDefinitionIndex = 59214;

	class DPLEFGOCNIN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*))((::PBYTE)hIl2Cpp + DPLEFGOCNIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLEFGOCNIN_EVALUATE_OFFSET))(this);
		}

	};
