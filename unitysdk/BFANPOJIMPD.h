#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTurnOwnerHasPendingOneMore; }
namespace RPG::GameCore { class TaskContext; }

#define BFANPOJIMPD_CTOR_OFFSET UNITYSDK_OFFSET(0xB15DE30)
#define BFANPOJIMPD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB15DE60)

	class BFANPOJIMPD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*))((::PBYTE)hIl2Cpp + BFANPOJIMPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFANPOJIMPD_EVALUATE_OFFSET))(this);
		}

	};
