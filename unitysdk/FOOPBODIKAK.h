#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCurrentGroupNPCMonsters; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOOPBODIKAK_CTOR_OFFSET UNITYSDK_OFFSET(0x15909050)
#define FOOPBODIKAK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x159090A0)

inline static constexpr unsigned int FOOPBODIKAK_TypeDefinitionIndex = 59084;

	class FOOPBODIKAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*))((::PBYTE)hIl2Cpp + FOOPBODIKAK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FOOPBODIKAK_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
