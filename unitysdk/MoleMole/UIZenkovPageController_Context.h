#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMKJPFMGGHJ.h"
#include "unitysdk/IHMFPHBDBAD.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UIZENKOVPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C0E020)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPageController_Context_TypeDefinitionIndex = 88882;

	class UIZenkovPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Nullable_1<::IHMFPHBDBAD> InitDelegateSubType; // 0x28
		::System::Int32 NewbieID; // 0x30
		::System::Boolean InitOpenMissionPage; // 0x34
		::System::Byte _padding0[0x3];
		::GMKJPFMGGHJ InitBuildingType; // 0x38
		::System::Int32 InitDungeonId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
