#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HFFDNKNKALO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x140A2320)
#define HFFDNKNKALO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x140A21D0)
#define HFFDNKNKALO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x140A2500)
#define HFFDNKNKALO__CTOR_OFFSET UNITYSDK_OFFSET(0x140A23D0)

inline static constexpr unsigned int HFFDNKNKALO_TypeDefinitionIndex = 38385;

class HFFDNKNKALO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* OOFCONDMLOI; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Object*>*>* BGLDINKLKME; // 0x30
	::AAMKEDEDHPD_1<::System::Int32>* FILAMFLMBHK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFDNKNKALO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFDNKNKALO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HFFDNKNKALO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFDNKNKALO_GDEOPIBNOIN_OFFSET))(this);
	}
};
