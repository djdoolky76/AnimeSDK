#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMKLPPGLKJJ.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class AKNNIKCLGMD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIREWARDBUFFEFFECTPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15C58380)

namespace MoleMole
{
	inline static constexpr unsigned int UIRewardBuffEffectPopWindowContext_TypeDefinitionIndex = 42101;

	class UIRewardBuffEffectPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::AKNNIKCLGMD*>* RewardBuffs; // 0x28
		::JMKLPPGLKJJ RewardBuffGameTag; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDBUFFEFFECTPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
