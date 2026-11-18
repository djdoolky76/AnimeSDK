#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_STREAMINGMESSAGEPUMPSHOW_GET_ISPENETRATE_OFFSET UNITYSDK_OFFSET(0x1A097420)
#define MOLEMOLE_STREAMINGMESSAGEPUMPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A097430)
#define MOLEMOLE_STREAMINGMESSAGEPUMPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1A097480)
#define MOLEMOLE_STREAMINGMESSAGEPUMPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A097440)

namespace MoleMole
{
	inline static constexpr unsigned int StreamingMessagePumpShow_TypeDefinitionIndex = 72123;

	class StreamingMessagePumpShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STREAMINGMESSAGEPUMPSHOW__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPenetrate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STREAMINGMESSAGEPUMPSHOW_GET_ISPENETRATE_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STREAMINGMESSAGEPUMPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STREAMINGMESSAGEPUMPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
