#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define CONICNLILKM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19A243B0)
#define CONICNLILKM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19A242E0)
#define CONICNLILKM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19A24690)
#define CONICNLILKM__CTOR_OFFSET UNITYSDK_OFFSET(0x19A245F0)

inline static constexpr unsigned int CONICNLILKM_TypeDefinitionIndex = 62582;

class CONICNLILKM : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONICNLILKM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONICNLILKM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CONICNLILKM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONICNLILKM_GDEOPIBNOIN_OFFSET))(this);
	}
};
