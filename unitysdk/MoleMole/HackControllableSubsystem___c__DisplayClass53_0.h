#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE8DC0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS53_0__WAITEXITSTREAMINGLOADED_B__2_OFFSET UNITYSDK_OFFSET(0x13EE8ED0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS53_0__WAITEXITSTREAMINGLOADED_G__COMPLETE_1_OFFSET UNITYSDK_OFFSET(0x13EE8E40)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS53_0__WAITEXITSTREAMINGLOADED_G__REMOVEADDITIONALPOSITION_0_OFFSET UNITYSDK_OFFSET(0x13EE8DD0)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass53_0_TypeDefinitionIndex = 41056;

	class HackControllableSubsystem___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::Action* onLoaded; // 0x10
		::System::Boolean removeWhenIdAssigned; // 0x18
		::System::Boolean completed; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 additionalId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Void _WaitExitStreamingLoaded_g__RemoveAdditionalPosition_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS53_0__WAITEXITSTREAMINGLOADED_G__REMOVEADDITIONALPOSITION_0_OFFSET))(this);
		}

		::System::Void _WaitExitStreamingLoaded_g__Complete_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS53_0__WAITEXITSTREAMINGLOADED_G__COMPLETE_1_OFFSET))(this);
		}

		::System::Void _WaitExitStreamingLoaded_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS53_0__WAITEXITSTREAMINGLOADED_B__2_OFFSET))(this);
		}
	};
}
