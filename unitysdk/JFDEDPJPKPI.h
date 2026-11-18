#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define JFDEDPJPKPI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x198A4F30)
#define JFDEDPJPKPI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x198A4D80)
#define JFDEDPJPKPI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x198A5580)
#define JFDEDPJPKPI__CTOR_OFFSET UNITYSDK_OFFSET(0x198A5440)

inline static constexpr unsigned int JFDEDPJPKPI_TypeDefinitionIndex = 74826;

class JFDEDPJPKPI : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* FCOCIKOKKNK; // 0x20
	::CPABOPKIGAL* ECPONKOKFIO; // 0x28
	::AAMKEDEDHPD_1<::System::Single>* IGJFOICPLGP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDEDPJPKPI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDEDPJPKPI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JFDEDPJPKPI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDEDPJPKPI_GDEOPIBNOIN_OFFSET))(this);
	}
};
