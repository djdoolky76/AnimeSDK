#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CDDAHBFJLLL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x147881F0)
#define CDDAHBFJLLL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14788120)
#define CDDAHBFJLLL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x147886E0)
#define CDDAHBFJLLL__CTOR_OFFSET UNITYSDK_OFFSET(0x147885F0)

inline static constexpr unsigned int CDDAHBFJLLL_TypeDefinitionIndex = 71371;

class CDDAHBFJLLL : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>* DHODPFKDGEA; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDAHBFJLLL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDAHBFJLLL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CDDAHBFJLLL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDAHBFJLLL_GDEOPIBNOIN_OFFSET))(this);
	}
};
