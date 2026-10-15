#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
class LPNPMKNMMOK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetQuery; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJIIHJDNILA_CTOR_OFFSET UNITYSDK_OFFSET(0xC283F40)
#define PJIIHJDNILA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC283FD0)
#define PJIIHJDNILA_HCCOJKINEHH_OFFSET UNITYSDK_OFFSET(0xC284370)

inline static constexpr unsigned int PJIIHJDNILA_TypeDefinitionIndex = 59257;

	class PJIIHJDNILA
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x18
		::LPNPMKNMMOK* BAJMOHMGFAL; // 0x20
		::System::Predicate_1<::RPG::GameCore::GameEntity*>* LKJPDFEIIDA; // 0x28
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
