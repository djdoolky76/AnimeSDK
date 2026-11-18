#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KPEKFAGMKCL;
namespace MoleMole { class UIBPPagePageController; }

#define MOLEMOLE_UIBPCOREREWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19D34150)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPCoreRewardContext_TypeDefinitionIndex = 44178;

	class UIBPCoreRewardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIBPPagePageController* bpPageController; // 0x28
		::KPEKFAGMKCL* bpView; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
