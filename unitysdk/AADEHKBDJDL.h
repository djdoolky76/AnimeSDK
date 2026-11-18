#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGKOFMFKNNO.h"

#define AADEHKBDJDL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14207C10)
#define AADEHKBDJDL__CTOR_OFFSET UNITYSDK_OFFSET(0x14207C00)

inline static constexpr unsigned int AADEHKBDJDL_TypeDefinitionIndex = 66526;

class AADEHKBDJDL : public ::IGKOFMFKNNO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADEHKBDJDL__CTOR_OFFSET))(this);
	}

	static ::AADEHKBDJDL* JFDOOELFAOA()
	{
		return ((::AADEHKBDJDL*(*)())((::PBYTE)hIl2Cpp + AADEHKBDJDL_JFDOOELFAOA_OFFSET))();
	}
};
