#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupPropertySide.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupPropertyConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_GROUPPROPERTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74BFC0)
#define RPG_GAMECORE_GROUPPROPERTYCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D74BFD0)
#define RPG_GAMECORE_GROUPPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D74BD40)

namespace RPG::GameCore
{
	class GroupPropertyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Name; // 0x18
		::RPG::GameCore::GroupPropertySide Side; // 0x20
		::System::Int16 DefaultValue; // 0x24
		::System::Int16 MaxValue; // 0x26
		::System::Int16 MinValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPPROPERTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupPropertyConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPPROPERTYCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
