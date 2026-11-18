#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define CGEEKOFFFEJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19A01160)
#define CGEEKOFFFEJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19A01020)
#define CGEEKOFFFEJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19A01400)
#define CGEEKOFFFEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19A01300)

inline static constexpr unsigned int CGEEKOFFFEJ_TypeDefinitionIndex = 91562;

class CGEEKOFFFEJ : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* DOINPIMIPNM; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEEKOFFFEJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEEKOFFFEJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CGEEKOFFFEJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEEKOFFFEJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
