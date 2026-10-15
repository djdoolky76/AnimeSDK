#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOBGLFENCOL;
class LCJPDOOLBEC;
class ODCOIGDOFGH;
namespace RPG::Client { class BattleElationPointDetailData; }
namespace RPG::Client { class BattleElationPointDetailItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC819650)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC8198C0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDEFAULTSKILLDATA_OFFSET UNITYSDK_OFFSET(0xC819E70)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDETAILITEMSDATA_OFFSET UNITYSDK_OFFSET(0xC819B10)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETELATIONTIMESKILLDATA_OFFSET UNITYSDK_OFFSET(0xC8198D0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_ISGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0xC81A6B0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_POINTNUM_OFFSET UNITYSDK_OFFSET(0xC81A630)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_SET_ISGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0xC81A6C0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILAVATARDATA_OFFSET UNITYSDK_OFFSET(0xC819FD0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILBATTLEEVENTDATA_OFFSET UNITYSDK_OFFSET(0xC81A070)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILSKILLDATA_OFFSET UNITYSDK_OFFSET(0xC819CF0)

namespace RPG::Client
{
	class BattleElationPointDetailData : public ::System::Object
	{
	public:
		::ODCOIGDOFGH* _ElationPreviewCharacterData; // 0x10
		::LCJPDOOLBEC* _ElationPointManager; // 0x18
		::System::Boolean _IsGridFight_k__BackingField; // 0x20
		// static const ::System::Object _DEFAULT_START_ELATION_TIME_SKILL_ID; // 0x0
		// static const ::System::Object _DEFAULT_ELATION_SKILL_ID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleElationPointDetailData* Create()
		{
			return ((::RPG::Client::BattleElationPointDetailData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_CREATE_OFFSET))();
		}

		::RPG::Client::BattleElationPointDetailItemData* GetElationTimeSkillData()
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETELATIONTIMESKILLDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleElationPointDetailItemData*>* GetDetailItemsData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleElationPointDetailItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDETAILITEMSDATA_OFFSET))(this);
		}

		::RPG::Client::BattleElationPointDetailItemData* GetDefaultSkillData()
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDEFAULTSKILLDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleElationPointDetailItemData*>* _GetDetailSkillData(::KOBGLFENCOL* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleElationPointDetailItemData*>*(*)(::PVOID, ::KOBGLFENCOL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILSKILLDATA_OFFSET))(this, a1);
		}

		::RPG::Client::BattleElationPointDetailItemData* _GetDetailAvatarData(::KOBGLFENCOL* a1)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::PVOID, ::KOBGLFENCOL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILAVATARDATA_OFFSET))(this, a1);
		}

		::RPG::Client::BattleElationPointDetailItemData* _GetDetailBattleEventData(::KOBGLFENCOL* a1)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::PVOID, ::KOBGLFENCOL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILBATTLEEVENTDATA_OFFSET))(this, a1);
		}

		::System::Int32 get_PointNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_POINTNUM_OFFSET))(this);
		}

		::System::Boolean get_IsGridFight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_ISGRIDFIGHT_OFFSET))(this);
		}

		::System::Void set_IsGridFight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_SET_ISGRIDFIGHT_OFFSET))(this, a1);
		}

	};
}
