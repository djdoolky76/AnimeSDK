#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterLodInfo; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTERLODINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B6DB0)
#define RPG_GAMECORE_MONSTERLODINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B6C90)

namespace RPG::GameCore
{
	class MonsterLodInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MonsterTemplateID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* LodPathList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERLODINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterLodInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterLodInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERLODINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
