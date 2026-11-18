#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_SUPERDEBUG_LOGKEY_GET_GRAPHEVENT_OFFSET UNITYSDK_OFFSET(0x1F380BF0)
#define MOLEMOLE_SUPERDEBUG_LOGKEY_GET_ZIPLINEHINT_OFFSET UNITYSDK_OFFSET(0x1F380BB0)

namespace MoleMole
{
	inline static constexpr unsigned int SuperDebug_LogKey_TypeDefinitionIndex = 7955;

	struct alignas(4) SuperDebug_LogKey
	{
		static ::System::String* get_ZipLineHint()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGKEY_GET_ZIPLINEHINT_OFFSET))();
		}

		static ::System::String* get_GraphEvent()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGKEY_GET_GRAPHEVENT_OFFSET))();
		}
	};
}
