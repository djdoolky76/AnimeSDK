#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/HKEOGIDPIKB.h"

class CMMNODHNGKC;
class OKMKMKDHONP;
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LJHFMILANJA_1;

#define CCFBBABBEPA_ECFNPNCKODL_OFFSET UNITYSDK_OFFSET(0x153151D0)
#define CCFBBABBEPA_FPLHLGPIIMP_OFFSET UNITYSDK_OFFSET(0x153151C0)
#define CCFBBABBEPA_IACHFFLKHBO_OFFSET UNITYSDK_OFFSET(0x15315AB0)
#define CCFBBABBEPA_IEEEFGLBEAH_OFFSET UNITYSDK_OFFSET(0x15315AC0)
#define CCFBBABBEPA_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15315050)
#define CCFBBABBEPA__CTOR_OFFSET UNITYSDK_OFFSET(0x153150D0)

inline static constexpr unsigned int CCFBBABBEPA_TypeDefinitionIndex = 64789;

class CCFBBABBEPA : public ::JJEJBPGJPJN
{
public:
	::CMMNODHNGKC* OPOLMJLMHCD; // 0x88
	::LJHFMILANJA_1<::System::Single>* KEMNJCBKNPL; // 0x90
	::System::Single IJJJCLHKIJG; // 0x98
	::System::Single JMMPIDLEEGN; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFBBABBEPA__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFBBABBEPA_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Single FPLHLGPIIMP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFBBABBEPA_FPLHLGPIIMP_OFFSET))(this);
	}

	::System::Void ECFNPNCKODL(::HKEOGIDPIKB LJBPECKCCEA, ::OKMKMKDHONP* GPHJEHNONJA)
	{
		return ((::System::Void(*)(::PVOID, ::HKEOGIDPIKB, ::OKMKMKDHONP*))((::PBYTE)hIl2Cpp + CCFBBABBEPA_ECFNPNCKODL_OFFSET))(this, LJBPECKCCEA, GPHJEHNONJA);
	}

	::JIOLFCAGOFH_1<::System::Single>* IACHFFLKHBO()
	{
		return ((::JIOLFCAGOFH_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFBBABBEPA_IACHFFLKHBO_OFFSET))(this);
	}

	::System::Single IEEEFGLBEAH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFBBABBEPA_IEEEFGLBEAH_OFFSET))(this);
	}
};
