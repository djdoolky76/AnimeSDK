#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsHitAllCallBackStack; }
namespace RPG::GameCore { class TaskContext; }

#define HOGNFBHGDEE_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB6C00)
#define HOGNFBHGDEE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15DB6C30)

	class HOGNFBHGDEE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsHitAllCallBackStack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsHitAllCallBackStack*))((::PBYTE)hIl2Cpp + HOGNFBHGDEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGNFBHGDEE_EVALUATE_OFFSET))(this);
		}

	};
