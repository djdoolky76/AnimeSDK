#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MABHMGJMHFC.h"

#define NBMCEAADABC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4049D0)

inline static constexpr unsigned int NBMCEAADABC_TypeDefinitionIndex = 25494;

	class NBMCEAADABC : public ::MABHMGJMHFC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMCEAADABC_CTOR_OFFSET))(this);
		}

	};
