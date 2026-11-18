#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HDNNIIJFNBM;
class JINHNIHFBHB;
class OBIJODGCLDA;

#define JINHNIHFBHB_JGPFNIMHBCL_EFBPALIHICE_OFFSET UNITYSDK_OFFSET(0x17B285A0)
#define JINHNIHFBHB_JGPFNIMHBCL__CTOR_OFFSET UNITYSDK_OFFSET(0x17B28590)

inline static constexpr unsigned int JINHNIHFBHB_JGPFNIMHBCL_TypeDefinitionIndex = 40278;

class JINHNIHFBHB_JGPFNIMHBCL : public ::System::Object
{
public:
	::HDNNIIJFNBM* ECAAOCEGPEA; // 0x10
	::JINHNIHFBHB* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINHNIHFBHB_JGPFNIMHBCL__CTOR_OFFSET))(this);
	}

	::System::Void EFBPALIHICE(::OBIJODGCLDA* FLJONHJGNJC)
	{
		return ((::System::Void(*)(::PVOID, ::OBIJODGCLDA*))((::PBYTE)hIl2Cpp + JINHNIHFBHB_JGPFNIMHBCL_EFBPALIHICE_OFFSET))(this, FLJONHJGNJC);
	}
};
