#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"

#define MOLEMOLE_VSYNCPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13B46930)

namespace MoleMole
{
	inline static constexpr unsigned int VSyncProfileContext_TypeDefinitionIndex = 42866;

	class VSyncProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::System::Boolean IsEnabled; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VSYNCPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
