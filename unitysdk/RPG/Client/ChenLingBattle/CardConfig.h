#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace RPG::Client::ChenLingBattle { class CardIdentifier; }
namespace RPG::GameCore { class ChenLingCardRow; }
namespace RPG::GameCore { class ChenLingGridOffset; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1D7BE990)
#define RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x1D7BD930)
#define RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BE3D0)
#define RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_EFFECTGRIDPRESHOW_OFFSET UNITYSDK_OFFSET(0x1D7BE940)
#define RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_ICONOUTLINEPATH_OFFSET UNITYSDK_OFFSET(0x1D7BE850)
#define RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D7BE800)
#define RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1D7BE790)
#define RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D7BE280)
#define RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_ISSPECIALCARD_OFFSET UNITYSDK_OFFSET(0x1D7BE7B0)
#define RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_SHOPCOST_OFFSET UNITYSDK_OFFSET(0x1D7BE8F0)
#define RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x1D7BDBF0)
#define RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D7BE0D0)
#define RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1D7BE8A0)
#define RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1D7BE7A0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int CardConfig_TypeDefinitionIndex = 78548;

	class CardConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingCardRow* _CardRow; // 0x10
		::RPG::Client::ChenLingBattle::CardIdentifier* _Identifier_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::GameCore::ChenLingCardRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingCardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChenLingBattle::CardConfig* Create(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::ChenLingBattle::CardConfig*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_ID_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattle::CardIdentifier* get_Identifier()
		{
			return ((::RPG::Client::ChenLingBattle::CardIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::RPG::Client::ChenLingBattle::CardIdentifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingCardType get_Type()
		{
			return ((::RPG::GameCore::ChenLingCardType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_IsSpecialCard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_ISSPECIALCARD_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_IconOutlinePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_ICONOUTLINEPATH_OFFSET))(this);
		}

		::System::UInt32 get_TypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_TYPEID_OFFSET))(this);
		}

		::System::UInt32 get_Weight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_WEIGHT_OFFSET))(this);
		}

		::System::UInt32 get_ShopCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_SHOPCOST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ChenLingGridOffset*>* get_EffectGridPreShow()
		{
			return ((::Il2CppArray<::RPG::GameCore::ChenLingGridOffset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_GET_EFFECTGRIDPRESHOW_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::ChenLingBattle::CardConfig* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDCONFIG_COMPARETO_OFFSET))(this, a1);
		}

	};
}
