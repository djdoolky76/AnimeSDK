#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonfireEvent; }
namespace RPG::Client { class GridFightBonfireEventDialog; }
namespace RPG::Client { class GridFightBonfireEventOption; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_APPENDBACKTOEVENTSELECTOPTION_OFFSET UNITYSDK_OFFSET(0xDA7E800)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_APPENDRESTHEALOPTION_OFFSET UNITYSDK_OFFSET(0xDA7EA10)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_CREATEREST_OFFSET UNITYSDK_OFFSET(0xDA7E3D0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0xDA7DCB0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xDA7DFC0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GETRESTDESC_OFFSET UNITYSDK_OFFSET(0xDA7E530)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_CONFIRMBTNTEXT_OFFSET UNITYSDK_OFFSET(0xDA7DC60)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_COVER_OFFSET UNITYSDK_OFFSET(0xDA7DBC0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDA7DC00)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xDA7DB80)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_ISREST_OFFSET UNITYSDK_OFFSET(0xDA7DC20)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_OPENINGDIALOG_OFFSET UNITYSDK_OFFSET(0xDA7DC80)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0xDA7DCA0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_PETPALID_OFFSET UNITYSDK_OFFSET(0xDA7DBA0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_PETPALNAME_OFFSET UNITYSDK_OFFSET(0xDA7DC40)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xDA7DBE0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_CONFIRMBTNTEXT_OFFSET UNITYSDK_OFFSET(0xDA7DC70)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_COVER_OFFSET UNITYSDK_OFFSET(0xDA7DBD0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_DESC_OFFSET UNITYSDK_OFFSET(0xDA7DC10)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0xDA7DB90)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_ISREST_OFFSET UNITYSDK_OFFSET(0xDA7DC30)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_OPENINGDIALOG_OFFSET UNITYSDK_OFFSET(0xDA7DC90)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_PETPALID_OFFSET UNITYSDK_OFFSET(0xDA7DBB0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_PETPALNAME_OFFSET UNITYSDK_OFFSET(0xDA7DC50)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xDA7DBF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonfireEvent_TypeDefinitionIndex = 65867;

	class GridFightBonfireEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonfireEventOption*>* _Options_k__BackingField; // 0x10
		::System::String* _Cover_k__BackingField; // 0x18
		::RPG::Client::GridFightBonfireEventDialog* _OpeningDialog_k__BackingField; // 0x20
		::RPG::Client::TextID _ConfirmBtnText_k__BackingField; // 0x28
		::System::UInt32 _EventId_k__BackingField; // 0x38
		::System::Boolean _IsRest_k__BackingField; // 0x3C
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID _Title_k__BackingField; // 0x40
		::RPG::Client::TextID _PetPalName_k__BackingField; // 0x50
		::System::UInt32 _PetPalID_k__BackingField; // 0x60
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID _Desc_k__BackingField; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EventId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_EVENTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PetPalID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_PETPALID_OFFSET))(this);
		}

		::System::Void set_PetPalID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_PETPALID_OFFSET))(this, a1);
		}

		::System::String* get_Cover()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_COVER_OFFSET))(this);
		}

		::System::Void set_Cover(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_COVER_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_TITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_DESC_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_ISREST_OFFSET))(this);
		}

		::System::Void set_IsRest(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_ISREST_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PetPalName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_PETPALNAME_OFFSET))(this);
		}

		::System::Void set_PetPalName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_PETPALNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ConfirmBtnText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_CONFIRMBTNTEXT_OFFSET))(this);
		}

		::System::Void set_ConfirmBtnText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_CONFIRMBTNTEXT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightBonfireEventDialog* get_OpeningDialog()
		{
			return ((::RPG::Client::GridFightBonfireEventDialog*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_OPENINGDIALOG_OFFSET))(this);
		}

		::System::Void set_OpeningDialog(::RPG::Client::GridFightBonfireEventDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonfireEventDialog*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_SET_OPENINGDIALOG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonfireEventOption*>* get_Options()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBonfireEventOption*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GET_OPTIONS_OFFSET))(this);
		}

		static ::RPG::Client::GridFightBonfireEvent* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightBonfireEvent*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightBonfireEvent* CreateRest()
		{
			return ((::RPG::Client::GridFightBonfireEvent*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_CREATEREST_OFFSET))();
		}

		::System::String* GetRestDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_GETRESTDESC_OFFSET))(this);
		}

		::System::Void AppendBackToEventSelectOption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_APPENDBACKTOEVENTSELECTOPTION_OFFSET))(this);
		}

		::System::Void AppendRestHealOption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENT_APPENDRESTHEALOPTION_OFFSET))(this);
		}

	};
}
