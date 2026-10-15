#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchPartner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LOBHHEKBHPL_CTOR_OFFSET UNITYSDK_OFFSET(0xB7F3170)
#define LOBHHEKBHPL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB7F31C0)
#define LOBHHEKBHPL_LILHLFMNACJ_OFFSET UNITYSDK_OFFSET(0xB7F3430)

	class LOBHHEKBHPL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchPartner* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchPartner*))((::PBYTE)hIl2Cpp + LOBHHEKBHPL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LOBHHEKBHPL_EVALUATE_OFFSET))(this, a1, a2);
		}

		::System::Void LILHLFMNACJ(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LOBHHEKBHPL_LILHLFMNACJ_OFFSET))(this, a1, a2);
		}

	};
