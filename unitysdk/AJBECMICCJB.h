#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class DEEJKBIMHAA;
namespace RPG::GameCore { class RandomSelectDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define AJBECMICCJB_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB0FA0)
#define AJBECMICCJB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CB10C0)

	class AJBECMICCJB
	{
	public:
		::DEEJKBIMHAA* AIJGGLCAEON; // 0x28
		::RPG::GameCore::StringHash BCFCHFBDIHE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelectDynamicValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelectDynamicValue*))((::PBYTE)hIl2Cpp + AJBECMICCJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJBECMICCJB_ONTASKBEGIN_OFFSET))(this);
		}

	};
