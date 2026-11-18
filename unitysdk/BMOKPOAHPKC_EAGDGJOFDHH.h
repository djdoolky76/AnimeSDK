#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
class BMOKPOAHPKC;

#define BMOKPOAHPKC_EAGDGJOFDHH_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0x18580060)
#define BMOKPOAHPKC_EAGDGJOFDHH__CTOR_OFFSET UNITYSDK_OFFSET(0x18580050)

inline static constexpr unsigned int BMOKPOAHPKC_EAGDGJOFDHH_TypeDefinitionIndex = 43165;

class BMOKPOAHPKC_EAGDGJOFDHH : public ::System::Object
{
public:
	::AFMMAIKKACF* AAOCANGHBDG; // 0x10
	::BMOKPOAHPKC* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOKPOAHPKC_EAGDGJOFDHH__CTOR_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOKPOAHPKC_EAGDGJOFDHH_MJMKFFANPBL_OFFSET))(this);
	}
};
