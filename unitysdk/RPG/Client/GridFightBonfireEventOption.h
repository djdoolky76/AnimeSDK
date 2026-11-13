#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightBonfireOptionShowType.h"
#include "unitysdk/System/Object.h"
class MHCOIBONODA;
namespace RPG::Client { class GridFightBonfireEventDialog; }
namespace RPG::Client { class GridFightBonfireEventOption; }
namespace RPG::Client { class GridFightBonfirePendingAction; }
namespace RPG::Client { class GridFightBonusDropData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D57FB00)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_COMPILERESTHEALDESC_OFFSET UNITYSDK_OFFSET(0x1D57CF50)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_CREATEBACKTOEVENTSELECT_OFFSET UNITYSDK_OFFSET(0x1D57D320)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0x1D57F0E0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_CREATERESTHEAL_OFFSET UNITYSDK_OFFSET(0x1D57D530)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57F040)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D57EDA0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_FINDENDINGDIALOGIDBYEVENTID_OFFSET UNITYSDK_OFFSET(0x1D57F550)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GETDESCDETAILOBJECTS_OFFSET UNITYSDK_OFFSET(0x1D57DFE0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GETDESC_OFFSET UNITYSDK_OFFSET(0x1D57DA50)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GETEFFECTPARAM_OFFSET UNITYSDK_OFFSET(0x1D57EFB0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GETRESTHEALNUM_OFFSET UNITYSDK_OFFSET(0x1D57F980)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_DROPLIST_OFFSET UNITYSDK_OFFSET(0x1D57D9F0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_ENDINGDIALOGID_OFFSET UNITYSDK_OFFSET(0x1D57D910)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1D57D970)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_ISBACKTOEVENT_OFFSET UNITYSDK_OFFSET(0x1D57DA10)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_NEEDSHOWOWNERPETICON_OFFSET UNITYSDK_OFFSET(0x1D57D990)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_OPTIONID_OFFSET UNITYSDK_OFFSET(0x1D57D930)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_OWNERPETICON_OFFSET UNITYSDK_OFFSET(0x1D57D9B0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_OWNERPETPALNAME_OFFSET UNITYSDK_OFFSET(0x1D57D9D0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_PARAMID_OFFSET UNITYSDK_OFFSET(0x1D57D950)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1D57D8F0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_INITPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D57EF40)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_DROPLIST_OFFSET UNITYSDK_OFFSET(0x1D57DA00)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_ENDINGDIALOGID_OFFSET UNITYSDK_OFFSET(0x1D57D920)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1D57D980)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_NEEDSHOWOWNERPETICON_OFFSET UNITYSDK_OFFSET(0x1D57D9A0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_OPTIONID_OFFSET UNITYSDK_OFFSET(0x1D57D940)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_OWNERPETICON_OFFSET UNITYSDK_OFFSET(0x1D57D9C0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_OWNERPETPALNAME_OFFSET UNITYSDK_OFFSET(0x1D57D9E0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_PARAMID_OFFSET UNITYSDK_OFFSET(0x1D57D960)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1D57D900)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION__COLLECTPREGENREWARDDETAILS_OFFSET UNITYSDK_OFFSET(0x1D57EBD0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION__GETROLE_OFFSET UNITYSDK_OFFSET(0x1D57E800)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION__PREPENDOWNERPETPALNAME_OFFSET UNITYSDK_OFFSET(0x1D57DDE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonfireEventOption_TypeDefinitionIndex = 65871;

	class GridFightBonfireEventOption : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* _DropList_k__BackingField; // 0x10
		::System::String* _OwnerPetIcon_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* _ParamList; // 0x20
		::System::UInt32 _EventId_k__BackingField; // 0x28
		::System::UInt32 _EndingDialogID_k__BackingField; // 0x2C
		::RPG::Client::TextID _DescRaw; // 0x30
		::RPG::Client::TextID _Title_k__BackingField; // 0x40
		::System::UInt32 _ParamID_k__BackingField; // 0x50
		::System::UInt32 _OptionID_k__BackingField; // 0x54
		::RPG::Client::TextID _OwnerPetPalName_k__BackingField; // 0x58
		::RPG::GameCore::GridFightBonfireOptionShowType _ShowType; // 0x68
		::System::Boolean _NeedShowOwnerPetIcon_k__BackingField; // 0x6C
		static ::System::Text::RegularExpressions::Regex** StaticGet__BonfireOptionRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("RPG.Client", "GridFightBonfireEventOption")->GetStaticField(0x6FF40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_CCTOR_OFFSET))();
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_TITLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndingDialogID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_ENDINGDIALOGID_OFFSET))(this);
		}

		::System::Void set_EndingDialogID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_ENDINGDIALOGID_OFFSET))(this, a1);
		}

		::System::UInt32 get_OptionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_OPTIONID_OFFSET))(this);
		}

		::System::Void set_OptionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_OPTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ParamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_PARAMID_OFFSET))(this);
		}

		::System::Void set_ParamID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_PARAMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EventId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_EVENTID_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedShowOwnerPetIcon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_NEEDSHOWOWNERPETICON_OFFSET))(this);
		}

		::System::Void set_NeedShowOwnerPetIcon(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_NEEDSHOWOWNERPETICON_OFFSET))(this, a1);
		}

		::System::String* get_OwnerPetIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_OWNERPETICON_OFFSET))(this);
		}

		::System::Void set_OwnerPetIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_OWNERPETICON_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_OwnerPetPalName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_OWNERPETPALNAME_OFFSET))(this);
		}

		::System::Void set_OwnerPetPalName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_OWNERPETPALNAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* get_DropList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_DROPLIST_OFFSET))(this);
		}

		::System::Void set_DropList(::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_SET_DROPLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBackToEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GET_ISBACKTOEVENT_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GETDESC_OFFSET))(this);
		}

		::System::String* _PrependOwnerPetPalName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION__PREPENDOWNERPETPALNAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetDescDetailObjects()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GETDESCDETAILOBJECTS_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* _GetRole(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION__GETROLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* _CollectPreGenRewardDetails()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION__COLLECTPREGENREWARDDETAILS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::GridFightBonfireEventDialog*>* Execute(::RPG::Client::GridFightBonfirePendingAction* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::GridFightBonfireEventDialog*>*(*)(::PVOID, ::RPG::Client::GridFightBonfirePendingAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_EXECUTE_OFFSET))(this, a1);
		}

		::System::Void InitParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_INITPARAMLIST_OFFSET))(this, a1);
		}

		::System::UInt32 GetEffectParam(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GETEFFECTPARAM_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightBonfireEventOption* CreateFromServer(::MHCOIBONODA* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightBonfireEventOption*(*)(::MHCOIBONODA*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_CREATEFROMSERVER_OFFSET))(a1, a2);
		}

		static ::System::UInt32 FindEndingDialogIdByEventId(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_FINDENDINGDIALOGIDBYEVENTID_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightBonfireEventOption* CreateBackToEventSelect()
		{
			return ((::RPG::Client::GridFightBonfireEventOption*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_CREATEBACKTOEVENTSELECT_OFFSET))();
		}

		static ::RPG::Client::GridFightBonfireEventOption* CreateRestHeal()
		{
			return ((::RPG::Client::GridFightBonfireEventOption*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_CREATERESTHEAL_OFFSET))();
		}

		static ::System::String* CompileRestHealDesc()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_COMPILERESTHEALDESC_OFFSET))();
		}

		static ::System::UInt32 GetRestHealNum()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTOPTION_GETRESTHEALNUM_OFFSET))();
		}

	};
}
