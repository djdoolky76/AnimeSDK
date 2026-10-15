#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvLocalPlayer; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMLIPODBLBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB26A1A0)
#define JMLIPODBLBD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB26A1F0)

inline static constexpr unsigned int JMLIPODBLBD_TypeDefinitionIndex = 59080;

	class JMLIPODBLBD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvLocalPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvLocalPlayer*))((::PBYTE)hIl2Cpp + JMLIPODBLBD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JMLIPODBLBD_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
