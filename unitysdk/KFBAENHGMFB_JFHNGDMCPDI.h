#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFBAENHGMFB_JFHNGDMCPDI_FNFOHPKHOAE_OFFSET UNITYSDK_OFFSET(0x17645740)
#define KFBAENHGMFB_JFHNGDMCPDI__CTOR_OFFSET UNITYSDK_OFFSET(0x17645730)

inline static constexpr unsigned int KFBAENHGMFB_JFHNGDMCPDI_TypeDefinitionIndex = 78591;

class KFBAENHGMFB_JFHNGDMCPDI : public ::System::Object
{
public:
	::System::Action* KJEGEDODKCE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_JFHNGDMCPDI__CTOR_OFFSET))(this);
	}

	::System::Void FNFOHPKHOAE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_JFHNGDMCPDI_FNFOHPKHOAE_OFFSET))(this, GLAOEHCGCFO);
	}
};
