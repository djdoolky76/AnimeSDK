#pragma once
#include "unitysdk/unitysdk.h"
class BACCOPOCMPC;
namespace RPG::GameCore { class ST_ByAIHangUp; }
namespace RPG::GameCore { class TaskContext; }

#define PIPOIMODPLD_CTOR_OFFSET UNITYSDK_OFFSET(0xC277080)
#define PIPOIMODPLD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC277140)

	class PIPOIMODPLD
	{
	public:
		::BACCOPOCMPC* PJLGDHFHFLO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByAIHangUp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByAIHangUp*))((::PBYTE)hIl2Cpp + PIPOIMODPLD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPOIMODPLD_EVALUATE_OFFSET))(this);
		}

	};
