#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class KLEFGGIHGMI;
namespace System { class String; }

#define RPG_CLIENT_FLIPDEVICEPOINT___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD0440D0)
#define RPG_CLIENT_FLIPDEVICEPOINT___C__DISPLAYCLASS7_0__ONSTATECHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xD044640)

namespace RPG::Client
{
	inline static constexpr unsigned int FlipDevicePoint___c__DisplayClass7_0_TypeDefinitionIndex = 73318;

	class FlipDevicePoint___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::ValueTuple item; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnStateChange_b__0(::KLEFGGIHGMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT___C__DISPLAYCLASS7_0__ONSTATECHANGE_B__0_OFFSET))(this, a1);
		}

	};
}
