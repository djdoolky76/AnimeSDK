#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EKKLBCNOBIA_COAMKHIMHBP_OFFSET UNITYSDK_OFFSET(0x155011B0)
#define EKKLBCNOBIA_CTOR_OFFSET UNITYSDK_OFFSET(0x15501200)
#define EKKLBCNOBIA_DBOBDPMCMAC_OFFSET UNITYSDK_OFFSET(0x15501160)
#define EKKLBCNOBIA_GINNCHCMANI_OFFSET UNITYSDK_OFFSET(0x15501110)

inline static constexpr unsigned int EKKLBCNOBIA_TypeDefinitionIndex = 74908;

	class EKKLBCNOBIA : public ::System::Object
	{
	public:
		::System::Single NOBLGAFDCEL; // 0x10
		::System::UInt32 EMHIMJNALNF; // 0x14
		::System::UInt32 OKAMKANJLIO; // 0x18
		::System::Single HKBAOEHDHIJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKLBCNOBIA_CTOR_OFFSET))(this);
		}

		::System::UInt32 GINNCHCMANI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKLBCNOBIA_GINNCHCMANI_OFFSET))(this);
		}

		::System::UInt32 DBOBDPMCMAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKLBCNOBIA_DBOBDPMCMAC_OFFSET))(this);
		}

		::System::UInt32 COAMKHIMHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKLBCNOBIA_COAMKHIMHBP_OFFSET))(this);
		}

	};
