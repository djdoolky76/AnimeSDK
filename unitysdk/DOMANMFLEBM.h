#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCallBackModifierCaster; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DOMANMFLEBM_CTOR_OFFSET UNITYSDK_OFFSET(0x11FEB020)
#define DOMANMFLEBM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11FEB070)

inline static constexpr unsigned int DOMANMFLEBM_TypeDefinitionIndex = 59222;

	class DOMANMFLEBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchCallBackModifierCaster* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCallBackModifierCaster*))((::PBYTE)hIl2Cpp + DOMANMFLEBM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DOMANMFLEBM_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
