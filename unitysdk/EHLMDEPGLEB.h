#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define EHLMDEPGLEB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1414FDC0)
#define EHLMDEPGLEB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1414FC10)
#define EHLMDEPGLEB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14150170)
#define EHLMDEPGLEB__CTOR_OFFSET UNITYSDK_OFFSET(0x14150030)

inline static constexpr unsigned int EHLMDEPGLEB_TypeDefinitionIndex = 38522;

class EHLMDEPGLEB : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::System::String*>* LMNHHJOGDPL; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::AAMKEDEDHPD_1<::System::String*>* MKHOIFNMHBF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMDEPGLEB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMDEPGLEB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EHLMDEPGLEB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLMDEPGLEB_GDEOPIBNOIN_OFFSET))(this);
	}
};
