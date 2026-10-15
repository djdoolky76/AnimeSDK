#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetFetchPosWithMaxTargetCount; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKNMDCOEFKI_CTOR_OFFSET UNITYSDK_OFFSET(0x158121B0)
#define FKNMDCOEFKI_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15812220)

inline static constexpr unsigned int FKNMDCOEFKI_TypeDefinitionIndex = 53797;

	class FKNMDCOEFKI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + FKNMDCOEFKI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FKNMDCOEFKI_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
