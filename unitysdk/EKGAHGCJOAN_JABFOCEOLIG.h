#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;
class NFIGGEGJDFA;
namespace System { class Action; }

#define EKGAHGCJOAN_JABFOCEOLIG_HACIMLPCDKE_OFFSET UNITYSDK_OFFSET(0x11A98570)
#define EKGAHGCJOAN_JABFOCEOLIG_PPHCBMBJBAP_OFFSET UNITYSDK_OFFSET(0x11A985A0)
#define EKGAHGCJOAN_JABFOCEOLIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11A98560)

inline static constexpr unsigned int EKGAHGCJOAN_JABFOCEOLIG_TypeDefinitionIndex = 51194;

class EKGAHGCJOAN_JABFOCEOLIG : public ::System::Object
{
public:
	::EKGAHGCJOAN* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_JABFOCEOLIG__CTOR_OFFSET))(this);
	}

	::System::Void HACIMLPCDKE(::NFIGGEGJDFA* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::NFIGGEGJDFA*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_JABFOCEOLIG_HACIMLPCDKE_OFFSET))(this, BLLNHDIDKPA);
	}

	::System::Void PPHCBMBJBAP(::NFIGGEGJDFA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::NFIGGEGJDFA*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_JABFOCEOLIG_PPHCBMBJBAP_OFFSET))(this, GLAOEHCGCFO);
	}
};
