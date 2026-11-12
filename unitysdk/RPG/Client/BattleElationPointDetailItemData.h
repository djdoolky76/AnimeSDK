#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class KOBGLFENCOL;
namespace RPG::Client { class BattleElationPointDetailItemData; }
namespace RPG::Client { class BattleViewModeInitData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHAVATAR_OFFSET UNITYSDK_OFFSET(0xD17C7C0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHBACKENDROLEBE_OFFSET UNITYSDK_OFFSET(0xD17C820)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHPREVIEWDATA_OFFSET UNITYSDK_OFFSET(0xD17C880)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD17C070)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD17CE10)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GETVIEWMODEINITDATA_OFFSET UNITYSDK_OFFSET(0xD17CE20)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_CANJUMPVIEWMODE_OFFSET UNITYSDK_OFFSET(0xD17D050)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD17CFF0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD17CF50)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xD17D010)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_PRIORITYVALUE_OFFSET UNITYSDK_OFFSET(0xD17D030)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_SHOWICON_OFFSET UNITYSDK_OFFSET(0xD17CF70)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xD17CFD0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0xD17D000)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD17CF60)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xD17D020)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_PRIORITYVALUE_OFFSET UNITYSDK_OFFSET(0xD17D040)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xD17CFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleElationPointDetailItemData_TypeDefinitionIndex = 74182;

	class BattleElationPointDetailItemData : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _Character; // 0x20
		::RPG::Client::BattleViewModeInitData* _ViewModeInitData; // 0x28
		::System::Int32 _PriorityValue_k__BackingField; // 0x30
		::System::Boolean _IsBackendRoleBE; // 0x34
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID _Desc_k__BackingField; // 0x38
		::RPG::Client::TextID _Title_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleElationPointDetailItemData* Create(::System::String* a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3, ::Il2CppArray<::RPG::GameCore::FixPoint>* a4, ::System::Int32 a5)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::System::String*, ::RPG::Client::TextID, ::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::BattleElationPointDetailItemData* CreateWithPreviewData(::KOBGLFENCOL* a1)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::KOBGLFENCOL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHPREVIEWDATA_OFFSET))(a1);
		}

		static ::RPG::Client::BattleElationPointDetailItemData* CreateWithAvatar(::KOBGLFENCOL* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::KOBGLFENCOL*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHAVATAR_OFFSET))(a1, a2);
		}

		static ::RPG::Client::BattleElationPointDetailItemData* CreateWithBackendRoleBE(::KOBGLFENCOL* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::KOBGLFENCOL*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHBACKENDROLEBE_OFFSET))(a1, a2);
		}

		::RPG::Client::BattleViewModeInitData* GetViewModeInitData()
		{
			return ((::RPG::Client::BattleViewModeInitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GETVIEWMODEINITDATA_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowIcon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_SHOWICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_TITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_DESC_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Void set_ParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_PARAMLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_PriorityValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_PRIORITYVALUE_OFFSET))(this);
		}

		::System::Void set_PriorityValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_PRIORITYVALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_CanJumpViewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_CANJUMPVIEWMODE_OFFSET))(this);
		}

	};
}
