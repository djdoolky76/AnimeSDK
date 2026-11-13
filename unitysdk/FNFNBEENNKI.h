#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNOGLCJCKEI.h"
#include "unitysdk/System/Object.h"

#define FNFNBEENNKI_CTOR_OFFSET UNITYSDK_OFFSET(0x17F163D0)

inline static constexpr unsigned int FNFNBEENNKI_TypeDefinitionIndex = 79836;

	class FNFNBEENNKI : public ::System::Object
	{
	public:
		::System::UInt32 MLDLOJJBIJD; // 0x10
		::LNOGLCJCKEI PGIDENFONNA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFNBEENNKI_CTOR_OFFSET))(this);
		}

	};
