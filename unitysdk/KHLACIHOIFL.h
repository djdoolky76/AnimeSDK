#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPamCurrentActionAnyDirection; }
namespace RPG::GameCore { class TaskContext; }

#define KHLACIHOIFL_CTOR_OFFSET UNITYSDK_OFFSET(0xB40BD90)
#define KHLACIHOIFL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB40BDC0)

	class KHLACIHOIFL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*))((::PBYTE)hIl2Cpp + KHLACIHOIFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLACIHOIFL_EVALUATE_OFFSET))(this);
		}

	};
