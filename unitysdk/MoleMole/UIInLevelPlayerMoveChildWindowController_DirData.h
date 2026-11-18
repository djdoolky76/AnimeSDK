#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;

#define MOLEMOLE_UIINLEVELPLAYERMOVECHILDWINDOWCONTROLLER_DIRDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x175F1520)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPlayerMoveChildWindowController_DirData_TypeDefinitionIndex = 67152;

	class UIInLevelPlayerMoveChildWindowController_DirData : public ::System::Object
	{
	public:
		::FGCOIBFFCHB* trans; // 0x10
		::System::Single rBegin; // 0x18
		::System::Single rEnd; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERMOVECHILDWINDOWCONTROLLER_DIRDATA__CTOR_OFFSET))(this);
		}
	};
}
