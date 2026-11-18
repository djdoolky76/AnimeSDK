#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define DENNLEKKOEN_JDNHINIPBPP_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x19A3ACB0)
#define DENNLEKKOEN_JDNHINIPBPP_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x19A3AD50)
#define DENNLEKKOEN_JDNHINIPBPP_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x19A3ADF0)
#define DENNLEKKOEN_JDNHINIPBPP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3ACA0)

inline static constexpr unsigned int DENNLEKKOEN_JDNHINIPBPP_TypeDefinitionIndex = 85364;

class DENNLEKKOEN_JDNHINIPBPP : public ::System::Object
{
public:
	::HOCDHMEPPEG IDBMCHCEHIO; // 0x10
	::HOCDHMEPPEG AJHFDMLOGIF; // 0x40
	::HOCDHMEPPEG DOHGKLMAIJA; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENNLEKKOEN_JDNHINIPBPP__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENNLEKKOEN_JDNHINIPBPP_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void HOFIFAEOLBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENNLEKKOEN_JDNHINIPBPP_HOFIFAEOLBM_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENNLEKKOEN_JDNHINIPBPP_LIDNPLMPHAL_OFFSET))(this);
	}
};
