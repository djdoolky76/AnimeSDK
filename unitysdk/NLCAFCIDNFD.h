#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define NLCAFCIDNFD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1315EDC0)
#define NLCAFCIDNFD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1315EC10)
#define NLCAFCIDNFD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1315F470)
#define NLCAFCIDNFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1315F330)

inline static constexpr unsigned int NLCAFCIDNFD_TypeDefinitionIndex = 68027;

class NLCAFCIDNFD : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* FCGPBJHCHLA; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCAFCIDNFD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCAFCIDNFD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NLCAFCIDNFD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCAFCIDNFD_GDEOPIBNOIN_OFFSET))(this);
	}
};
