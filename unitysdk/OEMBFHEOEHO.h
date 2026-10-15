#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvEntityResetTransform; }
namespace RPG::GameCore { class TaskContext; }

#define OEMBFHEOEHO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE2B4A0)
#define OEMBFHEOEHO_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBE2B870)
#define OEMBFHEOEHO_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBE2B880)
#define OEMBFHEOEHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE2B4D0)

inline static constexpr unsigned int OEMBFHEOEHO_TypeDefinitionIndex = 52368;

	class OEMBFHEOEHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityResetTransform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityResetTransform*))((::PBYTE)hIl2Cpp + OEMBFHEOEHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBFHEOEHO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBFHEOEHO_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBFHEOEHO_ONSKIP_OFFSET))(this);
		}

	};
