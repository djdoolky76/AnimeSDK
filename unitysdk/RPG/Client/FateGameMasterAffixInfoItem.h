#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateAffixRarityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class BMOBFAHAGGA;
class JOGCCINEHFJ;
class OMGHALDIJHL;
class PMAJDIAJMKG;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class FateGameMasterAffixInfoItem; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_BUILDMONSTERSPOOLED_OFFSET UNITYSDK_OFFSET(0xCE86C00)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xCE86590)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xCE86530)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_AFFIXID_OFFSET UNITYSDK_OFFSET(0xCE87030)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_EFFECTDESC_OFFSET UNITYSDK_OFFSET(0xCE87450)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0xCE876D0)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_IDFORSORT_OFFSET UNITYSDK_OFFSET(0xCE870B0)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_ISDEACTIVATED_OFFSET UNITYSDK_OFFSET(0xCE87780)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCE87110)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xCE873B0)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xCE87070)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET__MAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0xCE872E0)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET__MONSTERSDEBUGGERDISPLAY_OFFSET UNITYSDK_OFFSET(0xCE877C0)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xCE86B20)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xCE86B80)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM__GETTEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0xCE86E70)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterAffixInfoItem_TypeDefinitionIndex = 64086;

	class FateGameMasterAffixInfoItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _MonsterIDs; // 0x10
		::PMAJDIAJMKG* _DynamicParamTextData; // 0x18
		::System::UInt32 _UniqueID; // 0x20
		::System::UInt32 _AffixID; // 0x24
		::System::Boolean _IsDeactivated; // 0x28
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateGameMasterAffixInfoItem* Create(::System::UInt32 a1, ::System::UInt32 a2, ::OMGHALDIJHL* a3)
		{
			return ((::RPG::Client::FateGameMasterAffixInfoItem*(*)(::System::UInt32, ::System::UInt32, ::OMGHALDIJHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void Sync(::JOGCCINEHFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOGCCINEHFJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_SYNC_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::RPG::Client::MonsterData*>* BuildMonstersPooled(::System::UInt32 a1)
		{
			return ((::RPG::PoolList_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_BUILDMONSTERSPOOLED_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* _GetTextParamList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM__GETTEXTPARAMLIST_OFFSET))(this);
		}

		::System::UInt32 get_AffixID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_AFFIXID_OFFSET))(this);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_UNIQUEID_OFFSET))(this);
		}

		::System::UInt32 get_IDForSort()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_IDFORSORT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::FateAffixRarityType get_Rarity()
		{
			return ((::RPG::GameCore::FateAffixRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_RARITY_OFFSET))(this);
		}

		::System::String* get_EffectDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_EFFECTDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_EXTRAEFFECTIDS_OFFSET))(this);
		}

		::System::Boolean get_IsDeactivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_ISDEACTIVATED_OFFSET))(this);
		}

		::BMOBFAHAGGA* get__Row()
		{
			return ((::BMOBFAHAGGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get__MazeBuffRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET__MAZEBUFFROW_OFFSET))(this);
		}

		::System::String* get__MonstersDebuggerDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET__MONSTERSDEBUGGERDISPLAY_OFFSET))(this);
		}

	};
}
