#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByFormationIndex; }
namespace RPG::GameCore { class TaskContext; }

#define MGLDMCOBLMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB927D20)
#define MGLDMCOBLMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB927E00)

	class MGLDMCOBLMM
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByFormationIndex* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByFormationIndex*))((::PBYTE)hIl2Cpp + MGLDMCOBLMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLDMCOBLMM_ONTASKBEGIN_OFFSET))(this);
		}

	};
