#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EPAOAGKDGHO;

#define MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_GET_LOGINFUNDINFOSHOPDATA_OFFSET UNITYSDK_OFFSET(0x198D2270)
#define MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_GET_REWARDINDEX_OFFSET UNITYSDK_OFFSET(0x198D2290)
#define MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_SET_LOGINFUNDINFOSHOPDATA_OFFSET UNITYSDK_OFFSET(0x198D2280)
#define MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_SET_REWARDINDEX_OFFSET UNITYSDK_OFFSET(0x198D22A0)
#define MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x198D22B0)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallLimitedCardRowContext_TypeDefinitionIndex = 71784;

	class ShoppingMallLimitedCardRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EPAOAGKDGHO* _LoginFundInfoShopData_k__BackingField; // 0x28
		::System::Int32 _RewardIndex_k__BackingField; // 0x30

		::System::Void _ctor(::EPAOAGKDGHO* loginFundInfoShopData, ::System::Int32 rewardIndex)
		{
			return ((::System::Void(*)(::PVOID, ::EPAOAGKDGHO*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT__CTOR_OFFSET))(this, loginFundInfoShopData, rewardIndex);
		}

		::EPAOAGKDGHO* get_LoginFundInfoShopData()
		{
			return ((::EPAOAGKDGHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_GET_LOGINFUNDINFOSHOPDATA_OFFSET))(this);
		}

		::System::Void set_LoginFundInfoShopData(::EPAOAGKDGHO* value)
		{
			return ((::System::Void(*)(::PVOID, ::EPAOAGKDGHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_SET_LOGINFUNDINFOSHOPDATA_OFFSET))(this, value);
		}

		::System::Int32 get_RewardIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_GET_REWARDINDEX_OFFSET))(this);
		}

		::System::Void set_RewardIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_SET_REWARDINDEX_OFFSET))(this, value);
		}
	};
}
