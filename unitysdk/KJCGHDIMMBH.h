#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class EJHHPFFPFOJ;
class HOFAIFGAHGJ;
class PFEOJDIJIBM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define KJCGHDIMMBH_APMFLFFLBDL_OFFSET UNITYSDK_OFFSET(0x1299DE50)
#define KJCGHDIMMBH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1299DA10)
#define KJCGHDIMMBH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1299D860)
#define KJCGHDIMMBH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1299DDC0)
#define KJCGHDIMMBH__CTOR_OFFSET UNITYSDK_OFFSET(0x1299DC30)

inline static constexpr unsigned int KJCGHDIMMBH_TypeDefinitionIndex = 84312;

class KJCGHDIMMBH : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::System::String*>* OJLLEEAILNB; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::CPABOPKIGAL* IDLODOCOAKN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGHDIMMBH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGHDIMMBH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KJCGHDIMMBH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGHDIMMBH_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* APMFLFFLBDL(::EJHHPFFPFOJ* OPMPKFEHOBM, ::System::Int32 EAHBMMPKFCE, ::System::Int32 BNLHPGHLKDK, ::PFEOJDIJIBM* DACDAPIGBCB)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::EJHHPFFPFOJ*, ::System::Int32, ::System::Int32, ::PFEOJDIJIBM*))((::PBYTE)hIl2Cpp + KJCGHDIMMBH_APMFLFFLBDL_OFFSET))(this, OPMPKFEHOBM, EAHBMMPKFCE, BNLHPGHLKDK, DACDAPIGBCB);
	}
};
