#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIHACKERPLUSLEVELITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x187BCEE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerPlusLevelItemWidgetControllerContext_TypeDefinitionIndex = 38337;

	class UIHackerPlusLevelItemWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Name; // 0x28
		::System::String* ButtonText; // 0x30
		::System::String* LockText; // 0x38
		::System::String* BangbooIcon; // 0x40
		::System::Int32 MaxProgress; // 0x48
		::System::Boolean IsButtonInteractable; // 0x4C
		::System::Boolean ShowLockText; // 0x4D
		::System::Boolean ShowTimeLock; // 0x4E
		::System::Byte _padding0[0x1];
		::System::Int32 CurProgress; // 0x50
		::System::Boolean ShowButton; // 0x54
		::System::Boolean ShowLock; // 0x55
		::System::Boolean IsFinish; // 0x56
		::System::Boolean ShowProgress; // 0x57
		::System::Int32 GeneralLevelID; // 0x58
		::System::Byte _padding1[0x4];
		::System::Int64 LockRemainTime; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERPLUSLEVELITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
