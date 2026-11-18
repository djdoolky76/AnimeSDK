#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define EHIGOBDGCCH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x172320C0)
#define EHIGOBDGCCH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17231EC0)
#define EHIGOBDGCCH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x172322E0)
#define EHIGOBDGCCH__CTOR_OFFSET UNITYSDK_OFFSET(0x17232110)

inline static constexpr unsigned int EHIGOBDGCCH_TypeDefinitionIndex = 87816;

class EHIGOBDGCCH : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x20
	::CPABOPKIGAL* DGLPCINAMAC; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* HHGILNNMNAK; // 0x30
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIGOBDGCCH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIGOBDGCCH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EHIGOBDGCCH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIGOBDGCCH_GDEOPIBNOIN_OFFSET))(this);
	}
};
