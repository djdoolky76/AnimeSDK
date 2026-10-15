#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByBaseTypeCount; }
namespace RPG::GameCore { class TaskContext; }

#define JGLDMLIHGMH_CTOR_OFFSET UNITYSDK_OFFSET(0xB19E1A0)
#define JGLDMLIHGMH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB19E280)

	class JGLDMLIHGMH
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBaseTypeCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBaseTypeCount*))((::PBYTE)hIl2Cpp + JGLDMLIHGMH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLDMLIHGMH_ONTASKBEGIN_OFFSET))(this);
		}

	};
