#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HADIEBGEOMM;

#define FKMJCOHPKCG_CTOR_OFFSET UNITYSDK_OFFSET(0x15810BA0)

	class FKMJCOHPKCG : public ::System::Object
	{
	public:
		::HADIEBGEOMM* PNNIBNKMLFK; // 0x10
		::System::Single HKGPLKJOCDH; // 0x18
		::System::Single CPMLCOJAGND; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKMJCOHPKCG_CTOR_OFFSET))(this);
		}

	};
