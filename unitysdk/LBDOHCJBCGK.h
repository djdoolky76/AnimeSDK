#pragma once
#include "unitysdk/unitysdk.h"
class DEKDEPEBHNC;
namespace RPG::GameCore { class ByCheckInsertAction; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBDOHCJBCGK_BNJHGJGIHKH_OFFSET UNITYSDK_OFFSET(0xBE8AC50)
#define LBDOHCJBCGK_CTOR_OFFSET UNITYSDK_OFFSET(0xBE8AA00)
#define LBDOHCJBCGK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBE8AA50)

inline static constexpr unsigned int LBDOHCJBCGK_TypeDefinitionIndex = 55663;

	class LBDOHCJBCGK
	{
	public:
		::System::Collections::Generic::List_1<::DEKDEPEBHNC*>* IKJKDOLCPJK; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckInsertAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckInsertAction*))((::PBYTE)hIl2Cpp + LBDOHCJBCGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDOHCJBCGK_EVALUATE_OFFSET))(this);
		}

		::System::Boolean BNJHGJGIHKH(::DEKDEPEBHNC* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEKDEPEBHNC*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LBDOHCJBCGK_BNJHGJGIHKH_OFFSET))(this, a1, a2);
		}

	};
