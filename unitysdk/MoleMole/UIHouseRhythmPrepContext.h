#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CKKHNHHDMPN;

#define MOLEMOLE_UIHOUSERHYTHMPREPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x176A8A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmPrepContext_TypeDefinitionIndex = 52556;

	class UIHouseRhythmPrepContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CKKHNHHDMPN* HouseRhythmData; // 0x28
		::System::Int32 showCharacterID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMPREPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
