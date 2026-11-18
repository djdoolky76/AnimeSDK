#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJGIBMLAOEG.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_RABPAGECTRLCONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x13116B30)
#define MOLEMOLE_RABPAGECTRLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13116AD0)
#define MOLEMOLE_RABPAGECTRLCONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x13116C10)

namespace MoleMole
{
	inline static constexpr unsigned int RABPageCtrlContext_TypeDefinitionIndex = 89891;

	class RABPageCtrlContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		// static const ::System::String* KeyBackPageType; // 0x0
		::System::Action* AfterOpenAction; // 0x28
		::System::Int32 jumpParam; // 0x30
		::IJGIBMLAOEG BackPageType; // 0x34
		::System::Boolean IsFromSwitchScene; // 0x38
		::System::Byte _padding0[0x3];
		::IJGIBMLAOEG PageType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RABPAGECTRLCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RABPAGECTRLCONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RABPAGECTRLCONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
