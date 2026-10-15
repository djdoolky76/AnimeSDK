#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MCDGJEMFCOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C924C10)

	class MCDGJEMFCOA : public ::System::Object
	{
	public:
		::System::Int32 LFPBDLMKCMA; // 0x10
		::System::Int32 AJNIINMOEFO; // 0x14
		::System::Int32 MCCIKOBOIEM; // 0x18
		::System::Int32 JEFACMIDJHK; // 0x1C
		::System::Int32 MDEHOJGIEEP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDGJEMFCOA_CTOR_OFFSET))(this);
		}

	};
