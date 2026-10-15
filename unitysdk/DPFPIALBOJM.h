#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DPFPIALBOJM_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x11FFC6D0)
#define DPFPIALBOJM_CTOR_OFFSET UNITYSDK_OFFSET(0x11FFC6C0)
#define DPFPIALBOJM_FMFALIEKDGK_OFFSET UNITYSDK_OFFSET(0x11FFC710)

	class DPFPIALBOJM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFPIALBOJM_CTOR_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFPIALBOJM_ALJIOCDBMKO_OFFSET))(this);
		}

		::System::Int32 FMFALIEKDGK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFPIALBOJM_FMFALIEKDGK_OFFSET))(this);
		}

	};
