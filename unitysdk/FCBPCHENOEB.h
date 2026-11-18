#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define FCBPCHENOEB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x156B3C80)
#define FCBPCHENOEB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x156B3B30)
#define FCBPCHENOEB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x156B43D0)
#define FCBPCHENOEB_PKCGAIFDGML_OFFSET UNITYSDK_OFFSET(0x156B41B0)
#define FCBPCHENOEB__CTOR_OFFSET UNITYSDK_OFFSET(0x156B4280)

inline static constexpr unsigned int FCBPCHENOEB_TypeDefinitionIndex = 90012;

class FCBPCHENOEB : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* LJBFFCHDONM; // 0x28
	::KCMIFNGABDC_1<::System::String*>* NCJOBBPFMNH; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* JNLHJHOBEHI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBPCHENOEB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBPCHENOEB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FCBPCHENOEB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* PKCGAIFDGML(::HOCDHMEPPEG MKGINGALGCN, ::System::Int32 DEFAKCIAKLG, ::System::String* HFONKKCIEBH)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::HOCDHMEPPEG, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FCBPCHENOEB_PKCGAIFDGML_OFFSET))(this, MKGINGALGCN, DEFAKCIAKLG, HFONKKCIEBH);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBPCHENOEB_GDEOPIBNOIN_OFFSET))(this);
	}
};
