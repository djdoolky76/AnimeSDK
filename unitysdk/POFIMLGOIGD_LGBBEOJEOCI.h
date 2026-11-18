#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADGJAIODIMG;
class PKDEEDPGBOD;
class POFIMLGOIGD;
namespace System { template <typename T1, typename T2> class Action_2; }

#define POFIMLGOIGD_LGBBEOJEOCI_JPHDLPNPNKH_OFFSET UNITYSDK_OFFSET(0x1A805120)
#define POFIMLGOIGD_LGBBEOJEOCI_LCJFIKPGJOJ_OFFSET UNITYSDK_OFFSET(0x1A8050D0)
#define POFIMLGOIGD_LGBBEOJEOCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8050C0)

inline static constexpr unsigned int POFIMLGOIGD_LGBBEOJEOCI_TypeDefinitionIndex = 57469;

class POFIMLGOIGD_LGBBEOJEOCI : public ::System::Object
{
public:
	::POFIMLGOIGD* KLHPEBKNIFB; // 0x10
	::System::Action_2<::System::Boolean, ::PKDEEDPGBOD*>* PABLEDCGDGM; // 0x18
	::System::Int32 KNJMINIPHLB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_LGBBEOJEOCI__CTOR_OFFSET))(this);
	}

	::System::Void LCJFIKPGJOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_LGBBEOJEOCI_LCJFIKPGJOJ_OFFSET))(this);
	}

	::System::Void JPHDLPNPNKH(::ADGJAIODIMG* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::ADGJAIODIMG*))((::PBYTE)hIl2Cpp + POFIMLGOIGD_LGBBEOJEOCI_JPHDLPNPNKH_OFFSET))(this, GLAOEHCGCFO);
	}
};
