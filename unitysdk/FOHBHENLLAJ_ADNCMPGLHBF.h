#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define FOHBHENLLAJ_ADNCMPGLHBF_HJENLGOPDDC_OFFSET UNITYSDK_OFFSET(0x15E7A1D0)
#define FOHBHENLLAJ_ADNCMPGLHBF__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7A0A0)

inline static constexpr unsigned int FOHBHENLLAJ_ADNCMPGLHBF_TypeDefinitionIndex = 59690;

class FOHBHENLLAJ_ADNCMPGLHBF : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHBHENLLAJ_ADNCMPGLHBF__CTOR_OFFSET))(this);
	}

	::System::Void HJENLGOPDDC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOHBHENLLAJ_ADNCMPGLHBF_HJENLGOPDDC_OFFSET))(this, PIIPCLCCOIG);
	}
};
