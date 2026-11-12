#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateHouguSelectBgType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FateHouguDataItem; }
namespace RPG::GameCore { class BattleSelectHouguDialogInitParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_CONFIRMHOUGUSELECTION_OFFSET UNITYSDK_OFFSET(0xD86BF40)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xD86BB60)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD86BEB0)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_BGTYPE_OFFSET UNITYSDK_OFFSET(0xD86C1A0)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_ISINBATTLE_OFFSET UNITYSDK_OFFSET(0xD86C160)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_SELECTHOUGUDATA_OFFSET UNITYSDK_OFFSET(0xD86C140)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_SET_SELECTHOUGUDATA_OFFSET UNITYSDK_OFFSET(0xD86C150)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__GENERATEBGTYPE_OFFSET UNITYSDK_OFFSET(0xD86BE20)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__INITSELECTHOUGULIST_OFFSET UNITYSDK_OFFSET(0xD86BBC0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHouguBattleSelectAction_TypeDefinitionIndex = 65530;

	class FateHouguBattleSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* _SelectHouguData_k__BackingField; // 0x10
		::RPG::Client::FateHouguSelectBgType _BgType; // 0x18
		::System::Void _ctor(::RPG::GameCore::BattleSelectHouguDialogInitParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleSelectHouguDialogInitParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_DISPOSE_OFFSET))(this);
		}

		::System::Void ConfirmHouguSelection(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_CONFIRMHOUGUSELECTION_OFFSET))(this, a1);
		}

		::System::Void _InitSelectHouguList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__INITSELECTHOUGULIST_OFFSET))(this, a1);
		}

		::System::Void _GenerateBgType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__GENERATEBGTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* get_SelectHouguData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_SELECTHOUGUDATA_OFFSET))(this);
		}

		::System::Void set_SelectHouguData(::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_SET_SELECTHOUGUDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_ISINBATTLE_OFFSET))(this);
		}

		::RPG::Client::FateHouguSelectBgType get_BgType()
		{
			return ((::RPG::Client::FateHouguSelectBgType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_BGTYPE_OFFSET))(this);
		}

	};
}
