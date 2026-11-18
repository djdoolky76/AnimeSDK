#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define PBBONJJAJAJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x172F0CE0)
#define PBBONJJAJAJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x172F0C10)
#define PBBONJJAJAJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x172F0E50)
#define PBBONJJAJAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x172F0DB0)

inline static constexpr unsigned int PBBONJJAJAJ_TypeDefinitionIndex = 67312;

class PBBONJJAJAJ : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBONJJAJAJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBONJJAJAJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PBBONJJAJAJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBONJJAJAJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
