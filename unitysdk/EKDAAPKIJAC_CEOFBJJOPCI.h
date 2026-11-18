#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

class LGINJIKKBJA;
namespace UnityEngine { class GameObject; }

#define EKDAAPKIJAC_CEOFBJJOPCI_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x14171F90)
#define EKDAAPKIJAC_CEOFBJJOPCI__CTOR_OFFSET UNITYSDK_OFFSET(0x14171FE0)

inline static constexpr unsigned int EKDAAPKIJAC_CEOFBJJOPCI_TypeDefinitionIndex = 63839;

class EKDAAPKIJAC_CEOFBJJOPCI : public ::PIOMHDMPINF
{
public:
	::UnityEngine::GameObject* BENDFFBLBGA; // 0x10
	::LGINJIKKBJA* DMEKMIJMPDP; // 0x18
	::UnityEngine::GameObject* IAKIMCNBNFM; // 0x20
	::LGINJIKKBJA* NHMFMAGADFM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDAAPKIJAC_CEOFBJJOPCI__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDAAPKIJAC_CEOFBJJOPCI_LBJEOHBBBPN_OFFSET))(this);
	}
};
