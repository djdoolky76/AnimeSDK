#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMDKGMMCDNE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class ELMJPAKHKJD;
class KPGMJJOHEHL;
class PGJLEPKPOJC;
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define BCLGAAJFFOC_CIFKLNEJMAN_OFFSET UNITYSDK_OFFSET(0xF78C5B0)
#define BCLGAAJFFOC_FCOMOCGCKAK_OFFSET UNITYSDK_OFFSET(0xF78C270)
#define BCLGAAJFFOC_GGLAOFPGIAA_OFFSET UNITYSDK_OFFSET(0xF78CAE0)
#define BCLGAAJFFOC_HPDIJCKCDLM_OFFSET UNITYSDK_OFFSET(0xF78C840)
#define BCLGAAJFFOC_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0xF78CCE0)
#define BCLGAAJFFOC_OCADCLNCGCN_OFFSET UNITYSDK_OFFSET(0xF78C0B0)
#define BCLGAAJFFOC_OKMEFGGMPFG_OFFSET UNITYSDK_OFFSET(0xF78CB60)
#define BCLGAAJFFOC__CTOR_OFFSET UNITYSDK_OFFSET(0xF78BFF0)

inline static constexpr unsigned int BCLGAAJFFOC_TypeDefinitionIndex = 77858;

class BCLGAAJFFOC : public ::System::Object
{
public:
	::PGJLEPKPOJC* ECPONKOKFIO; // 0x10
	::UnityEngine::Transform* LMAMOJPPHKE; // 0x18
	::PGJLEPKPOJC* JDHAFGDONFN; // 0x20
	::MoleMole::UIWindowController* KBJPABNJOOM; // 0x28
	::MoleMole::Battle::Entity* LDLMPHEEKBG; // 0x30
	::System::Collections::Generic::Dictionary_2<::OMDKGMMCDNE, ::PGJLEPKPOJC*>* CKBKMOFNMNG; // 0x38

	::System::Void _ctor(::MoleMole::UIWindowController* JNLBPMKIFNK, ::UnityEngine::Transform* IAPKABMDJNF, ::PGJLEPKPOJC* DMNJKHAEJJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::PGJLEPKPOJC*))((::PBYTE)hIl2Cpp + BCLGAAJFFOC__CTOR_OFFSET))(this, JNLBPMKIFNK, IAPKABMDJNF, DMNJKHAEJJG);
	}

	::System::Void OCADCLNCGCN(::KPGMJJOHEHL* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::KPGMJJOHEHL*))((::PBYTE)hIl2Cpp + BCLGAAJFFOC_OCADCLNCGCN_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCOMOCGCKAK(::MoleMole::EntityHandle BFDPPMDEOFF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + BCLGAAJFFOC_FCOMOCGCKAK_OFFSET))(this, BFDPPMDEOFF);
	}

	::System::Void HPDIJCKCDLM(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + BCLGAAJFFOC_HPDIJCKCDLM_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void GGLAOFPGIAA(::System::EventArgs* KOIBHLHLMFC, ::MoleMole::EntityHandle BFDPPMDEOFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + BCLGAAJFFOC_GGLAOFPGIAA_OFFSET))(this, KOIBHLHLMFC, BFDPPMDEOFF);
	}

	::PGJLEPKPOJC* CIFKLNEJMAN(::ELMJPAKHKJD* JFPDJGAMELP, ::MoleMole::EntityHandle BFDPPMDEOFF)
	{
		return ((::PGJLEPKPOJC*(*)(::PVOID, ::ELMJPAKHKJD*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + BCLGAAJFFOC_CIFKLNEJMAN_OFFSET))(this, JFPDJGAMELP, BFDPPMDEOFF);
	}

	::System::Void OKMEFGGMPFG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BCLGAAJFFOC_OKMEFGGMPFG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLGAAJFFOC_LJMIPGJJELP_OFFSET))(this);
	}
};
