#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define HBAMFKKEGJE_KFJJNBCOHMH_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x14D0B2D0)
#define HBAMFKKEGJE_KFJJNBCOHMH_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0x14D0B190)
#define HBAMFKKEGJE_KFJJNBCOHMH_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x14D0B230)
#define HBAMFKKEGJE_KFJJNBCOHMH_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x14D0B010)
#define HBAMFKKEGJE_KFJJNBCOHMH__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0B000)

inline static constexpr unsigned int HBAMFKKEGJE_KFJJNBCOHMH_TypeDefinitionIndex = 66981;

class HBAMFKKEGJE_KFJJNBCOHMH : public ::System::Object
{
public:
	::HOCDHMEPPEG IDBMCHCEHIO; // 0x10
	::System::Action* FFMGICPLKFB; // 0x40
	::HOCDHMEPPEG DOHGKLMAIJA; // 0x48
	::HOCDHMEPPEG AJHFDMLOGIF; // 0x78
	::System::Action* KAKAEMACNPB; // 0xA8
	::System::Int32 KLJNHMGMDNP; // 0xB0
	::System::Boolean LLCDMKLMHFK; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAMFKKEGJE_KFJJNBCOHMH__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAMFKKEGJE_KFJJNBCOHMH_LIDNPLMPHAL_OFFSET))(this);
	}

	::System::Void CKEMNJODHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAMFKKEGJE_KFJJNBCOHMH_CKEMNJODHCH_OFFSET))(this);
	}

	::System::Void HOFIFAEOLBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAMFKKEGJE_KFJJNBCOHMH_HOFIFAEOLBM_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAMFKKEGJE_KFJJNBCOHMH_AAHMACBDCPN_OFFSET))(this);
	}
};
