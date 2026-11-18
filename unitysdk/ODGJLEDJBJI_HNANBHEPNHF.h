#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODGJLEDJBJI;
namespace System { class Action; }

#define ODGJLEDJBJI_HNANBHEPNHF_DKABLGGHKGE_OFFSET UNITYSDK_OFFSET(0x14F6A210)
#define ODGJLEDJBJI_HNANBHEPNHF_IDJDHAMMBFA_OFFSET UNITYSDK_OFFSET(0x14F69F80)
#define ODGJLEDJBJI_HNANBHEPNHF__CTOR_OFFSET UNITYSDK_OFFSET(0x14F69F70)

inline static constexpr unsigned int ODGJLEDJBJI_HNANBHEPNHF_TypeDefinitionIndex = 73483;

class ODGJLEDJBJI_HNANBHEPNHF : public ::System::Object
{
public:
	::System::Action* NKGCDDCMBCF; // 0x10
	::ODGJLEDJBJI* KLHPEBKNIFB; // 0x18
	::System::Action* POCANNAFFOA; // 0x20
	::System::Int32 KLNGGAHHGLI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_HNANBHEPNHF__CTOR_OFFSET))(this);
	}

	::System::Boolean IDJDHAMMBFA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_HNANBHEPNHF_IDJDHAMMBFA_OFFSET))(this);
	}

	::System::Void DKABLGGHKGE(::System::Int32 DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_HNANBHEPNHF_DKABLGGHKGE_OFFSET))(this, DJCNCELJPOM);
	}
};
