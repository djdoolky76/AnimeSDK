#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableAutoBlink; }
namespace RPG::GameCore { class TaskContext; }

#define OINNFBDNEAP_CTOR_OFFSET UNITYSDK_OFFSET(0xBE9B270)
#define OINNFBDNEAP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE9B2A0)

inline static constexpr unsigned int OINNFBDNEAP_TypeDefinitionIndex = 55875;

	class OINNFBDNEAP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableAutoBlink* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableAutoBlink*))((::PBYTE)hIl2Cpp + OINNFBDNEAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINNFBDNEAP_ONTASKBEGIN_OFFSET))(this);
		}

	};
