#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HipplenGameSwitchCamera; }
namespace RPG::GameCore { class TaskContext; }

#define JEGNPJCIPGC_CTOR_OFFSET UNITYSDK_OFFSET(0x166226D0)
#define JEGNPJCIPGC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16622700)

inline static constexpr unsigned int JEGNPJCIPGC_TypeDefinitionIndex = 52273;

	class JEGNPJCIPGC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenGameSwitchCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenGameSwitchCamera*))((::PBYTE)hIl2Cpp + JEGNPJCIPGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGNPJCIPGC_ONTASKBEGIN_OFFSET))(this);
		}

	};
