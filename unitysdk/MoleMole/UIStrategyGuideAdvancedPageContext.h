#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISTRATEGYGUIDEADVANCEDPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14814C30)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideAdvancedPageContext_TypeDefinitionIndex = 84992;

	class UIStrategyGuideAdvancedPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsPreviewMode; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 AvatarID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEADVANCEDPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
