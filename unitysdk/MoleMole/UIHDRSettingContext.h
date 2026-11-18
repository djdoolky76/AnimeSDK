#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAAGNEAJHGM.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIHDRSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x175A7170)

namespace MoleMole
{
	inline static constexpr unsigned int UIHDRSettingContext_TypeDefinitionIndex = 47827;

	class UIHDRSettingContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* FinishCB; // 0x28
		::HAAGNEAJHGM SettingSource; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHDRSETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
