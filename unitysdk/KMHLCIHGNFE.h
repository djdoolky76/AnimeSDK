#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define KMHLCIHGNFE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17726AB0)
#define KMHLCIHGNFE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17726970)
#define KMHLCIHGNFE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17726C00)
#define KMHLCIHGNFE__CTOR_OFFSET UNITYSDK_OFFSET(0x17726B00)

inline static constexpr unsigned int KMHLCIHGNFE_TypeDefinitionIndex = 82078;

class KMHLCIHGNFE : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x20
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHLCIHGNFE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHLCIHGNFE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KMHLCIHGNFE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHLCIHGNFE_GDEOPIBNOIN_OFFSET))(this);
	}
};
