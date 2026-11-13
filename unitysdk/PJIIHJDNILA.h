#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
class LPNPMKNMMOK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetQuery; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJIIHJDNILA_CTOR_OFFSET UNITYSDK_OFFSET(0x1478C8C0)
#define PJIIHJDNILA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1478C950)
#define PJIIHJDNILA_HCCOJKINEHH_OFFSET UNITYSDK_OFFSET(0x1478CD10)

inline static constexpr unsigned int PJIIHJDNILA_TypeDefinitionIndex = 60534;

	class PJIIHJDNILA
	{
	public:
		::LPNPMKNMMOK* BAJMOHMGFAL; // 0x18
		::System::Predicate_1<::RPG::GameCore::GameEntity*>* LKJPDFEIIDA; // 0x20
		::GELIALJDFBL* LLHKOFLJFCH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TargetQuery* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetQuery*))((::PBYTE)hIl2Cpp + PJIIHJDNILA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PJIIHJDNILA_EVALUATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean HCCOJKINEHH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PJIIHJDNILA_HCCOJKINEHH_OFFSET))(this, a1);
		}

	};
