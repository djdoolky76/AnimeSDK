#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_LDREADRABLEVELID_INVOKE_OFFSET UNITYSDK_OFFSET(0x1622D760)
#define MOLEMOLE_FLOWCANVAS_LDREADRABLEVELID__CTOR_OFFSET UNITYSDK_OFFSET(0x1622D890)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LDReadRABLevelId_TypeDefinitionIndex = 55733;

	class LDReadRABLevelId
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADRABLEVELID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADRABLEVELID_INVOKE_OFFSET))(this);
		}
	};
}
