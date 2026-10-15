#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABPLALCHNFA;
class AOFOEOIJEHF;
class CDEAABODKCP;
class DDAMEHEPOBD;
class HONNGJEMGGH;
class KFNCAIHIHCM;
class MMEDLCAENAL;
class PFBCBNMKFAK;
namespace RPG::Client { class GridFightBonusConsumableItemData; }
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class GridFightPresentEntity; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0xD0EB510)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD0EBE10)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_GET_HASBONUS_OFFSET UNITYSDK_OFFSET(0xD0EBDC0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLECOINUPDATE_OFFSET UNITYSDK_OFFSET(0xD0EA520)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPANDLEVELUPDATE_OFFSET UNITYSDK_OFFSET(0xD0EA690)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPUPDATE_OFFSET UNITYSDK_OFFSET(0xD0EA880)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEFORGEADD_OFFSET UNITYSDK_OFFSET(0xD0EB420)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD0E9740)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEORBUPDATE_OFFSET UNITYSDK_OFFSET(0xD0EAEF0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEPRESENTUPDATE_OFFSET UNITYSDK_OFFSET(0xD0EB170)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEROLEUPDATE_OFFSET UNITYSDK_OFFSET(0xD0EA8D0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUNLOCKEXPERT_OFFSET UNITYSDK_OFFSET(0xD0E96B0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUPDATESHOP_OFFSET UNITYSDK_OFFSET(0xD0EADA0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_POPUPEXPERTROLE_OFFSET UNITYSDK_OFFSET(0xD0EBC00)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_RESET_OFFSET UNITYSDK_OFFSET(0xD0EB8C0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xD0E9070)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__CHECKHASBOUNUS_OFFSET UNITYSDK_OFFSET(0xD0EBB00)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0xD0E9480)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusResultData_TypeDefinitionIndex = 64425;

	class GridFightBonusResultData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* NonExpertRoleList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockedExpertRoleIDList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* AddEquipItemList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>* OrbList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* EquipItemList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeItemData*>* ForgeItemList; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPresentEntity*>* PresentList; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* UnlockExpertRoleList; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusConsumableItemData*>* ConsumableItemList; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* RoleItemList; // 0x58
		::System::UInt32 Exp; // 0x60
		::System::Int32 Coin; // 0x64
		::System::Int32 ExpAdd; // 0x68
		::System::Int32 FreeRefresh; // 0x6C
		::System::Int32 LevelAdd; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::ABPLALCHNFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABPLALCHNFA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void HandleUnlockExpert(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUNLOCKEXPERT_OFFSET))(this, a1);
		}

		::System::Void HandleItemUpdate(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEITEMUPDATE_OFFSET))(this, a1);
		}

		::System::Void HandleCoinUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLECOINUPDATE_OFFSET))(this, a1);
		}

		::System::Void HandleExpAndLevelUpdate(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPANDLEVELUPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void HandleExpUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPUPDATE_OFFSET))(this, a1);
		}

		::System::Void HandleRoleUpdate(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEROLEUPDATE_OFFSET))(this, a1);
		}

		::System::Void HandleUpdateShop(::HONNGJEMGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HONNGJEMGGH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUPDATESHOP_OFFSET))(this, a1);
		}

		::System::Void HandleOrbUpdate(::MMEDLCAENAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMEDLCAENAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEORBUPDATE_OFFSET))(this, a1);
		}

		::System::Void HandlePresentUpdate(::PFBCBNMKFAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFBCBNMKFAK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEPRESENTUPDATE_OFFSET))(this, a1);
		}

		::System::Void HandleForgeAdd(::DDAMEHEPOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEFORGEADD_OFFSET))(this, a1);
		}

		::System::Void CopyFrom(::RPG::Client::GridFightBonusResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_COPYFROM_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_RESET_OFFSET))(this);
		}

		::System::Boolean _CheckHasBounus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__CHECKHASBOUNUS_OFFSET))(this);
		}

		::System::Void _HandleUpdate(::KFNCAIHIHCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFNCAIHIHCM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__HANDLEUPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* PopupExpertRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_POPUPEXPERTROLE_OFFSET))(this);
		}

		::System::Boolean get_HasBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_GET_HASBONUS_OFFSET))(this);
		}

	};
}
