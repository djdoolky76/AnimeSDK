#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define CPMEKIGICIL_ICLHBIBDKGC_FPIJBDAKKCH_OFFSET UNITYSDK_OFFSET(0x19A24F20)
#define CPMEKIGICIL_ICLHBIBDKGC__CTOR_OFFSET UNITYSDK_OFFSET(0x19A24F10)

inline static constexpr unsigned int CPMEKIGICIL_ICLHBIBDKGC_TypeDefinitionIndex = 83474;

class CPMEKIGICIL_ICLHBIBDKGC : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMEKIGICIL_ICLHBIBDKGC__CTOR_OFFSET))(this);
	}

	::System::Void FPIJBDAKKCH(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CPMEKIGICIL_ICLHBIBDKGC_FPIJBDAKKCH_OFFSET))(this, PIIPCLCCOIG);
	}
};
