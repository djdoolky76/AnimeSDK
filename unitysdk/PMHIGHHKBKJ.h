#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class ByCompareModifierCallBackDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define PMHIGHHKBKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC31D2C0)
#define PMHIGHHKBKJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC31D3A0)

inline static constexpr unsigned int PMHIGHHKBKJ_TypeDefinitionIndex = 54541;

	class PMHIGHHKBKJ
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*))((::PBYTE)hIl2Cpp + PMHIGHHKBKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHIGHHKBKJ_EVALUATE_OFFSET))(this);
		}

	};
