#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EHEAJPCNGEN;
namespace System { class Action; }
template <typename T1, typename T2> class ELKFEFPPPFL_2;

#define MOLEMOLE_UIFISHCONTESTRESULTPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D70C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestResultPopContext_TypeDefinitionIndex = 78161;

	class UIFishContestResultPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClose; // 0x28
		::ELKFEFPPPFL_2<::System::UInt32, ::System::UInt32>* RewardItemMap; // 0x30
		::EHEAJPCNGEN* FishData; // 0x38
		::System::UInt32 RewardTypeMask; // 0x40
		::System::Boolean ForceBg; // 0x44
		::System::Boolean HideNew; // 0x45

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTRESULTPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
