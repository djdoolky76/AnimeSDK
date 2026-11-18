#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define CPELIJCLPJN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x193ECBF0)
#define CPELIJCLPJN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x193ECA40)
#define CPELIJCLPJN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x193ECFD0)
#define CPELIJCLPJN__CTOR_OFFSET UNITYSDK_OFFSET(0x193ECE90)

inline static constexpr unsigned int CPELIJCLPJN_TypeDefinitionIndex = 54686;

class CPELIJCLPJN : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* NKDAJLPHGAP; // 0x20
	::KCMIFNGABDC_1<::System::String*>* IGDPEAJMBMJ; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPELIJCLPJN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPELIJCLPJN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CPELIJCLPJN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPELIJCLPJN_GDEOPIBNOIN_OFFSET))(this);
	}
};
