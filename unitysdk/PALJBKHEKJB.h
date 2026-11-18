#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PALJBKHEKJB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15FF9020)
#define PALJBKHEKJB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15FF8E20)
#define PALJBKHEKJB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15FF9460)
#define PALJBKHEKJB__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF92E0)

inline static constexpr unsigned int PALJBKHEKJB_TypeDefinitionIndex = 68718;

class PALJBKHEKJB : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* FONFDLOHLIP; // 0x18
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* EGINAPKOEMJ; // 0x30
	::CPABOPKIGAL* HMNPNEALHEH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PALJBKHEKJB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PALJBKHEKJB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PALJBKHEKJB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PALJBKHEKJB_GDEOPIBNOIN_OFFSET))(this);
	}
};
