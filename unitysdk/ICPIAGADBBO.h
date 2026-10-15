#pragma once
#include "unitysdk/unitysdk.h"
class MNBNFBAMKKI;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetFetchModifierBindSnapshot; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ICPIAGADBBO_CTOR_OFFSET UNITYSDK_OFFSET(0x15E59250)
#define ICPIAGADBBO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15E592C0)
#define ICPIAGADBBO_FLEGNKMMFLG_OFFSET UNITYSDK_OFFSET(0x15E596A0)

inline static constexpr unsigned int ICPIAGADBBO_TypeDefinitionIndex = 53800;

	class ICPIAGADBBO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetFetchModifierBindSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*))((::PBYTE)hIl2Cpp + ICPIAGADBBO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + ICPIAGADBBO_EVALUATE_OFFSET))(this, a1, a2);
		}

		static ::System::Void FLEGNKMMFLG(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::MNBNFBAMKKI* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + ICPIAGADBBO_FLEGNKMMFLG_OFFSET))(a1, a2);
		}

	};
