#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIAJFCNCMEB;

#define BNNFOFCHMCA_CTOR_OFFSET UNITYSDK_OFFSET(0xBDE2870)

	class BNNFOFCHMCA : public ::System::Object
	{
	public:
		::IIAJFCNCMEB* HNEOOKPBCNK; // 0x10
		::System::Void _ctor(::IIAJFCNCMEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIAJFCNCMEB*))((::PBYTE)hIl2Cpp + BNNFOFCHMCA_CTOR_OFFSET))(this, a1);
		}

	};
