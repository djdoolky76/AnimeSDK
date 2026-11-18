#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COFJBKJFLCG;
namespace MoleMole { class UIControlReference; }

#define FDBKLDNMNJK_FIABGBDPBME_GMPPDLAMAHL_OFFSET UNITYSDK_OFFSET(0x140E84F0)
#define FDBKLDNMNJK_FIABGBDPBME__CTOR_OFFSET UNITYSDK_OFFSET(0x140E84E0)

inline static constexpr unsigned int FDBKLDNMNJK_FIABGBDPBME_TypeDefinitionIndex = 85478;

class FDBKLDNMNJK_FIABGBDPBME : public ::System::Object
{
public:
	::COFJBKJFLCG* BMPAJKMNAAO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBKLDNMNJK_FIABGBDPBME__CTOR_OFFSET))(this);
	}

	::MoleMole::UIControlReference* GMPPDLAMAHL()
	{
		return ((::MoleMole::UIControlReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBKLDNMNJK_FIABGBDPBME_GMPPDLAMAHL_OFFSET))(this);
	}
};
