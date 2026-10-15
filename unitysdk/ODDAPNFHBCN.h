#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeCharacterUIDisplay; }
namespace RPG::GameCore { class TaskContext; }

#define ODDAPNFHBCN_CTOR_OFFSET UNITYSDK_OFFSET(0xBD903F0)
#define ODDAPNFHBCN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD90420)

	class ODDAPNFHBCN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeCharacterUIDisplay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeCharacterUIDisplay*))((::PBYTE)hIl2Cpp + ODDAPNFHBCN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDAPNFHBCN_ONTASKBEGIN_OFFSET))(this);
		}

	};
