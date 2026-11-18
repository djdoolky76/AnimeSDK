#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define HOJLBLJDBGJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xEA07210)
#define HOJLBLJDBGJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xEA07060)
#define HOJLBLJDBGJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xEA07A20)
#define HOJLBLJDBGJ__CTOR_OFFSET UNITYSDK_OFFSET(0xEA078E0)

inline static constexpr unsigned int HOJLBLJDBGJ_TypeDefinitionIndex = 78183;

class HOJLBLJDBGJ : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* ILNIIJKGEFP; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJLBLJDBGJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJLBLJDBGJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HOJLBLJDBGJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJLBLJDBGJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
