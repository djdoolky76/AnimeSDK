#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define CPMEKIGICIL_AGNMHDAHKKE_GOFHNLCDOAM_OFFSET UNITYSDK_OFFSET(0x123D7850)
#define CPMEKIGICIL_AGNMHDAHKKE__CTOR_OFFSET UNITYSDK_OFFSET(0x123D7840)

inline static constexpr unsigned int CPMEKIGICIL_AGNMHDAHKKE_TypeDefinitionIndex = 83479;

class CPMEKIGICIL_AGNMHDAHKKE : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMEKIGICIL_AGNMHDAHKKE__CTOR_OFFSET))(this);
	}

	::System::Void GOFHNLCDOAM(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CPMEKIGICIL_AGNMHDAHKKE_GOFHNLCDOAM_OFFSET))(this, PIIPCLCCOIG);
	}
};
