#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAKFBFJCHFB;
namespace RPG::Client::TrainParty { class TrainPartyCardData; }
namespace RPG::GameCore { class TrainPartyActionConfigBase; }
namespace RPG::GameCore { class TrainPartyCardConfigRow; }
namespace RPG::GameCore { class TrainPartyCardEffectConfig; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CLEARNEWSTATUS_OFFSET UNITYSDK_OFFSET(0x1C631440)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1C631480)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CREATECARDDATA_OFFSET UNITYSDK_OFFSET(0x1C6310E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CREATETEMPCARDDATA_OFFSET UNITYSDK_OFFSET(0x1C631070)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C631060)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C631050)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GETEFFECTCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x1C631290)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1C631520)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1C6313E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_STEPNUM_OFFSET UNITYSDK_OFFSET(0x1C631500)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C6314E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SETCARDID_OFFSET UNITYSDK_OFFSET(0x1C631230)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1C631530)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SET_STEPNUM_OFFSET UNITYSDK_OFFSET(0x1C631510)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C6314F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1C631180)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyCardData_TypeDefinitionIndex = 76463;

	class TrainPartyCardData : public ::System::Object
	{
	public:
		::RPG::GameCore::TrainPartyCardEffectConfig* _CardEffectConfig; // 0x10
		::System::Boolean _IsNew_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 CardID; // 0x1C
		::System::UInt32 _UniqueID_k__BackingField; // 0x20
		::System::UInt32 _StepNum_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CTOR_1_OFFSET))(this, a1);
		}

		static ::RPG::Client::TrainParty::TrainPartyCardData* CreateTempCardData(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyCardData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CREATETEMPCARDDATA_OFFSET))(a1);
		}

		static ::RPG::Client::TrainParty::TrainPartyCardData* CreateCardData(::IAKFBFJCHFB* a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyCardData*(*)(::IAKFBFJCHFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CREATECARDDATA_OFFSET))(a1);
		}

		::System::Void Sync(::IAKFBFJCHFB* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::IAKFBFJCHFB*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void SetCardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SETCARDID_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::TrainPartyActionConfigBase*>* GetEffectConfigList()
		{
			return ((::Il2CppArray<::RPG::GameCore::TrainPartyActionConfigBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GETEFFECTCONFIGLIST_OFFSET))(this);
		}

		::System::Void ClearNewStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CLEARNEWSTATUS_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::TrainParty::TrainPartyCardData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyCardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_COMPARETO_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SET_UNIQUEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_StepNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_STEPNUM_OFFSET))(this);
		}

		::System::Void set_StepNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SET_STEPNUM_OFFSET))(this, a1);
		}

		::RPG::GameCore::TrainPartyCardConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TrainPartyCardConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SET_ISNEW_OFFSET))(this, a1);
		}

	};
}
