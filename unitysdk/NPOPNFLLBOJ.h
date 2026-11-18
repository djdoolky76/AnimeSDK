#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NPOPNFLLBOJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15FB73E0)
#define NPOPNFLLBOJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15FB71E0)
#define NPOPNFLLBOJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15FB7850)
#define NPOPNFLLBOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB76D0)

inline static constexpr unsigned int NPOPNFLLBOJ_TypeDefinitionIndex = 50668;

class NPOPNFLLBOJ : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* PLEMDIKFNOL; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::KCMIFNGABDC_1<::System::String*>* BFEAHNFOKLG; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* KKJKPJEGKJC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOPNFLLBOJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOPNFLLBOJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NPOPNFLLBOJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOPNFLLBOJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
