#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_BACKFLOWINTRPOPSHOW_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x12756250)
#define MOLEMOLE_BACKFLOWINTRPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x12756240)
#define MOLEMOLE_BACKFLOWINTRPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x12756260)
#define MOLEMOLE_BACKFLOWINTRPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x127563C0)

namespace MoleMole
{
	inline static constexpr unsigned int BackFlowIntrPopShow_TypeDefinitionIndex = 44553;

	class BackFlowIntrPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWINTRPOPSHOW__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWINTRPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWINTRPOPSHOW_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWINTRPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
