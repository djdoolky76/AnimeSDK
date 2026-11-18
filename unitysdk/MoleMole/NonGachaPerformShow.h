#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class JCEPPCGPMHL;

#define MOLEMOLE_NONGACHAPERFORMSHOW_DIRECTSHOW_OFFSET UNITYSDK_OFFSET(0x1A7115C0)
#define MOLEMOLE_NONGACHAPERFORMSHOW_DOPROCESS_OFFSET UNITYSDK_OFFSET(0x1A711610)
#define MOLEMOLE_NONGACHAPERFORMSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A711510)
#define MOLEMOLE_NONGACHAPERFORMSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1A711570)
#define MOLEMOLE_NONGACHAPERFORMSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A711520)

namespace MoleMole
{
	inline static constexpr unsigned int NonGachaPerformShow_TypeDefinitionIndex = 60046;

	class NonGachaPerformShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::JCEPPCGPMHL* _context; // 0x28

		::System::Void _ctor(::JCEPPCGPMHL* context)
		{
			return ((::System::Void(*)(::PVOID, ::JCEPPCGPMHL*))((::PBYTE)hIl2Cpp + MOLEMOLE_NONGACHAPERFORMSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NONGACHAPERFORMSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NONGACHAPERFORMSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void DirectShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NONGACHAPERFORMSHOW_DIRECTSHOW_OFFSET))(this);
		}

		::System::Void DoProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NONGACHAPERFORMSHOW_DOPROCESS_OFFSET))(this);
		}
	};
}
