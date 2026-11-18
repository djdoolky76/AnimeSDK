#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define FEAEBOBIEBG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1428BF00)
#define FEAEBOBIEBG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1428BD00)
#define FEAEBOBIEBG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1428C220)
#define FEAEBOBIEBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1428C0A0)

inline static constexpr unsigned int FEAEBOBIEBG_TypeDefinitionIndex = 84896;

class FEAEBOBIEBG : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* DGDJHGBDBBK; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* JAHCIMEOCLH; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* GJLIDOPPCJA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAEBOBIEBG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAEBOBIEBG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FEAEBOBIEBG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAEBOBIEBG_GDEOPIBNOIN_OFFSET))(this);
	}
};
