#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvStartIsometric; }
namespace RPG::GameCore { class TaskContext; }

#define BGDOKCBDOHF_CTOR_OFFSET UNITYSDK_OFFSET(0xB17A610)
#define BGDOKCBDOHF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB17A640)

inline static constexpr unsigned int BGDOKCBDOHF_TypeDefinitionIndex = 52511;

	class BGDOKCBDOHF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvStartIsometric* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvStartIsometric*))((::PBYTE)hIl2Cpp + BGDOKCBDOHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDOKCBDOHF_ONTASKBEGIN_OFFSET))(this);
		}

	};
