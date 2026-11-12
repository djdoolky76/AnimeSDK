#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNOGLCJCKEI.h"
#include "unitysdk/System/Object.h"

#define FNFNBEENNKI_CTOR_OFFSET UNITYSDK_OFFSET(0x167E1150)

inline static constexpr unsigned int FNFNBEENNKI_TypeDefinitionIndex = 79837;

	class FNFNBEENNKI : public ::System::Object
	{
	public:
		::LNOGLCJCKEI PGIDENFONNA; // 0x10
		::System::UInt32 MLDLOJJBIJD; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFNBEENNKI_CTOR_OFFSET))(this);
		}

	};
