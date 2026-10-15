#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class NFAHODNHEKK;

#define IHLFCOLILML_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D82D0)
#define IHLFCOLILML_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1C6D82E0)
#define IHLFCOLILML_TICK_OFFSET UNITYSDK_OFFSET(0x1C6D84A0)

	class IHLFCOLILML : public ::HOCBJOJNLLC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLFCOLILML_CTOR_OFFSET))(this);
		}

		::System::Void FCKDPOPNLIB(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + IHLFCOLILML_FCKDPOPNLIB_OFFSET))(this, a1);
		}

		::System::Void Tick(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + IHLFCOLILML_TICK_OFFSET))(this, a1);
		}

	};
