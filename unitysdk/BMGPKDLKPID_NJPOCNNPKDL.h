#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define BMGPKDLKPID_NJPOCNNPKDL_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x13983C10)
#define BMGPKDLKPID_NJPOCNNPKDL_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x13983B70)
#define BMGPKDLKPID_NJPOCNNPKDL__CTOR_OFFSET UNITYSDK_OFFSET(0x13983B60)

inline static constexpr unsigned int BMGPKDLKPID_NJPOCNNPKDL_TypeDefinitionIndex = 79152;

class BMGPKDLKPID_NJPOCNNPKDL : public ::System::Object
{
public:
	::HOCDHMEPPEG CAAFEGLOALC; // 0x10
	::HOCDHMEPPEG LLAMCIGLJNH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGPKDLKPID_NJPOCNNPKDL__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGPKDLKPID_NJPOCNNPKDL_LIDNPLMPHAL_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGPKDLKPID_NJPOCNNPKDL_AAHMACBDCPN_OFFSET))(this);
	}
};
