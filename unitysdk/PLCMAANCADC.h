#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;

#define PLCMAANCADC_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E54A0)

inline static constexpr unsigned int PLCMAANCADC_TypeDefinitionIndex = 57383;

	class PLCMAANCADC : public ::System::Object
	{
	public:
		::KFELGAIGHAP* FNACALDOOIF; // 0x10
		::KFELGAIGHAP* PCNAKDOLCCD; // 0x18
		::KFELGAIGHAP* MFCDKJIHDEH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCMAANCADC_CTOR_OFFSET))(this);
		}

	};
