#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define DGJADDDHBFD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A1E0150)
#define DGJADDDHBFD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A1DFE90)
#define DGJADDDHBFD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A1E0630)
#define DGJADDDHBFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E0430)

inline static constexpr unsigned int DGJADDDHBFD_TypeDefinitionIndex = 57626;

class DGJADDDHBFD : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* DFEKHPJCABP; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* PIMEEAOAFOP; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* FKMFDLNMAJJ; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x38
	::KCMIFNGABDC_1<::System::Single>* KOEAOGNJNCO; // 0x40
	::KCMIFNGABDC_1<::System::Boolean>* KDCFMICAMPI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJADDDHBFD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJADDDHBFD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DGJADDDHBFD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJADDDHBFD_GDEOPIBNOIN_OFFSET))(this);
	}
};
