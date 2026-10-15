#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJEMBJDCAPG;
class JEFCCHAPOLA;

#define GJEMBJDCAPG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A64D10)
#define GJEMBJDCAPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x15A64C50)

	class GJEMBJDCAPG : public ::System::Object
	{
	public:
		::JEFCCHAPOLA* HEDALLJOGCO; // 0x10
		::System::UInt32 ACCJKGEKHKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEMBJDCAPG_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::GJEMBJDCAPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJEMBJDCAPG*))((::PBYTE)hIl2Cpp + GJEMBJDCAPG_EQUALS_OFFSET))(this, a1);
		}

	};
