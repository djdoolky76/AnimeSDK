#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsShowInActionBar; }
namespace RPG::GameCore { class TaskContext; }

#define HOPFJBECBIN_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB24B0)
#define HOPFJBECBIN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15DB24E0)

inline static constexpr unsigned int HOPFJBECBIN_TypeDefinitionIndex = 54682;

	class HOPFJBECBIN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsShowInActionBar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsShowInActionBar*))((::PBYTE)hIl2Cpp + HOPFJBECBIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPFJBECBIN_EVALUATE_OFFSET))(this);
		}

	};
