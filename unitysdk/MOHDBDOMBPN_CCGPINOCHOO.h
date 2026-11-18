#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOHDBDOMBPN_CCGPINOCHOO_EHLPIBNFDBC_OFFSET UNITYSDK_OFFSET(0x131A7E80)
#define MOHDBDOMBPN_CCGPINOCHOO_OHGCMBEHCFP_OFFSET UNITYSDK_OFFSET(0x131A8070)
#define MOHDBDOMBPN_CCGPINOCHOO__CTOR_OFFSET UNITYSDK_OFFSET(0x131A7E70)

inline static constexpr unsigned int MOHDBDOMBPN_CCGPINOCHOO_TypeDefinitionIndex = 69268;

class MOHDBDOMBPN_CCGPINOCHOO : public ::System::Object
{
public:
	::System::Int32 AMCNCFDFMEM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHDBDOMBPN_CCGPINOCHOO__CTOR_OFFSET))(this);
	}

	::System::Void EHLPIBNFDBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHDBDOMBPN_CCGPINOCHOO_EHLPIBNFDBC_OFFSET))(this);
	}

	::System::Void OHGCMBEHCFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHDBDOMBPN_CCGPINOCHOO_OHGCMBEHCFP_OFFSET))(this);
	}
};
