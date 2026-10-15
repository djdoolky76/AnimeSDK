#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLEBDFILNJC;

#define GJEKKFJDCAJ___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15A63990)
#define GJEKKFJDCAJ___C__DISPLAYCLASS6_0__GETOFFICEEVENT_B__0_OFFSET UNITYSDK_OFFSET(0x15A64C30)

inline static constexpr unsigned int GJEKKFJDCAJ___c__DisplayClass6_0_TypeDefinitionIndex = 80329;

	class GJEKKFJDCAJ___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::UInt32 officeEventID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEKKFJDCAJ___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetOfficeEvent_b__0(::DLEBDFILNJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DLEBDFILNJC*))((::PBYTE)hIl2Cpp + GJEKKFJDCAJ___C__DISPLAYCLASS6_0__GETOFFICEEVENT_B__0_OFFSET))(this, a1);
		}

	};
