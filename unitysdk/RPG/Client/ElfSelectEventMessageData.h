#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectEventSenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class ElfSelectEventMessageData; }
namespace RPG::GameCore { class RestaurantMessageConfigRow; }

#define RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1A6C5510)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6C5570)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_CONTACTID_OFFSET UNITYSDK_OFFSET(0x1A6C55A0)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_HASNEXTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A6C5A90)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_ISNEXTOPTION_OFFSET UNITYSDK_OFFSET(0x1A6C5A30)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_ISOPTION_OFFSET UNITYSDK_OFFSET(0x1A6C59E0)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_ITEMIMAGEID_OFFSET UNITYSDK_OFFSET(0x1A6C5800)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_MAINTEXT_OFFSET UNITYSDK_OFFSET(0x1A6C5740)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x1A6C5580)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_NEXTITEMIDLIST_OFFSET UNITYSDK_OFFSET(0x1A6C58A0)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_OPTIONEFFECTID_OFFSET UNITYSDK_OFFSET(0x1A6C5940)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A6C56A0)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1A6C5640)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_SET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x1A6C5590)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfSelectEventMessageData_TypeDefinitionIndex = 65113;

	class ElfSelectEventMessageData : public ::System::Object
	{
	public:
		::System::UInt32 _MessageID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfSelectEventMessageData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfSelectEventMessageData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_MessageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_MESSAGEID_OFFSET))(this);
		}

		::System::Void set_MessageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_SET_MESSAGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ContactID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_CONTACTID_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantSelectEventSenderType get_Type()
		{
			return ((::RPG::GameCore::RestaurantSelectEventSenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_MainText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_MAINTEXT_OFFSET))(this);
		}

		::System::UInt32 get_ItemImageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_ITEMIMAGEID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_NextItemIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_NEXTITEMIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_OptionEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_OPTIONEFFECTID_OFFSET))(this);
		}

		::System::Boolean get_IsOption()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_ISOPTION_OFFSET))(this);
		}

		::System::Boolean get_IsNextOption()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_ISNEXTOPTION_OFFSET))(this);
		}

		::System::Boolean get_HasNextMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET_HASNEXTMESSAGE_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantMessageConfigRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantMessageConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGEDATA_GET__ROW_OFFSET))(this);
		}

	};
}
