#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HMHOLKLMKLP_CTOR_OFFSET UNITYSDK_OFFSET(0x15D82B20)
#define HMHOLKLMKLP_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15D82AD0)

inline static constexpr unsigned int HMHOLKLMKLP_TypeDefinitionIndex = 52736;

	class HMHOLKLMKLP : public ::System::Object
	{
	public:
		::System::Single FFMKEGJEDPJ; // 0x10
		::System::Boolean COILJOCKDLC; // 0x14
		::System::Boolean HHBFEEGKAFA; // 0x15
		::System::Byte _padding0[0x2];
		::System::Single HELIKIGLPNJ; // 0x18
		::System::Single JKFLLPMMFKE; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHOLKLMKLP_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHOLKLMKLP_KHGIKBFDLFB_OFFSET))(this);
		}

	};
