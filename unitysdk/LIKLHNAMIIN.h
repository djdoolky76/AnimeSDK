#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LIKLHNAMIIN_AFNKMJDPILJ_OFFSET UNITYSDK_OFFSET(0x14DB4860)
#define LIKLHNAMIIN_BGFGKJJBEMB_OFFSET UNITYSDK_OFFSET(0x14DB48A0)
#define LIKLHNAMIIN_JFBOJALLMNF_OFFSET UNITYSDK_OFFSET(0x14DB48F0)
#define LIKLHNAMIIN__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB4850)

inline static constexpr unsigned int LIKLHNAMIIN_TypeDefinitionIndex = 79928;

class LIKLHNAMIIN : public ::System::Object
{
public:
	::System::Action* GJPMNINGLDO; // 0x10
	::System::Single EEODALLOKMF; // 0x18
	::System::Int32 NJEMNLDCHNN; // 0x1C
	::System::Boolean CGFLLPOCDJM; // 0x20
	::System::Boolean OLBGLDIJBMB; // 0x21
	::System::Byte _padding0[0x2];
	::System::Single EKGMLLJEJHM; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKLHNAMIIN__CTOR_OFFSET))(this);
	}

	::System::Void AFNKMJDPILJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKLHNAMIIN_AFNKMJDPILJ_OFFSET))(this);
	}

	::System::Void BGFGKJJBEMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKLHNAMIIN_BGFGKJJBEMB_OFFSET))(this);
	}

	::System::Boolean JFBOJALLMNF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKLHNAMIIN_JFBOJALLMNF_OFFSET))(this);
	}
};
