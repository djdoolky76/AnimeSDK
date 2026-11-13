#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightJadeShopCostType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace RPG::Client { class GridFightCostContext; }
namespace RPG::Client { class GridFightJadeShopGood; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC2E9C0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC2EC20)
#define RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_EMPTY_OFFSET UNITYSDK_OFFSET(0x1CC2E450)
#define RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GETCOSTSTATE_OFFSET UNITYSDK_OFFSET(0x1CC2ED40)
#define RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_BONUSDROPLIST_OFFSET UNITYSDK_OFFSET(0x1CC2ECC0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_COSTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CC2CEF0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_COSTPARAM_OFFSET UNITYSDK_OFFSET(0x1CC2ECB0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_COSTTYPE_OFFSET UNITYSDK_OFFSET(0x1CC2ECA0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CC2EC80)
#define RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_ISBONUSDROPVALID_OFFSET UNITYSDK_OFFSET(0x1CC2ECD0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1CC2CD70)
#define RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_OVERRIDEGOODNAME_OFFSET UNITYSDK_OFFSET(0x1CC2ED30)
#define RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0x1CC2EC90)
#define RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_HASSAMECONTENT_OFFSET UNITYSDK_OFFSET(0x1CC2E270)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightJadeShopGood_TypeDefinitionIndex = 67255;

	class GridFightJadeShopGood : public ::System::Object
	{
	public:
		::System::String* _OverrideGoodName_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* _BonusDropList_k__BackingField; // 0x18
		::System::Int32 _SlotId_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x24
		::RPG::GameCore::GridFightJadeShopCostType _CostType_k__BackingField; // 0x28
		::System::UInt32 _CostParam_k__BackingField; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::Int32 a2, ::RPG::GameCore::GridFightJadeShopCostType a3, ::System::UInt32 a4, ::RPG::Client::TextID a5, ::System::Collections::Generic::IList_1<::System::UInt32>* a6, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::GameCore::GridFightJadeShopCostType, ::System::UInt32, ::RPG::Client::TextID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_SlotId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_SLOTID_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_ISEMPTY_OFFSET))(this);
		}

		::RPG::GameCore::GridFightJadeShopCostType get_CostType()
		{
			return ((::RPG::GameCore::GridFightJadeShopCostType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_COSTTYPE_OFFSET))(this);
		}

		::System::UInt32 get_CostParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_COSTPARAM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* get_BonusDropList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_BONUSDROPLIST_OFFSET))(this);
		}

		::System::Boolean get_IsBonusDropValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_ISBONUSDROPVALID_OFFSET))(this);
		}

		::System::String* get_OverrideGoodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_OVERRIDEGOODNAME_OFFSET))(this);
		}

		::RPG::Client::GridFightCostContext* get_CostContext()
		{
			return ((::RPG::Client::GridFightCostContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GET_COSTCONTEXT_OFFSET))(this);
		}

		::System::String* GetCostState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_GETCOSTSTATE_OFFSET))(this);
		}

		::System::Boolean HasSameContent(::RPG::Client::GridFightJadeShopGood* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightJadeShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_HASSAMECONTENT_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightJadeShopGood* Empty(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightJadeShopGood*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPGOOD_EMPTY_OFFSET))(a1);
		}

	};
}
