#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JINHNIHFBHB;
class OBIJODGCLDA;

#define JINHNIHFBHB_HNLNNAFBNKA_AHJECFOJGCC_OFFSET UNITYSDK_OFFSET(0x1945E210)
#define JINHNIHFBHB_HNLNNAFBNKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1945E200)

inline static constexpr unsigned int JINHNIHFBHB_HNLNNAFBNKA_TypeDefinitionIndex = 40277;

class JINHNIHFBHB_HNLNNAFBNKA : public ::System::Object
{
public:
	::JINHNIHFBHB* KLHPEBKNIFB; // 0x10
	::System::UInt32 IODGGGPEKLF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINHNIHFBHB_HNLNNAFBNKA__CTOR_OFFSET))(this);
	}

	::System::Void AHJECFOJGCC(::OBIJODGCLDA* FLJONHJGNJC)
	{
		return ((::System::Void(*)(::PVOID, ::OBIJODGCLDA*))((::PBYTE)hIl2Cpp + JINHNIHFBHB_HNLNNAFBNKA_AHJECFOJGCC_OFFSET))(this, FLJONHJGNJC);
	}
};
