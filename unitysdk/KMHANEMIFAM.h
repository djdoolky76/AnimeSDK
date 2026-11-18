#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMHANEMIFAM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1F983410)
#define KMHANEMIFAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F983400)

inline static constexpr unsigned int KMHANEMIFAM_TypeDefinitionIndex = 95198;

class KMHANEMIFAM : public ::System::Object
{
public:
	::System::Int32 JHFKDGBCOBA; // 0x10
	::System::Single MDPPNMIPDMP; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHANEMIFAM__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHANEMIFAM_NPOLNFDBOOD_OFFSET))(this);
	}
};
