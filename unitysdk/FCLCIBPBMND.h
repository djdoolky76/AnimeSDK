#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_ByHasTarget; }
namespace RPG::GameCore { class TaskContext; }

#define FCLCIBPBMND_CTOR_OFFSET UNITYSDK_OFFSET(0x156CAEF0)
#define FCLCIBPBMND_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156CAF20)

inline static constexpr unsigned int FCLCIBPBMND_TypeDefinitionIndex = 52197;

	class FCLCIBPBMND
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByHasTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByHasTarget*))((::PBYTE)hIl2Cpp + FCLCIBPBMND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLCIBPBMND_EVALUATE_OFFSET))(this);
		}

	};
