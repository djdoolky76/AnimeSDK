#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FLDCPKJAMCH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10EBED00)
#define FLDCPKJAMCH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10EBEA40)
#define FLDCPKJAMCH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10EBF1E0)
#define FLDCPKJAMCH__CTOR_OFFSET UNITYSDK_OFFSET(0x10EBEFA0)

inline static constexpr unsigned int FLDCPKJAMCH_TypeDefinitionIndex = 66025;

class FLDCPKJAMCH : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* KBDMJHDFLJM; // 0x20
	::CPABOPKIGAL* PLEJMLIFFHG; // 0x28
	::KCMIFNGABDC_1<::System::String*>* FNFDOGNGLGN; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* GAKIDDIKBLD; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* LPKDKHEGFJF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDCPKJAMCH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDCPKJAMCH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FLDCPKJAMCH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDCPKJAMCH_GDEOPIBNOIN_OFFSET))(this);
	}
};
