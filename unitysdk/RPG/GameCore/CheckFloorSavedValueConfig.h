#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckFloorSavedValueConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57B6F0)
#define RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D57B700)
#define RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57B5A0)

namespace RPG::GameCore
{
	class CheckFloorSavedValueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Int16 CompareValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckFloorSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckFloorSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::CheckFloorSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::CheckFloorSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
