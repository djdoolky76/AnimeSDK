#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

class LGINJIKKBJA;
namespace UnityEngine { class Transform; }

#define NPJOEHIIHAL_PGKCODFJDME_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0xE129260)
#define NPJOEHIIHAL_PGKCODFJDME__CTOR_OFFSET UNITYSDK_OFFSET(0xE1294A0)

inline static constexpr unsigned int NPJOEHIIHAL_PGKCODFJDME_TypeDefinitionIndex = 59774;

class NPJOEHIIHAL_PGKCODFJDME : public ::PIOMHDMPINF
{
public:
	::LGINJIKKBJA* EDKBKGOOHKM; // 0x10
	::UnityEngine::Transform* EMECLBFPLHD; // 0x18
	::UnityEngine::Transform* AAIOLNHONOI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJOEHIIHAL_PGKCODFJDME__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJOEHIIHAL_PGKCODFJDME_LBJEOHBBBPN_OFFSET))(this);
	}
};
