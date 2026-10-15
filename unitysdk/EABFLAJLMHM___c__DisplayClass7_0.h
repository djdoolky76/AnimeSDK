#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EABFLAJLMHM;
class FOMNCOHAGBA;

#define EABFLAJLMHM___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1266FA60)
#define EABFLAJLMHM___C__DISPLAYCLASS7_0__EXITSESSION_B__0_OFFSET UNITYSDK_OFFSET(0x1266FB90)

	class EABFLAJLMHM___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::FOMNCOHAGBA* session; // 0x10
		::EABFLAJLMHM* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABFLAJLMHM___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _ExitSession_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABFLAJLMHM___C__DISPLAYCLASS7_0__EXITSESSION_B__0_OFFSET))(this);
		}

	};
