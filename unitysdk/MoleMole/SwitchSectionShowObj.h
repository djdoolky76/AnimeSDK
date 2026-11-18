#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class AIMJIBJFFBD;

#define MOLEMOLE_SWITCHSECTIONSHOWOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A0989D0)
#define MOLEMOLE_SWITCHSECTIONSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1A098A00)
#define MOLEMOLE_SWITCHSECTIONSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0989E0)

namespace MoleMole
{
	inline static constexpr unsigned int SwitchSectionShowObj_TypeDefinitionIndex = 52489;

	class SwitchSectionShowObj : public ::MoleMole::LogicMessageBase
	{
	public:
		::AIMJIBJFFBD* _ntf; // 0x20

		::System::Void _ctor(::AIMJIBJFFBD* ntf, ::FAKODLEPJOA page)
		{
			return ((::System::Void(*)(::PVOID, ::AIMJIBJFFBD*, ::FAKODLEPJOA))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHSECTIONSHOWOBJ__CTOR_OFFSET))(this, ntf, page);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHSECTIONSHOWOBJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHSECTIONSHOWOBJ_ONPROCESS_OFFSET))(this);
		}
	};
}
