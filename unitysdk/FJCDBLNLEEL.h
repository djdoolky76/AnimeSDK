#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetOverrideColliderCamera; }
namespace RPG::GameCore { class TaskContext; }

#define FJCDBLNLEEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1981B400)
#define FJCDBLNLEEL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1981B430)

inline static constexpr unsigned int FJCDBLNLEEL_TypeDefinitionIndex = 56750;

	class FJCDBLNLEEL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetOverrideColliderCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetOverrideColliderCamera*))((::PBYTE)hIl2Cpp + FJCDBLNLEEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCDBLNLEEL_ONTASKBEGIN_OFFSET))(this);
		}

	};
