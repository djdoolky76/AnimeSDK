#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class EHLHJNBELDJ;

#define NEMGKAKOLMB_HNLGLOHMEAO_OFFSET UNITYSDK_OFFSET(0x10D723B0)
#define NEMGKAKOLMB_ILPKFBDGMAM_OFFSET UNITYSDK_OFFSET(0x10D72360)
#define NEMGKAKOLMB__CTOR_OFFSET UNITYSDK_OFFSET(0x10D72400)

inline static constexpr unsigned int NEMGKAKOLMB_TypeDefinitionIndex = 84878;

class NEMGKAKOLMB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMGKAKOLMB__CTOR_OFFSET))(this);
	}

	::System::Void ILPKFBDGMAM(::EHLHJNBELDJ* IHADLMEIDDP)
	{
		return ((::System::Void(*)(::PVOID, ::EHLHJNBELDJ*))((::PBYTE)hIl2Cpp + NEMGKAKOLMB_ILPKFBDGMAM_OFFSET))(this, IHADLMEIDDP);
	}

	::System::Void HNLGLOHMEAO(::EHLHJNBELDJ* IHADLMEIDDP, ::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::EHLHJNBELDJ*, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + NEMGKAKOLMB_HNLGLOHMEAO_OFFSET))(this, IHADLMEIDDP, LADPIPOMBJM);
	}
};
