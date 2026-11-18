#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/CAMLGDMCCMB.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define KEMLPKIBNCC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12982D60)
#define KEMLPKIBNCC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12982C10)
#define KEMLPKIBNCC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x129835E0)
#define KEMLPKIBNCC_HNAAJCBNGPP_OFFSET UNITYSDK_OFFSET(0x129835F0)
#define KEMLPKIBNCC__CTOR_OFFSET UNITYSDK_OFFSET(0x12983490)

inline static constexpr unsigned int KEMLPKIBNCC_TypeDefinitionIndex = 79664;

class KEMLPKIBNCC : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x28
	::CPABOPKIGAL* PLEJMLIFFHG; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMLPKIBNCC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMLPKIBNCC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KEMLPKIBNCC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMLPKIBNCC_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* HNAAJCBNGPP(::LGCNEDCMPKM BKBGPKNGNMF, ::CAMLGDMCCMB AOKHOHCJNFJ)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM, ::CAMLGDMCCMB))((::PBYTE)hIl2Cpp + KEMLPKIBNCC_HNAAJCBNGPP_OFFSET))(this, BKBGPKNGNMF, AOKHOHCJNFJ);
	}
};
