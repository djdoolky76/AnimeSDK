#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define FBCJMIJEOPE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10F54C50)
#define FBCJMIJEOPE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10F54B70)
#define FBCJMIJEOPE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10F552E0)
#define FBCJMIJEOPE_PKCGAIFDGML_OFFSET UNITYSDK_OFFSET(0x10F55120)
#define FBCJMIJEOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x10F551F0)

inline static constexpr unsigned int FBCJMIJEOPE_TypeDefinitionIndex = 64361;

class FBCJMIJEOPE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* NCJOBBPFMNH; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* JNLHJHOBEHI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCJMIJEOPE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCJMIJEOPE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FBCJMIJEOPE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* PKCGAIFDGML(::LGCNEDCMPKM AAOCANGHBDG, ::MoleMole::EntityHandle HPADNAEINPK, ::System::Int32 DEFAKCIAKLG)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM, ::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + FBCJMIJEOPE_PKCGAIFDGML_OFFSET))(this, AAOCANGHBDG, HPADNAEINPK, DEFAKCIAKLG);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCJMIJEOPE_GDEOPIBNOIN_OFFSET))(this);
	}
};
