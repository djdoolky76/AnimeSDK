#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLastKillCaster; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKANBNFIKMP_CTOR_OFFSET UNITYSDK_OFFSET(0x15D3BFD0)
#define HKANBNFIKMP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D3C040)

	class HKANBNFIKMP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchLastKillCaster* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLastKillCaster*))((::PBYTE)hIl2Cpp + HKANBNFIKMP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HKANBNFIKMP_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
