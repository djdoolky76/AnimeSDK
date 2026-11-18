#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKCEGKCALIK;
namespace System { class String; }

#define CKCEGKCALIK_NAIONNFJEML_FBJPPNINDAN_OFFSET UNITYSDK_OFFSET(0x193E21D0)
#define CKCEGKCALIK_NAIONNFJEML_JEPGOEOCPDC_OFFSET UNITYSDK_OFFSET(0x193E2140)
#define CKCEGKCALIK_NAIONNFJEML__CTOR_OFFSET UNITYSDK_OFFSET(0x193E2130)

inline static constexpr unsigned int CKCEGKCALIK_NAIONNFJEML_TypeDefinitionIndex = 84278;

class CKCEGKCALIK_NAIONNFJEML : public ::System::Object
{
public:
	::CKCEGKCALIK* KLHPEBKNIFB; // 0x10
	::System::Int32 HBHJAMLMMKK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCEGKCALIK_NAIONNFJEML__CTOR_OFFSET))(this);
	}

	::System::Void JEPGOEOCPDC(::System::String* ACNACDPLNFJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CKCEGKCALIK_NAIONNFJEML_JEPGOEOCPDC_OFFSET))(this, ACNACDPLNFJ);
	}

	::System::Void FBJPPNINDAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCEGKCALIK_NAIONNFJEML_FBJPPNINDAN_OFFSET))(this);
	}
};
