#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchElationTimeSource; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define APMDFMCBCPL_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA89A0)
#define APMDFMCBCPL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15BA8A10)

inline static constexpr unsigned int APMDFMCBCPL_TypeDefinitionIndex = 59189;

	class APMDFMCBCPL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchElationTimeSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchElationTimeSource*))((::PBYTE)hIl2Cpp + APMDFMCBCPL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + APMDFMCBCPL_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
