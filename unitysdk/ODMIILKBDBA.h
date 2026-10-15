#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHLEKJMMLBA.h"
class CAINPBIGHGM;

#define ODMIILKBDBA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBDEE180)
#define ODMIILKBDBA_CTOR_OFFSET UNITYSDK_OFFSET(0xBDEFDF0)

inline static constexpr unsigned int ODMIILKBDBA_TypeDefinitionIndex = 62705;

	class ODMIILKBDBA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMIILKBDBA_CTOR_OFFSET))(this);
		}

		::CAINPBIGHGM* BPLPBPMEODA(::AHLEKJMMLBA a1)
		{
			return ((::CAINPBIGHGM*(*)(::PVOID, ::AHLEKJMMLBA))((::PBYTE)hIl2Cpp + ODMIILKBDBA_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
