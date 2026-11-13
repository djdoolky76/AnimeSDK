#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyGridType.h"
#include "unitysdk/System/Object.h"
class CNLAOMCKFKD;
namespace RPG::Client::TrainParty { class TrainPartyGridData; }
namespace RPG::GameCore { class TrainPartyGridConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C638D10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C638D00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETGRIDICONPATH_OFFSET UNITYSDK_OFFSET(0x1C639040)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETSPECIALSHOWIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C638F80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETTIPSCONTENT_OFFSET UNITYSDK_OFFSET(0x1C639350)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_GRIDTYPE_OFFSET UNITYSDK_OFFSET(0x1C6392A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_ISRARE_OFFSET UNITYSDK_OFFSET(0x1C639560)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_MUSTSTOP_OFFSET UNITYSDK_OFFSET(0x1C639440)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1C639240)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C639420)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_OVERRITIPS_OFFSET UNITYSDK_OFFSET(0x1C638E90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_RESETTIPS_OFFSET UNITYSDK_OFFSET(0x1C638E40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C639430)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1C638DA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_TRYTRIGGERTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1C638EE0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyGridData_TypeDefinitionIndex = 76473;

	class TrainPartyGridData : public ::System::Object
	{
	public:
		::System::String* _OverrideTipsContent; // 0x10
		::System::UInt32 _GridID; // 0x18
		::System::UInt32 _UniqueID_k__BackingField; // 0x1C
		::RPG::GameCore::TrainPartyGridType _GridType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TrainParty::TrainPartyGridData* Create(::CNLAOMCKFKD* a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyGridData*(*)(::CNLAOMCKFKD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::CNLAOMCKFKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNLAOMCKFKD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void OverriTips(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_OVERRITIPS_OFFSET))(this, a1);
		}

		::System::Void ResetTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_RESETTIPS_OFFSET))(this);
		}

		::System::Void TryTriggerTutorial(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_TRYTRIGGERTUTORIAL_OFFSET))(this, a1);
		}

		::System::String* GetSpecialShowImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETSPECIALSHOWIMAGEPATH_OFFSET))(this);
		}

		::System::String* GetGridIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETGRIDICONPATH_OFFSET))(this);
		}

		::System::String* GetTipsContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETTIPSCONTENT_OFFSET))(this);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_SET_UNIQUEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::TrainPartyGridType get_GridType()
		{
			return ((::RPG::GameCore::TrainPartyGridType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_GRIDTYPE_OFFSET))(this);
		}

		::RPG::GameCore::TrainPartyGridConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TrainPartyGridConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_MustStop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_MUSTSTOP_OFFSET))(this);
		}

		::System::Boolean get_IsRare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_ISRARE_OFFSET))(this);
		}

	};
}
