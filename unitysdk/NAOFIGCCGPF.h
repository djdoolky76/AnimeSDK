#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchNone; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAOFIGCCGPF_CTOR_OFFSET UNITYSDK_OFFSET(0xC32E3D0)
#define NAOFIGCCGPF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC32E420)

inline static constexpr unsigned int NAOFIGCCGPF_TypeDefinitionIndex = 60486;

	class NAOFIGCCGPF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchNone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchNone*))((::PBYTE)hIl2Cpp + NAOFIGCCGPF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NAOFIGCCGPF_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
