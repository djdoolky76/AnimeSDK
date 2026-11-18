#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
class JFOBMBCMBIN_JFKCHEGCGHP;
namespace System { class Action; }

#define JFOBMBCMBIN_BMJGAPIIPCA_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x1C35DA40)
#define JFOBMBCMBIN_BMJGAPIIPCA_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1C35DD90)
#define JFOBMBCMBIN_BMJGAPIIPCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C35DA30)

inline static constexpr unsigned int JFOBMBCMBIN_BMJGAPIIPCA_TypeDefinitionIndex = 72483;

class JFOBMBCMBIN_BMJGAPIIPCA : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::HOCDHMEPPEG DJBBALOPPNE; // 0x18
	::HOCDHMEPPEG PNNKHPFLBEL; // 0x48
	::JFOBMBCMBIN_JFKCHEGCGHP* FGBNBFHOKAA; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOBMBCMBIN_BMJGAPIIPCA__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOBMBCMBIN_BMJGAPIIPCA_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + JFOBMBCMBIN_BMJGAPIIPCA_LIDNPLMPHAL_OFFSET))(this, PJMOJNFEHLF);
	}
};
