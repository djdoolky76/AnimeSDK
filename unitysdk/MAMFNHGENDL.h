#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNAGFFCCOHI.h"

#define MAMFNHGENDL_DFIGOHGIDJN_OFFSET UNITYSDK_OFFSET(0x14D58CA0)
#define MAMFNHGENDL__CTOR_OFFSET UNITYSDK_OFFSET(0x14D58C90)

inline static constexpr unsigned int MAMFNHGENDL_TypeDefinitionIndex = 47074;

class MAMFNHGENDL : public ::JNAGFFCCOHI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMFNHGENDL__CTOR_OFFSET))(this);
	}

	::System::Int64 DFIGOHGIDJN()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMFNHGENDL_DFIGOHGIDJN_OFFSET))(this);
	}
};
