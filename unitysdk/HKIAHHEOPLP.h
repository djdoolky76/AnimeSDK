#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchPropFarmElement; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKIAHHEOPLP_CTOR_OFFSET UNITYSDK_OFFSET(0x15D38650)
#define HKIAHHEOPLP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D386C0)

inline static constexpr unsigned int HKIAHHEOPLP_TypeDefinitionIndex = 59217;

	class HKIAHHEOPLP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchPropFarmElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchPropFarmElement*))((::PBYTE)hIl2Cpp + HKIAHHEOPLP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HKIAHHEOPLP_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
