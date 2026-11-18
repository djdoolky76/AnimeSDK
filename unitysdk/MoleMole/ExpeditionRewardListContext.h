#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CIFBOKELGMC;

#define MOLEMOLE_EXPEDITIONREWARDLISTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x103FCBA0)

namespace MoleMole
{
	inline static constexpr unsigned int ExpeditionRewardListContext_TypeDefinitionIndex = 81584;

	class ExpeditionRewardListContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CIFBOKELGMC* LayerData; // 0x28
		::System::Boolean isShowNormal; // 0x30
		::System::Boolean useCache; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXPEDITIONREWARDLISTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
