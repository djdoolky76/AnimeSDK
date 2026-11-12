#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class HNCGHAOHBPP;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JECLIFLECIK_CTOR_OFFSET UNITYSDK_OFFSET(0xB963040)
#define JECLIFLECIK_GET_BONUSREWARDCOINLIST_OFFSET UNITYSDK_OFFSET(0xB962FD0)
#define JECLIFLECIK_GET_BONUSREWARDEXPLIST_OFFSET UNITYSDK_OFFSET(0xB962FE0)
#define JECLIFLECIK_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xB962F70)
#define JECLIFLECIK_GET_CUSTOMERACTORID_OFFSET UNITYSDK_OFFSET(0xB962FF0)
#define JECLIFLECIK_GET_CUSTOMERCMT_OFFSET UNITYSDK_OFFSET(0xB963020)
#define JECLIFLECIK_GET_CUSTOMERPRAISECRAFT_OFFSET UNITYSDK_OFFSET(0xB963030)
#define JECLIFLECIK_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB963010)
#define JECLIFLECIK_GET_ID_OFFSET UNITYSDK_OFFSET(0xB962F80)
#define JECLIFLECIK_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB963000)
#define JECLIFLECIK_GET_PASSREWARDCOIN_OFFSET UNITYSDK_OFFSET(0xB962FB0)
#define JECLIFLECIK_GET_PASSREWARDEXP_OFFSET UNITYSDK_OFFSET(0xB962FC0)
#define JECLIFLECIK_GET_REQUIREMENTID_OFFSET UNITYSDK_OFFSET(0xB962FA0)
#define JECLIFLECIK_GET_UNLOCKCONDITIONID_OFFSET UNITYSDK_OFFSET(0xB962F90)

inline static constexpr unsigned int JECLIFLECIK_TypeDefinitionIndex = 82910;

	class JECLIFLECIK : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BonusRewardCoinList_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BonusRewardExpList_k__BackingField; // 0x18
		::System::UInt32 _PassRewardCoin_k__BackingField; // 0x20
		::System::Int32 _CacheKey_k__BackingField; // 0x24
		::System::UInt32 _UnlockConditionID_k__BackingField; // 0x28
		::System::UInt32 _Level_k__BackingField; // 0x2C
		::System::UInt32 _RequirementID_k__BackingField; // 0x30
		::System::UInt32 _ID_k__BackingField; // 0x34
		::System::UInt32 _PassRewardExp_k__BackingField; // 0x38
		::System::UInt32 _CustomerActorID_k__BackingField; // 0x3C
		::RPG::Client::TextID _CustomerPraiseCraft_k__BackingField; // 0x40
		::RPG::Client::TextID _CustomerCmt_k__BackingField; // 0x50
		::RPG::Client::TextID _Desc_k__BackingField; // 0x60
		::System::Void _ctor(::HNCGHAOHBPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNCGHAOHBPP*))((::PBYTE)hIl2Cpp + JECLIFLECIK_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CacheKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLIFLECIK_GET_CACHEKEY_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLIFLECIK_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockConditionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLIFLECIK_GET_UNLOCKCONDITIONID_OFFSET))(this);
		}

		::System::UInt32 get_RequirementID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLIFLECIK_GET_REQUIREMENTID_OFFSET))(this);
		}

		::System::UInt32 get_PassRewardCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLIFLECIK_GET_PASSREWARDCOIN_OFFSET))(this);
		}

		::System::UInt32 get_PassRewardExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLIFLECIK_GET_PASSREWARDEXP_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BonusRewardCoinList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLIFLECIK_GET_BONUSREWARDCOINLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BonusRewardExpList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLIFLECIK_GET_BONUSREWARDEXPLIST_OFFSET))(this);
		}

		::System::UInt32 get_CustomerActorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLIFLECIK_GET_CUSTOMERACTORID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLIFLECIK_GET_LEVEL_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLIFLECIK_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_CustomerCmt()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLIFLECIK_GET_CUSTOMERCMT_OFFSET))(this);
		}

		::RPG::Client::TextID get_CustomerPraiseCraft()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLIFLECIK_GET_CUSTOMERPRAISECRAFT_OFFSET))(this);
		}

	};
