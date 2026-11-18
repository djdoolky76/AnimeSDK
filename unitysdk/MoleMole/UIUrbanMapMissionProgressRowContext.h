#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DHMNFJBEEDP;

#define MOLEMOLE_UIURBANMAPMISSIONPROGRESSROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17195360)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapMissionProgressRowContext_TypeDefinitionIndex = 66517;

	class UIUrbanMapMissionProgressRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::DHMNFJBEEDP* CollectData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPMISSIONPROGRESSROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
