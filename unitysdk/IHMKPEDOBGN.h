#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class PMNKLBCPENN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;

#define IHMKPEDOBGN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x141D8DF0)
#define IHMKPEDOBGN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x141D8BF0)
#define IHMKPEDOBGN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x141D9BA0)
#define IHMKPEDOBGN_HINECBELHAM_1_OFFSET UNITYSDK_OFFSET(0x141D94F0)
#define IHMKPEDOBGN_HINECBELHAM_2_OFFSET UNITYSDK_OFFSET(0x141D9890)
#define IHMKPEDOBGN_HINECBELHAM_3_OFFSET UNITYSDK_OFFSET(0x141D95F0)
#define IHMKPEDOBGN_HINECBELHAM_4_OFFSET UNITYSDK_OFFSET(0x141D9490)
#define IHMKPEDOBGN_HINECBELHAM_OFFSET UNITYSDK_OFFSET(0x141D9830)
#define IHMKPEDOBGN__CTOR_OFFSET UNITYSDK_OFFSET(0x141D9A00)

inline static constexpr unsigned int IHMKPEDOBGN_TypeDefinitionIndex = 50735;

class IHMKPEDOBGN : public ::CGJEMKCKIJG
{
public:
	::PMNKLBCPENN* HHGILNNMNAK; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::AAMKEDEDHPD_1<::System::Boolean>* LEJOOLOHNJG; // 0x28
	::CPABOPKIGAL* NOBIHAPMPNA; // 0x30
	::CPABOPKIGAL* FHKLHBPNCCG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMKPEDOBGN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMKPEDOBGN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IHMKPEDOBGN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean HINECBELHAM(::MoleMole::EntityHandle PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + IHMKPEDOBGN_HINECBELHAM_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Boolean HINECBELHAM_1(::Foundation::ViewObject::ViewObjectHandle PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + IHMKPEDOBGN_HINECBELHAM_1_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Boolean HINECBELHAM_2(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* IIHBDJEDIEN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + IHMKPEDOBGN_HINECBELHAM_2_OFFSET))(this, IIHBDJEDIEN);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMKPEDOBGN_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean HINECBELHAM_3(::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* IIHBDJEDIEN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*))((::PBYTE)hIl2Cpp + IHMKPEDOBGN_HINECBELHAM_3_OFFSET))(this, IIHBDJEDIEN);
	}

	::System::Boolean HINECBELHAM_4(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IHMKPEDOBGN_HINECBELHAM_4_OFFSET))(this, EGEGIMGMJHN);
	}
};
