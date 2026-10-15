#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvFakeAvatarPlayerStub; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCIKCPMLHEI_CTOR_OFFSET UNITYSDK_OFFSET(0xC73DA20)
#define CCIKCPMLHEI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC73DA90)

	class CCIKCPMLHEI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*))((::PBYTE)hIl2Cpp + CCIKCPMLHEI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CCIKCPMLHEI_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
