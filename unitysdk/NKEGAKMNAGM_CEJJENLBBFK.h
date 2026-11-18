#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGHNKKOFJBA.h"
#include "unitysdk/System/Object.h"

class NKEGAKMNAGM;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define NKEGAKMNAGM_CEJJENLBBFK_OHGENOLKCCF_OFFSET UNITYSDK_OFFSET(0x10D7D120)
#define NKEGAKMNAGM_CEJJENLBBFK__CTOR_OFFSET UNITYSDK_OFFSET(0x10D7D110)

inline static constexpr unsigned int NKEGAKMNAGM_CEJJENLBBFK_TypeDefinitionIndex = 82160;

class NKEGAKMNAGM_CEJJENLBBFK : public ::System::Object
{
public:
	::System::String* OIAAGKHNNEP; // 0x10
	::System::String* JBIOBAPDJNL; // 0x18
	::CGHNKKOFJBA HICJKOGKLOK; // 0x20
	::NKEGAKMNAGM* KLHPEBKNIFB; // 0x40
	::MoleMole::Battle::Entity* PLCBINNKMAM; // 0x48
	::System::Int32 MJGHICEDDMB; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_CEJJENLBBFK__CTOR_OFFSET))(this);
	}

	::System::Boolean OHGENOLKCCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_CEJJENLBBFK_OHGENOLKCCF_OFFSET))(this);
	}
};
