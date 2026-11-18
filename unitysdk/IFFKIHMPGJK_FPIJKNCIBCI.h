#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFFKIHMPGJK_EJBLJOIGOOJ;
class IPLAKIBOMCO;
class PJHKDJEGJOG;

#define IFFKIHMPGJK_FPIJKNCIBCI_ALDLOHMOKDL_OFFSET UNITYSDK_OFFSET(0x15EB34B0)
#define IFFKIHMPGJK_FPIJKNCIBCI__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB34A0)

inline static constexpr unsigned int IFFKIHMPGJK_FPIJKNCIBCI_TypeDefinitionIndex = 66916;

class IFFKIHMPGJK_FPIJKNCIBCI : public ::System::Object
{
public:
	::IFFKIHMPGJK_EJBLJOIGOOJ* FGBNBFHOKAA; // 0x10
	::PJHKDJEGJOG* IFJCBGADHFJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_FPIJKNCIBCI__CTOR_OFFSET))(this);
	}

	::System::Void ALDLOHMOKDL(::System::Boolean DOFCLPCLHOJ, ::IPLAKIBOMCO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::IPLAKIBOMCO*))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_FPIJKNCIBCI_ALDLOHMOKDL_OFFSET))(this, DOFCLPCLHOJ, GLAOEHCGCFO);
	}
};
