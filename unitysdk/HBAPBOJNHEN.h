#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HBAPBOJNHEN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x146DB770)
#define HBAPBOJNHEN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x146DB630)
#define HBAPBOJNHEN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x146DBC70)
#define HBAPBOJNHEN__CTOR_OFFSET UNITYSDK_OFFSET(0x146DBB70)

inline static constexpr unsigned int HBAPBOJNHEN_TypeDefinitionIndex = 90902;

class HBAPBOJNHEN : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* HMNPNEALHEH; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAPBOJNHEN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAPBOJNHEN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HBAPBOJNHEN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAPBOJNHEN_GDEOPIBNOIN_OFFSET))(this);
	}
};
