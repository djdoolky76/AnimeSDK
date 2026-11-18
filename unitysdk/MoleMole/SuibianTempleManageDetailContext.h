#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADLCDHJKFIO.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_SUIBIANTEMPLEMANAGEDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13F148A0)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianTempleManageDetailContext_TypeDefinitionIndex = 79402;

	class SuibianTempleManageDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ADLCDHJKFIO OpenType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANTEMPLEMANAGEDETAILCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
