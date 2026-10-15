#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class HNCGHAOHBPP;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JECLIFLECIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1660E9C0)
#define JECLIFLECIK_GET_BONUSREWARDCOINLIST_OFFSET UNITYSDK_OFFSET(0x1660E950)
#define JECLIFLECIK_GET_BONUSREWARDEXPLIST_OFFSET UNITYSDK_OFFSET(0x1660E960)
#define JECLIFLECIK_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0x1660E8F0)
#define JECLIFLECIK_GET_CUSTOMERACTORID_OFFSET UNITYSDK_OFFSET(0x1660E970)
#define JECLIFLECIK_GET_CUSTOMERCMT_OFFSET UNITYSDK_OFFSET(0x1660E9A0)
#define JECLIFLECIK_GET_CUSTOMERPRAISECRAFT_OFFSET UNITYSDK_OFFSET(0x1660E9B0)
#define JECLIFLECIK_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1660E990)
#define JECLIFLECIK_GET_ID_OFFSET UNITYSDK_OFFSET(0x1660E900)
#define JECLIFLECIK_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1660E980)
#define JECLIFLECIK_GET_PASSREWARDCOIN_OFFSET UNITYSDK_OFFSET(0x1660E930)
#define JECLIFLECIK_GET_PASSREWARDEXP_OFFSET UNITYSDK_OFFSET(0x1660E940)
#define JECLIFLECIK_GET_REQUIREMENTID_OFFSET UNITYSDK_OFFSET(0x1660E920)
#define JECLIFLECIK_GET_UNLOCKCONDITIONID_OFFSET UNITYSDK_OFFSET(0x1660E910)

inline static constexpr unsigned int JECLIFLECIK_TypeDefinitionIndex = 80132;

	class JECLIFLECIK : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BonusRewardExpList_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BonusRewardCoinList_k__BackingField; // 0x18
		::RPG::Client::TextID _CustomerCmt_k__BackingField; // 0x20
		::RPG::Client::TextID _Desc_k__BackingField; // 0x30
		::RPG::Client::TextID _CustomerPraiseCraft_k__BackingField; // 0x40
		::System::UInt32 _PassRewardCoin_k__BackingField; // 0x50
		::System::UInt32 _PassRewardExp_k__BackingField; // 0x54
		::System::UInt32 _UnlockConditionID_k__BackingField; // 0x58
		::System::UInt32 _CustomerActorID_k__BackingField; // 0x5C
		::System::UInt32 _ID_k__BackingField; // 0x60
		::System::Int32 _CacheKey_k__BackingField; // 0x64
		::System::UInt32 _RequirementID_k__BackingField; // 0x68
		::System::UInt32 _Level_k__BackingField; // 0x6C
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
