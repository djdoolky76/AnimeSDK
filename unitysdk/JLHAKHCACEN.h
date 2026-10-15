#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKGFIFMIGNC.h"

#define JLHAKHCACEN_CTOR_OFFSET UNITYSDK_OFFSET(0xB244B80)
#define JLHAKHCACEN_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB2448B0)

inline static constexpr unsigned int JLHAKHCACEN_TypeDefinitionIndex = 77111;

	class JLHAKHCACEN : public ::AKGFIFMIGNC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHAKHCACEN_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHAKHCACEN_KIGBILLGNOH_OFFSET))(this);
		}

	};
