#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMPGBMBEENE;
namespace System { class String; }

#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS65_0__ADDCOUNTUPTIMERTASK_B__0_OFFSET UNITYSDK_OFFSET(0x1219CEB0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1219A490)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonSubsystem___c__DisplayClass65_0_TypeDefinitionIndex = 71866;

	class BigSceneDungeonSubsystem___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::System::String* tagName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddCountUpTimerTask_b__0(::FMPGBMBEENE* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMPGBMBEENE*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS65_0__ADDCOUNTUPTIMERTASK_B__0_OFFSET))(this, x);
		}
	};
}
