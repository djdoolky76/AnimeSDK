#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DG_TWEENING_PLUGINS_CORE_PATHCORE_ABSPATHDECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x20073080)

namespace DG::Tweening::Plugins::Core::PathCore
{
	inline static constexpr unsigned int ABSPathDecoder_TypeDefinitionIndex = 28015;

	class ABSPathDecoder : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_ABSPATHDECODER__CTOR_OFFSET))(this);
		}
	};
}
