#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchHandForbidUIOperate; }
namespace RPG::GameCore { class TaskContext; }

#define LKHHLIGGIHL_CTOR_OFFSET UNITYSDK_OFFSET(0xB747090)
#define LKHHLIGGIHL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7470C0)

inline static constexpr unsigned int LKHHLIGGIHL_TypeDefinitionIndex = 53313;

	class LKHHLIGGIHL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandForbidUIOperate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandForbidUIOperate*))((::PBYTE)hIl2Cpp + LKHHLIGGIHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHHLIGGIHL_ONTASKBEGIN_OFFSET))(this);
		}

	};
