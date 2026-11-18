#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ANAJKENMCCA;

#define MOLEMOLE_UIHOUSERHYTHMVIEWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183BF380)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmViewContext_TypeDefinitionIndex = 47806;

	class UIHouseRhythmViewContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ANAJKENMCCA* timelineHandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMVIEWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
