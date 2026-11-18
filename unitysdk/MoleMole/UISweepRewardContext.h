#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JFFIPPCGFPF;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class ELKFEFPPPFL_2;

#define MOLEMOLE_UISWEEPREWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1135F1D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISweepRewardContext_TypeDefinitionIndex = 84556;

	class UISweepRewardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::ELKFEFPPPFL_2<::System::UInt32, ::JFFIPPCGFPF*>*>* RewardList; // 0x28
		::MoleMole::ELocalPlayType LocalPlayType; // 0x30
		::System::UInt32 OverflowId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWEEPREWARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
