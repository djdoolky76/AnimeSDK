#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvNpcMoveTo; }
namespace RPG::GameCore { class TaskContext; }

#define JJANDPELBKI_CTOR_OFFSET UNITYSDK_OFFSET(0xB200400)
#define JJANDPELBKI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB200430)

inline static constexpr unsigned int JJANDPELBKI_TypeDefinitionIndex = 52455;

	class JJANDPELBKI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcMoveTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcMoveTo*))((::PBYTE)hIl2Cpp + JJANDPELBKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJANDPELBKI_ONTASKBEGIN_OFFSET))(this);
		}

	};
