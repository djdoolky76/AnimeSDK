#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALGFLKFNMPF;
class BIJIGJPHCED;
class EMADFJAKIBG;
namespace System { class Action; }

#define ALGFLKFNMPF_JEMCPBMPFKO_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x135F5FE0)
#define ALGFLKFNMPF_JEMCPBMPFKO_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x135F5EA0)
#define ALGFLKFNMPF_JEMCPBMPFKO_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x135F5F00)
#define ALGFLKFNMPF_JEMCPBMPFKO__CTOR_OFFSET UNITYSDK_OFFSET(0x135F5E90)

inline static constexpr unsigned int ALGFLKFNMPF_JEMCPBMPFKO_TypeDefinitionIndex = 41529;

class ALGFLKFNMPF_JEMCPBMPFKO : public ::System::Object
{
public:
	::BIJIGJPHCED* FKMHMOELCIO; // 0x10
	::System::Action* FFMGICPLKFB; // 0x18
	::ALGFLKFNMPF* KLHPEBKNIFB; // 0x20
	::System::Action* DLMJCFBENGB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGFLKFNMPF_JEMCPBMPFKO__CTOR_OFFSET))(this);
	}

	::System::Void HOFIFAEOLBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGFLKFNMPF_JEMCPBMPFKO_HOFIFAEOLBM_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + ALGFLKFNMPF_JEMCPBMPFKO_LIDNPLMPHAL_OFFSET))(this, PJMOJNFEHLF);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGFLKFNMPF_JEMCPBMPFKO_AAHMACBDCPN_OFFSET))(this);
	}
};
