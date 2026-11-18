#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ECEMPOCFOMG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_RABGACHAREWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13116A30)

namespace MoleMole
{
	inline static constexpr unsigned int RABGachaRewardContext_TypeDefinitionIndex = 43845;

	class RABGachaRewardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::ECEMPOCFOMG*>* RewardItemList; // 0x28
		::System::Int32 costItemId; // 0x30
		::System::Int32 poolId; // 0x34
		::System::Int32 costItemNum; // 0x38

		::System::Void _ctor(::System::Int32 poolId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_RABGACHAREWARDCONTEXT__CTOR_OFFSET))(this, poolId);
		}
	};
}
