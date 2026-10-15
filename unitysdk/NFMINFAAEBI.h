#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchFateRinCardCaster; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFMINFAAEBI_CTOR_OFFSET UNITYSDK_OFFSET(0xBB9B910)
#define NFMINFAAEBI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB9B960)

	class NFMINFAAEBI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchFateRinCardCaster* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchFateRinCardCaster*))((::PBYTE)hIl2Cpp + NFMINFAAEBI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NFMINFAAEBI_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
