#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
class LPNPMKNMMOK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetQuery; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJIIHJDNILA_CTOR_OFFSET UNITYSDK_OFFSET(0xC28B940)
#define PJIIHJDNILA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC28B9D0)
#define PJIIHJDNILA_HCCOJKINEHH_OFFSET UNITYSDK_OFFSET(0xC28BD80)

inline static constexpr unsigned int PJIIHJDNILA_TypeDefinitionIndex = 59257;

	class PJIIHJDNILA
	{
	public:
		::System::Predicate_1<::RPG::GameCore::GameEntity*>* LKJPDFEIIDA; // 0x18
		::GELIALJDFBL* LLHKOFLJFCH; // 0x20
		::LPNPMKNMMOK* BAJMOHMGFAL; // 0x28
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
