#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define NDFNOCMKFEC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1288BEE0)
#define NDFNOCMKFEC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1288BDA0)
#define NDFNOCMKFEC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1288C590)
#define NDFNOCMKFEC_ILMDKAJFOLL_OFFSET UNITYSDK_OFFSET(0x1288BFB0)
#define NDFNOCMKFEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1288C470)

inline static constexpr unsigned int NDFNOCMKFEC_TypeDefinitionIndex = 67753;

class NDFNOCMKFEC : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* KICKDDOPKNI; // 0x18
	::AAMKEDEDHPD_1<::System::String*>* IOLCOONBAJK; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFNOCMKFEC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFNOCMKFEC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NDFNOCMKFEC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ILMDKAJFOLL(::LGCNEDCMPKM& BKBGPKNGNMF, ::System::String*& COKLIFNBJDI)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&, ::System::String*&))((::PBYTE)hIl2Cpp + NDFNOCMKFEC_ILMDKAJFOLL_OFFSET))(this, BKBGPKNGNMF, COKLIFNBJDI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFNOCMKFEC_GDEOPIBNOIN_OFFSET))(this);
	}
};
