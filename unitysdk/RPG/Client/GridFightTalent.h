#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMEEHIIPMFP;
class CKPOBLIFMGN;
namespace RPG::Client { class GridFightPermanentTalentTree; }
namespace RPG::Client { class GridFightSeasonTalentTree; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTALENT_CLEARPERMANENTTALENT_OFFSET UNITYSDK_OFFSET(0x1E1785D0)
#define RPG_CLIENT_GRIDFIGHTTALENT_CLEARSEASONTALENT_OFFSET UNITYSDK_OFFSET(0x1E178730)
#define RPG_CLIENT_GRIDFIGHTTALENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E178780)
#define RPG_CLIENT_GRIDFIGHTTALENT_GETCURRENCYID_OFFSET UNITYSDK_OFFSET(0x1E177E30)
#define RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYCNT_OFFSET UNITYSDK_OFFSET(0x1E1780D0)
#define RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0x1E177F40)
#define RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYID_OFFSET UNITYSDK_OFFSET(0x1E177DE0)
#define RPG_CLIENT_GRIDFIGHTTALENT_GET_PERMANENTTALENTTREE_OFFSET UNITYSDK_OFFSET(0x1E177DA0)
#define RPG_CLIENT_GRIDFIGHTTALENT_GET_SEASONTALENTTREE_OFFSET UNITYSDK_OFFSET(0x1E177DC0)
#define RPG_CLIENT_GRIDFIGHTTALENT_SET_PERMANENTTALENTTREE_OFFSET UNITYSDK_OFFSET(0x1E177DB0)
#define RPG_CLIENT_GRIDFIGHTTALENT_SET_SEASONTALENTTREE_OFFSET UNITYSDK_OFFSET(0x1E177DD0)
#define RPG_CLIENT_GRIDFIGHTTALENT_SYNC_1_OFFSET UNITYSDK_OFFSET(0x1E178250)
#define RPG_CLIENT_GRIDFIGHTTALENT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E1781E0)
#define RPG_CLIENT_GRIDFIGHTTALENT_UPDATEPERMANENTTALENT_OFFSET UNITYSDK_OFFSET(0x1E1782C0)
#define RPG_CLIENT_GRIDFIGHTTALENT_UPDATESEASONTALENT_OFFSET UNITYSDK_OFFSET(0x1E178570)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTalent_TypeDefinitionIndex = 67019;

	class GridFightTalent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPermanentTalentTree* _PermanentTalentTree_k__BackingField; // 0x10
		::RPG::Client::GridFightSeasonTalentTree* _SeasonTalentTree_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightPermanentTalentTree* get_PermanentTalentTree()
		{
			return ((::RPG::Client::GridFightPermanentTalentTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GET_PERMANENTTALENTTREE_OFFSET))(this);
		}

		::System::Void set_PermanentTalentTree(::RPG::Client::GridFightPermanentTalentTree* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPermanentTalentTree*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_SET_PERMANENTTALENTTREE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSeasonTalentTree* get_SeasonTalentTree()
		{
			return ((::RPG::Client::GridFightSeasonTalentTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GET_SEASONTALENTTREE_OFFSET))(this);
		}

		::System::Void set_SeasonTalentTree(::RPG::Client::GridFightSeasonTalentTree* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSeasonTalentTree*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_SET_SEASONTALENTTREE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrencyId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYID_OFFSET))(this);
		}

		::System::String* get_CurrencyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYICONPATH_OFFSET))(this);
		}

		::System::Int64 get_CurrencyCnt()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GET_CURRENCYCNT_OFFSET))(this);
		}

		::System::UInt32 GetCurrencyId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_GETCURRENCYID_OFFSET))(this);
		}

		::System::Void Sync(::CKPOBLIFMGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPOBLIFMGN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::AMEEHIIPMFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMEEHIIPMFP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void UpdatePermanentTalent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_UPDATEPERMANENTTALENT_OFFSET))(this, a1);
		}

		::System::Void UpdateSeasonTalent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_UPDATESEASONTALENT_OFFSET))(this, a1);
		}

		::System::Void ClearPermanentTalent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_CLEARPERMANENTTALENT_OFFSET))(this);
		}

		::System::Void ClearSeasonTalent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENT_CLEARSEASONTALENT_OFFSET))(this);
		}

	};
}
