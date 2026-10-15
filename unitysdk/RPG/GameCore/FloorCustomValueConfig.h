#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E54C0)
#define RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D6E6930)
#define RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D6E6580)
#define RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E62D0)
#define RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E6090)

namespace RPG::GameCore
{
	class FloorCustomValueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Name; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorCustomValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorCustomValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomValueConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomValueConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
