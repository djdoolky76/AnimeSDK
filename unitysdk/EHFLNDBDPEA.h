#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchFarmElementEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHFLNDBDPEA_CTOR_OFFSET UNITYSDK_OFFSET(0x154996D0)
#define EHFLNDBDPEA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15499740)

inline static constexpr unsigned int EHFLNDBDPEA_TypeDefinitionIndex = 59254;

	class EHFLNDBDPEA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchFarmElementEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchFarmElementEntity*))((::PBYTE)hIl2Cpp + EHFLNDBDPEA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + EHFLNDBDPEA_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
