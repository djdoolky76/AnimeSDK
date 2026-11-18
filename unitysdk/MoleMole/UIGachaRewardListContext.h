#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DOJFNBKAOMN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGACHAREWARDLISTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199B48F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaRewardListContext_TypeDefinitionIndex = 76226;

	class UIGachaRewardListContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::DOJFNBKAOMN*>* Rewards; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* PointItems; // 0x30
		::System::Int32 GachaID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
