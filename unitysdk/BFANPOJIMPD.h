#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTurnOwnerHasPendingOneMore; }
namespace RPG::GameCore { class TaskContext; }

#define BFANPOJIMPD_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E7640)
#define BFANPOJIMPD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB7E7670)

inline static constexpr unsigned int BFANPOJIMPD_TypeDefinitionIndex = 55897;

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
