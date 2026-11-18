#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIDEFENCELARGETVCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x184AA0E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDefenceLargeTVContext_TypeDefinitionIndex = 43549;

	class UIDefenceLargeTVContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean ShowNumber; // 0x28
		::System::Boolean isLeftJustify; // 0x29
		::System::Boolean needFlush; // 0x2A
		::System::Byte _padding0[0x1];
		::System::Int32 initPercent; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEFENCELARGETVCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
