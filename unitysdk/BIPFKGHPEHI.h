#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"

#define BIPFKGHPEHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB7911C0)
#define BIPFKGHPEHI_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB790FF0)
#define BIPFKGHPEHI_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xB791030)
#define BIPFKGHPEHI_POJDHHCPDNG_OFFSET UNITYSDK_OFFSET(0xB791080)

inline static constexpr unsigned int BIPFKGHPEHI_TypeDefinitionIndex = 53756;

	class BIPFKGHPEHI : public ::GJPFGOGOLBI
	{
	public:
		::System::Boolean DAMDCNPCPNA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPFKGHPEHI_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPFKGHPEHI_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPFKGHPEHI_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void POJDHHCPDNG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIPFKGHPEHI_POJDHHCPDNG_OFFSET))(this, a1);
		}

	};
