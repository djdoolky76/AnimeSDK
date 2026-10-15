#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ByIsPlanetFesLandAvailableForPurchase; }
namespace RPG::GameCore { class TaskContext; }

#define JFDMDNDDOBN_CTOR_OFFSET UNITYSDK_OFFSET(0x16632E50)
#define JFDMDNDDOBN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16632E80)

inline static constexpr unsigned int JFDMDNDDOBN_TypeDefinitionIndex = 57983;

	class JFDMDNDDOBN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*))((::PBYTE)hIl2Cpp + JFDMDNDDOBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDMDNDDOBN_EVALUATE_OFFSET))(this);
		}

	};
