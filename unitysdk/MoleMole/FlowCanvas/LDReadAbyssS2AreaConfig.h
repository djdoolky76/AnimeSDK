#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlatBuffers::Config { class AbyssS2AreaConfigTemplate; }

#define MOLEMOLE_FLOWCANVAS_LDREADABYSSS2AREACONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7BB370)
#define MOLEMOLE_FLOWCANVAS_LDREADABYSSS2AREACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BB4A0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LDReadAbyssS2AreaConfig_TypeDefinitionIndex = 71973;

	class LDReadAbyssS2AreaConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADABYSSS2AREACONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::FlatBuffers::Config::AbyssS2AreaConfigTemplate* Invoke()
		{
			return ((::MoleMole::FlatBuffers::Config::AbyssS2AreaConfigTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADABYSSS2AREACONFIG_INVOKE_OFFSET))(this);
		}
	};
}
