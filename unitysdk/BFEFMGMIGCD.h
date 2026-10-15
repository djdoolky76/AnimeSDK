#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetCharacterShaderSpeedEnable; }
namespace RPG::GameCore { class TaskContext; }

#define BFEFMGMIGCD_CTOR_OFFSET UNITYSDK_OFFSET(0xB161330)
#define BFEFMGMIGCD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB161360)

	class BFEFMGMIGCD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterShaderSpeedEnable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterShaderSpeedEnable*))((::PBYTE)hIl2Cpp + BFEFMGMIGCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEFMGMIGCD_ONTASKBEGIN_OFFSET))(this);
		}

	};
