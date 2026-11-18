#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define LFBIGMGMPEI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19989690)
#define LFBIGMGMPEI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x199893D0)
#define LFBIGMGMPEI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19989D90)
#define LFBIGMGMPEI_OHAAINCBNAL_OFFSET UNITYSDK_OFFSET(0x19989AD0)
#define LFBIGMGMPEI__CTOR_OFFSET UNITYSDK_OFFSET(0x19989B10)

inline static constexpr unsigned int LFBIGMGMPEI_TypeDefinitionIndex = 39503;

class LFBIGMGMPEI : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* OJAMPHDOBJA; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30
	::CPABOPKIGAL* DGLPCINAMAC; // 0x38
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* OKGCEJECNIO; // 0x40
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBIGMGMPEI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBIGMGMPEI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LFBIGMGMPEI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void OHAAINCBNAL(::LGCNEDCMPKM& BPBLBAJCDAH)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LFBIGMGMPEI_OHAAINCBNAL_OFFSET))(this, BPBLBAJCDAH);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBIGMGMPEI_GDEOPIBNOIN_OFFSET))(this);
	}
};
