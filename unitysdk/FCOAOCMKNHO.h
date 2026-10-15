#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCurrentDamageDefender; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCOAOCMKNHO_CTOR_OFFSET UNITYSDK_OFFSET(0x156C3F50)
#define FCOAOCMKNHO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156C3FC0)

inline static constexpr unsigned int FCOAOCMKNHO_TypeDefinitionIndex = 59118;

	class FCOAOCMKNHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchCurrentDamageDefender* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCurrentDamageDefender*))((::PBYTE)hIl2Cpp + FCOAOCMKNHO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FCOAOCMKNHO_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
