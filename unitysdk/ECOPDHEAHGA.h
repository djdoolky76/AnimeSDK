#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLocalPlayerPet; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECOPDHEAHGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E1600)
#define ECOPDHEAHGA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C3E1670)

inline static constexpr unsigned int ECOPDHEAHGA_TypeDefinitionIndex = 60381;

	class ECOPDHEAHGA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchLocalPlayerPet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLocalPlayerPet*))((::PBYTE)hIl2Cpp + ECOPDHEAHGA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + ECOPDHEAHGA_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
