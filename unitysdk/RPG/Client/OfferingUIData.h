#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class OfferingUIPageConfigRow; }

#define RPG_CLIENT_OFFERINGUIDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE4778B0)
#define RPG_CLIENT_OFFERINGUIDATA_GET_COSTTITLE_OFFSET UNITYSDK_OFFSET(0xE47AC00)
#define RPG_CLIENT_OFFERINGUIDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xE47AA00)
#define RPG_CLIENT_OFFERINGUIDATA_GET_LEVELTITLE_OFFSET UNITYSDK_OFFSET(0xE47AB40)
#define RPG_CLIENT_OFFERINGUIDATA_GET_LONGTAILDESC_OFFSET UNITYSDK_OFFSET(0xE47AE40)
#define RPG_CLIENT_OFFERINGUIDATA_GET_LONGTAILTITLE_OFFSET UNITYSDK_OFFSET(0xE47AD80)
#define RPG_CLIENT_OFFERINGUIDATA_GET_MAXTIP_OFFSET UNITYSDK_OFFSET(0xE479B40)
#define RPG_CLIENT_OFFERINGUIDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE47AA80)
#define RPG_CLIENT_OFFERINGUIDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xE47AA20)
#define RPG_CLIENT_OFFERINGUIDATA_GET_SUBMITBTNNAME_OFFSET UNITYSDK_OFFSET(0xE47ACC0)
#define RPG_CLIENT_OFFERINGUIDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xE47AA10)

namespace RPG::Client
{
	inline static constexpr unsigned int OfferingUIData_TypeDefinitionIndex = 68321;

	class OfferingUIData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::OfferingUIPageConfigRow* get_Row()
		{
			return ((::RPG::GameCore::OfferingUIPageConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_LevelTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_LEVELTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_CostTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_COSTTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_SubmitBtnName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_SUBMITBTNNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_MaxTip()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_MAXTIP_OFFSET))(this);
		}

		::RPG::Client::TextID get_LongTailTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_LONGTAILTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_LongTailDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGUIDATA_GET_LONGTAILDESC_OFFSET))(this);
		}

	};
}
