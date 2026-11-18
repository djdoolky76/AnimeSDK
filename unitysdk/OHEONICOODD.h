#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMFPGIGNEPJ.h"
#include "unitysdk/MoleMole/DisplayCase/DisplayBaseTransformData.h"
#include "unitysdk/System/Object.h"

class HNLPBPGMJMF;
class HNPJNICKLOJ;

#define OHEONICOODD_BPOALFNPKKE_OFFSET UNITYSDK_OFFSET(0xE14F6D0)
#define OHEONICOODD_ICANOAOBGOG_OFFSET UNITYSDK_OFFSET(0xE14F5B0)
#define OHEONICOODD_MNGHBPNCMPK_OFFSET UNITYSDK_OFFSET(0xE14F640)
#define OHEONICOODD__CTOR_OFFSET UNITYSDK_OFFSET(0xE14F780)

inline static constexpr unsigned int OHEONICOODD_TypeDefinitionIndex = 45790;

class OHEONICOODD : public ::System::Object
{
public:
	::HNLPBPGMJMF* IJLGPDGFGGN; // 0x10
	::MoleMole::DisplayCase::DisplayBaseTransformData NODHMGLFGCL; // 0x18
	::LMFPGIGNEPJ KKMENMCMMBN; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEONICOODD__CTOR_OFFSET))(this);
	}

	::System::Void ICANOAOBGOG(::HNPJNICKLOJ* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::HNPJNICKLOJ*))((::PBYTE)hIl2Cpp + OHEONICOODD_ICANOAOBGOG_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Void MNGHBPNCMPK(::HNPJNICKLOJ* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::HNPJNICKLOJ*))((::PBYTE)hIl2Cpp + OHEONICOODD_MNGHBPNCMPK_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Boolean BPOALFNPKKE(::HNPJNICKLOJ* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::HNPJNICKLOJ*))((::PBYTE)hIl2Cpp + OHEONICOODD_BPOALFNPKKE_OFFSET))(this, IPMMCGDMODG);
	}
};
