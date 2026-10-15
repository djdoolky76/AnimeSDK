#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MunicipalChatConfig; }
namespace RPG::GameCore { class MunicipalChatNPCInfo; }
namespace RPG::GameCore { class MunicipalChatNodeInfo; }
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C16E0)
#define RPG_GAMECORE_MUNICIPALCHATCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C1480)

namespace RPG::GameCore
{
	class MunicipalChatConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MunicipalChatNPCInfo*>* CharacterSlotList; // 0x10
		::System::String* StartNodeName; // 0x18
		::System::String* BreakNodeName; // 0x20
		::System::Single RecoverMinTime; // 0x28
		::System::Single RecoverMaxTime; // 0x2C
		::Il2CppArray<::RPG::GameCore::MunicipalChatNodeInfo*>* NodeList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
