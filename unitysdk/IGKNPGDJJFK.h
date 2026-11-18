#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define IGKNPGDJJFK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x153A8D20)
#define IGKNPGDJJFK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x153A8B20)
#define IGKNPGDJJFK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x153A91C0)
#define IGKNPGDJJFK__CTOR_OFFSET UNITYSDK_OFFSET(0x153A9040)

inline static constexpr unsigned int IGKNPGDJJFK_TypeDefinitionIndex = 42402;

class IGKNPGDJJFK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* FNFDOGNGLGN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* KBDMJHDFLJM; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* GHIOJLMLNDD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNPGDJJFK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNPGDJJFK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IGKNPGDJJFK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNPGDJJFK_GDEOPIBNOIN_OFFSET))(this);
	}
};
