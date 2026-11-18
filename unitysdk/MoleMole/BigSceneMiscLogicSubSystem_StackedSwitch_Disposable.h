#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class BigSceneMiscLogicSubSystem_StackedSwitch; }

#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_DISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1921B570)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_DISPOSABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1921B5D0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneMiscLogicSubSystem_StackedSwitch_Disposable_TypeDefinitionIndex = 39727;

	class BigSceneMiscLogicSubSystem_StackedSwitch_Disposable : public ::System::Object
	{
	public:
		::MoleMole::BigSceneMiscLogicSubSystem_StackedSwitch* Switch; // 0x10
		::System::Boolean IsCancelled; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GroupID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_DISPOSABLE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_DISPOSABLE_DISPOSE_OFFSET))(this);
		}
	};
}
