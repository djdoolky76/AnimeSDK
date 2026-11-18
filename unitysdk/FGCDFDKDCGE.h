#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define FGCDFDKDCGE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10F67590)
#define FGCDFDKDCGE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10F674C0)
#define FGCDFDKDCGE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10F67760)
#define FGCDFDKDCGE__CTOR_OFFSET UNITYSDK_OFFSET(0x10F676C0)

inline static constexpr unsigned int FGCDFDKDCGE_TypeDefinitionIndex = 57826;

class FGCDFDKDCGE : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCDFDKDCGE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCDFDKDCGE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FGCDFDKDCGE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCDFDKDCGE_GDEOPIBNOIN_OFFSET))(this);
	}
};
