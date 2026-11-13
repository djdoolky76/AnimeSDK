#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTag; }
namespace SimpleJSON { class JSONNode; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_HOYOTAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE7C6A0)
#define RPG_GAMECORE_HOYOTAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EE7C9C0)
#define RPG_GAMECORE_HOYOTAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EE7C960)
#define RPG_GAMECORE_HOYOTAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EE7CA70)
#define RPG_GAMECORE_HOYOTAG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE7C6B0)
#define RPG_GAMECORE_HOYOTAG_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0x1EE7CA80)
#define RPG_GAMECORE_HOYOTAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE7C580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoyoTag_TypeDefinitionIndex = 18480;

	class HoyoTag : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Tag; // 0x10
		::System::Int32 TagHash; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HoyoTag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::HoyoTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::HoyoTag* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAG_GETHASHCODE_OFFSET))(this);
		}

		::RPG::GameCore::HoyoTag* NBHCPBBGAKA()
		{
			return ((::RPG::GameCore::HoyoTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAG_NBHCPBBGAKA_OFFSET))(this);
		}

	};
}
