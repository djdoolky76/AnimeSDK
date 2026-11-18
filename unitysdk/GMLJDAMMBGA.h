#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define GMLJDAMMBGA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17AD52C0)
#define GMLJDAMMBGA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17AD5110)
#define GMLJDAMMBGA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17AD55D0)
#define GMLJDAMMBGA__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD5490)

inline static constexpr unsigned int GMLJDAMMBGA_TypeDefinitionIndex = 79313;

class GMLJDAMMBGA : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* HHMLLBAEDJF; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLJDAMMBGA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLJDAMMBGA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GMLJDAMMBGA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLJDAMMBGA_GDEOPIBNOIN_OFFSET))(this);
	}
};
