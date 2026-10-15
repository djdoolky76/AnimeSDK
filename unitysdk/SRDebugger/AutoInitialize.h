#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SRDEBUGGER_AUTOINITIALIZE_ONLOADBEFORESCENE_OFFSET UNITYSDK_OFFSET(0x1ED36680)
#define SRDEBUGGER_AUTOINITIALIZE_ONLOAD_OFFSET UNITYSDK_OFFSET(0x1ED366C0)

namespace SRDebugger
{
	class AutoInitialize : public ::System::Object
	{
	public:
		// static const ::System::Object InitializeLoadType; // 0x0
		static ::System::Void OnLoadBeforeScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_AUTOINITIALIZE_ONLOADBEFORESCENE_OFFSET))();
		}

		static ::System::Void OnLoad()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_AUTOINITIALIZE_ONLOAD_OFFSET))();
		}

	};
}
