#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterIDGroupConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERIDGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D572320)
#define RPG_GAMECORE_CHARACTERIDGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D572200)

namespace RPG::GameCore
{
	class CharacterIDGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Group; // 0x10
		::Il2CppArray<::System::UInt32>* IDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERIDGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterIDGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterIDGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERIDGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
