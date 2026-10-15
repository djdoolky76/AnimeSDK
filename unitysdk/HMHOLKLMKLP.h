#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HMHOLKLMKLP_CTOR_OFFSET UNITYSDK_OFFSET(0x15D76270)
#define HMHOLKLMKLP_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15D76220)

inline static constexpr unsigned int HMHOLKLMKLP_TypeDefinitionIndex = 52736;

	class HMHOLKLMKLP : public ::System::Object
	{
	public:
		::System::Boolean HHBFEEGKAFA; // 0x10
		::System::Boolean COILJOCKDLC; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single HELIKIGLPNJ; // 0x14
		::System::Single JKFLLPMMFKE; // 0x18
		::System::Single FFMKEGJEDPJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHOLKLMKLP_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHOLKLMKLP_KHGIKBFDLFB_OFFSET))(this);
		}

	};
