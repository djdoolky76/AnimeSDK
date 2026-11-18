#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ButtonQTETaskEntryBase.h"

class BCMJNECADGK;

#define MOLEMOLE_CONFIG_BUTTONQTETASKSINGLEPRESSACCURATEENTRY_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x19B11230)
#define MOLEMOLE_CONFIG_BUTTONQTETASKSINGLEPRESSACCURATEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19B112B0)
#define MOLEMOLE_CONFIG_BUTTONQTETASKSINGLEPRESSACCURATEENTRY___BASE_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x19B11320)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ButtonQTETaskSinglePressAccurateEntry_TypeDefinitionIndex = 39490;

	class ButtonQTETaskSinglePressAccurateEntry : public ::MoleMole::Config::ButtonQTETaskEntryBase
	{
	public:
		::System::Single AccurateInputStartTime; // 0xA8
		::System::Boolean InaccurateInputFail; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKSINGLEPRESSACCURATEENTRY__CTOR_OFFSET))(this);
		}

		::BCMJNECADGK* CreateRealtimeQTETask()
		{
			return ((::BCMJNECADGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKSINGLEPRESSACCURATEENTRY_CREATEREALTIMEQTETASK_OFFSET))(this);
		}

		::BCMJNECADGK* __base_CreateRealtimeQTETask()
		{
			return ((::BCMJNECADGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKSINGLEPRESSACCURATEENTRY___BASE_CREATEREALTIMEQTETASK_OFFSET))(this);
		}
	};
}
