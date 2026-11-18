#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;

#define OFPIKNEOIBF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11B27080)
#define OFPIKNEOIBF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11B26FB0)
#define OFPIKNEOIBF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11B27260)
#define OFPIKNEOIBF__CTOR_OFFSET UNITYSDK_OFFSET(0x11B271C0)

inline static constexpr unsigned int OFPIKNEOIBF_TypeDefinitionIndex = 83804;

class OFPIKNEOIBF : public ::CGJEMKCKIJG
{
public:
	::MKBBPOFGLOF* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPIKNEOIBF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPIKNEOIBF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OFPIKNEOIBF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPIKNEOIBF_GDEOPIBNOIN_OFFSET))(this);
	}
};
