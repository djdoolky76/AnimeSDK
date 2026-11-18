#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LENFNPPJAHE.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MOLEMOLE_UIYOROZUYADIFFICULTENTRANCECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14E49790)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaDifficultEntranceContext_TypeDefinitionIndex = 74242;

	class UIYorozuyaDifficultEntranceContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Events::UnityAction_1<::LENFNPPJAHE>* ClickAction; // 0x28
		::System::Int32 AbyssGroupId; // 0x30
		::LENFNPPJAHE EntranceType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTENTRANCECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
