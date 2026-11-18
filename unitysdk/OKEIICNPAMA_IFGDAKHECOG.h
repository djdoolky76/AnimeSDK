#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_IFGDAKHECOG_BFFBDLNDADN_OFFSET UNITYSDK_OFFSET(0xFD8C940)
#define OKEIICNPAMA_IFGDAKHECOG_HCKHEJLFCGI_OFFSET UNITYSDK_OFFSET(0xFD8C950)
#define OKEIICNPAMA_IFGDAKHECOG__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8C930)

inline static constexpr unsigned int OKEIICNPAMA_IFGDAKHECOG_TypeDefinitionIndex = 87990;

class OKEIICNPAMA_IFGDAKHECOG : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_IFGDAKHECOG__CTOR_OFFSET))(this);
	}

	::System::Void BFFBDLNDADN(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_IFGDAKHECOG_BFFBDLNDADN_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void HCKHEJLFCGI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_IFGDAKHECOG_HCKHEJLFCGI_OFFSET))(this, PIIPCLCCOIG);
	}
};
