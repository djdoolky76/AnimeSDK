#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NihiluxElationUIType.h"
#include "unitysdk/System/Object.h"
class KOBGLFENCOL;
class LCJPDOOLBEC;
class ODCOIGDOFGH;
namespace RPG::Client { class BattleAvatarNihiluxCustomUIData; }
namespace RPG::Client { class BattleElationPointDetailData; }
namespace RPG::Client { class BattleElationPointDetailItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B1B7E00)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B8300)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDEFAULTSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1B1B88B0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDETAILITEMSDATA_OFFSET UNITYSDK_OFFSET(0x1B1B8550)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETELATIONTIMESKILLDATA_OFFSET UNITYSDK_OFFSET(0x1B1B8310)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_ELATIONUITYPE_OFFSET UNITYSDK_OFFSET(0x1B1B9130)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_ICONINDEX_OFFSET UNITYSDK_OFFSET(0x1B1B91D0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_ISGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0x1B1B9110)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_ISNIHILUX_OFFSET UNITYSDK_OFFSET(0x1B1B9150)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_NIHILUXCUSTOMUIDATA_OFFSET UNITYSDK_OFFSET(0x1B1B9070)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_NUMINDEX_OFFSET UNITYSDK_OFFSET(0x1B1B91F0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_POINTNUM_OFFSET UNITYSDK_OFFSET(0x1B1B9090)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_SET_ELATIONUITYPE_OFFSET UNITYSDK_OFFSET(0x1B1B9140)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_SET_ICONINDEX_OFFSET UNITYSDK_OFFSET(0x1B1B91E0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_SET_ISGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0x1B1B9120)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_SET_NIHILUXCUSTOMUIDATA_OFFSET UNITYSDK_OFFSET(0x1B1B9080)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_SET_NUMINDEX_OFFSET UNITYSDK_OFFSET(0x1B1B9200)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILAVATARDATA_OFFSET UNITYSDK_OFFSET(0x1B1B8A10)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILBATTLEEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1B1B8AB0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1B1B8730)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleElationPointDetailData_TypeDefinitionIndex = 74180;

	class BattleElationPointDetailData : public ::System::Object
	{
	public:
		::RPG::Client::BattleAvatarNihiluxCustomUIData* _NihiluxCustomUIData_k__BackingField; // 0x10
		::ODCOIGDOFGH* _ElationPreviewCharacterData; // 0x18
		::LCJPDOOLBEC* _ElationPointManager; // 0x20
		::RPG::GameCore::NihiluxElationUIType _ElationUIType_k__BackingField; // 0x28
		::System::Int32 _IconIndex_k__BackingField; // 0x2C
		::System::Int32 _NumIndex_k__BackingField; // 0x30
		::System::Boolean _IsGridFight_k__BackingField; // 0x34
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

		::RPG::Client::BattleAvatarNihiluxCustomUIData* get_NihiluxCustomUIData()
		{
			return ((::RPG::Client::BattleAvatarNihiluxCustomUIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_NIHILUXCUSTOMUIDATA_OFFSET))(this);
		}

		::System::Void set_NihiluxCustomUIData(::RPG::Client::BattleAvatarNihiluxCustomUIData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAvatarNihiluxCustomUIData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_SET_NIHILUXCUSTOMUIDATA_OFFSET))(this, a1);
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

		::RPG::GameCore::NihiluxElationUIType get_ElationUIType()
		{
			return ((::RPG::GameCore::NihiluxElationUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_ELATIONUITYPE_OFFSET))(this);
		}

		::System::Void set_ElationUIType(::RPG::GameCore::NihiluxElationUIType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NihiluxElationUIType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_SET_ELATIONUITYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNihilux()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_ISNIHILUX_OFFSET))(this);
		}

		::System::Int32 get_IconIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_ICONINDEX_OFFSET))(this);
		}

		::System::Void set_IconIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_SET_ICONINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_NumIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_NUMINDEX_OFFSET))(this);
		}

		::System::Void set_NumIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_SET_NUMINDEX_OFFSET))(this, a1);
		}

	};
}
