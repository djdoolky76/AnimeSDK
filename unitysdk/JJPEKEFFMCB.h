#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByWeaknessCount; }
namespace RPG::GameCore { class TaskContext; }

#define JJPEKEFFMCB_CTOR_OFFSET UNITYSDK_OFFSET(0xB20A6B0)
#define JJPEKEFFMCB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB20A790)

	class JJPEKEFFMCB
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByWeaknessCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByWeaknessCount*))((::PBYTE)hIl2Cpp + JJPEKEFFMCB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPEKEFFMCB_ONTASKBEGIN_OFFSET))(this);
		}

	};
