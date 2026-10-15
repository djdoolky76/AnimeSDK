#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAvatarAssistant; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAIHAFHMPKO_CTOR_OFFSET UNITYSDK_OFFSET(0xBA96390)
#define NAIHAFHMPKO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA963E0)

inline static constexpr unsigned int NAIHAFHMPKO_TypeDefinitionIndex = 59147;

	class NAIHAFHMPKO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAvatarAssistant* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAvatarAssistant*))((::PBYTE)hIl2Cpp + NAIHAFHMPKO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NAIHAFHMPKO_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
