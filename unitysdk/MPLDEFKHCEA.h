#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MPLDEFKHCEA__CTOR_OFFSET UNITYSDK_OFFSET(0x19211C60)

inline static constexpr unsigned int MPLDEFKHCEA_TypeDefinitionIndex = 85973;

class MPLDEFKHCEA : public ::System::Object
{
public:
	::System::Int32 KLDFKELMKFH; // 0x10
	::System::Int32 PLDCFJALBEA; // 0x14

	::System::Void _ctor(::System::Int32 HCOKMJNBPHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MPLDEFKHCEA__CTOR_OFFSET))(this, HCOKMJNBPHI);
	}
};
