#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/System/Object.h"

class IOOIHHOJOPI;

#define LPMMOAHPILF_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x18517900)

inline static constexpr unsigned int LPMMOAHPILF_TypeDefinitionIndex = 92088;

class LPMMOAHPILF : public ::System::Object
{
public:
	static ::IOOIHHOJOPI* COKNIICCODC(::ICEBNIECGBK IOKOLJDCKPN)
	{
		return ((::IOOIHHOJOPI*(*)(::ICEBNIECGBK))((::PBYTE)hIl2Cpp + LPMMOAHPILF_COKNIICCODC_OFFSET))(IOKOLJDCKPN);
	}
};
