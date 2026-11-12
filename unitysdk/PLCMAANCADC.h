#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;

#define PLCMAANCADC_CTOR_OFFSET UNITYSDK_OFFSET(0xCC1BBE0)

inline static constexpr unsigned int PLCMAANCADC_TypeDefinitionIndex = 58611;

	class PLCMAANCADC : public ::System::Object
	{
	public:
		::KFELGAIGHAP* PCNAKDOLCCD; // 0x10
		::KFELGAIGHAP* FNACALDOOIF; // 0x18
		::KFELGAIGHAP* MFCDKJIHDEH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCMAANCADC_CTOR_OFFSET))(this);
		}

	};
