#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNONKDKJNIJ;
class MKFNBHDICNJ;
namespace System { class Action; }

#define MKFNBHDICNJ_MHMMADGADME_FAHCCABJNKJ_OFFSET UNITYSDK_OFFSET(0x1216D820)
#define MKFNBHDICNJ_MHMMADGADME_LKGMJPEEMPP_OFFSET UNITYSDK_OFFSET(0x1216D870)
#define MKFNBHDICNJ_MHMMADGADME__CTOR_OFFSET UNITYSDK_OFFSET(0x1216D810)

inline static constexpr unsigned int MKFNBHDICNJ_MHMMADGADME_TypeDefinitionIndex = 61343;

class MKFNBHDICNJ_MHMMADGADME : public ::System::Object
{
public:
	::System::Action* DKDBPEPKALE; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MHMMADGADME__CTOR_OFFSET))(this);
	}

	::System::Void FAHCCABJNKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MHMMADGADME_FAHCCABJNKJ_OFFSET))(this);
	}

	::System::Void LKGMJPEEMPP(::KNONKDKJNIJ* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::KNONKDKJNIJ*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MHMMADGADME_LKGMJPEEMPP_OFFSET))(this, LJBPECKCCEA);
	}
};
