#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNPDKHBMJOA;
class EACCOEMPDFK_DEMNPAALIGD;

#define EACCOEMPDFK_NOJOIEJIOAI_ABHEGJMLOJJ_OFFSET UNITYSDK_OFFSET(0x1F44E860)
#define EACCOEMPDFK_NOJOIEJIOAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1F44E850)

inline static constexpr unsigned int EACCOEMPDFK_NOJOIEJIOAI_TypeDefinitionIndex = 96486;

class EACCOEMPDFK_NOJOIEJIOAI : public ::System::Object
{
public:
	::EACCOEMPDFK_DEMNPAALIGD* FGBNBFHOKAA; // 0x10
	::BNPDKHBMJOA* KAMEODOJPHC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOEMPDFK_NOJOIEJIOAI__CTOR_OFFSET))(this);
	}

	::System::Void ABHEGJMLOJJ(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EACCOEMPDFK_NOJOIEJIOAI_ABHEGJMLOJJ_OFFSET))(this, BKLGNCBNEGM);
	}
};
