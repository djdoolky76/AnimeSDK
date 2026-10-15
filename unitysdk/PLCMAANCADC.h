#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;

#define PLCMAANCADC_CTOR_OFFSET UNITYSDK_OFFSET(0xC2ECE50)

	class PLCMAANCADC : public ::System::Object
	{
	public:
		::KFELGAIGHAP* PCNAKDOLCCD; // 0x10
		::KFELGAIGHAP* MFCDKJIHDEH; // 0x18
		::KFELGAIGHAP* FNACALDOOIF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCMAANCADC_CTOR_OFFSET))(this);
		}

	};
