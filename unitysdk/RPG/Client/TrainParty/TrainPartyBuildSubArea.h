#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildSubAreaType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_ADDSLOT_OFFSET UNITYSDK_OFFSET(0xED43160)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_CTOR_OFFSET UNITYSDK_OFFSET(0xED43040)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_GETFIRSTSLOTINDEX_OFFSET UNITYSDK_OFFSET(0xED4DD40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_GET_CAMERAID_OFFSET UNITYSDK_OFFSET(0xED4DE20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xED4DE00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_GET_ID_OFFSET UNITYSDK_OFFSET(0xED4DDA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xED4DDE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0xED4DE40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xED4DDC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_SET_CAMERAID_OFFSET UNITYSDK_OFFSET(0xED4DE30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xED4DE10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_SET_ID_OFFSET UNITYSDK_OFFSET(0xED4DDB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xED4DDF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_SET_SLOTS_OFFSET UNITYSDK_OFFSET(0xED4DE50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xED4DDD0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildSubArea_TypeDefinitionIndex = 76454;

	class TrainPartyBuildSubArea : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* _Slots_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::RPG::Client::TrainParty::TrainPartyBuildSubAreaType _Type_k__BackingField; // 0x24
		::System::UInt32 _CameraID_k__BackingField; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0x30
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_CTOR_OFFSET))(this, a1);
		}

		::System::Void AddSlot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_ADDSLOT_OFFSET))(this, a1);
		}

		::System::UInt32 GetFirstSlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_GETFIRSTSLOTINDEX_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSubAreaType get_Type()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSubAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::TrainParty::TrainPartyBuildSubAreaType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSubAreaType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_CameraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_GET_CAMERAID_OFFSET))(this);
		}

		::System::Void set_CameraID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_SET_CAMERAID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* get_Slots()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_GET_SLOTS_OFFSET))(this);
		}

		::System::Void set_Slots(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSUBAREA_SET_SLOTS_OFFSET))(this, a1);
		}

	};
}
