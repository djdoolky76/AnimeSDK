#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNIKKIMMLAN.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define KKCONENFKCG_EHEKAHIIGEH_OFFSET UNITYSDK_OFFSET(0x13C6B8A0)
#define KKCONENFKCG_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x13C6C5C0)
#define KKCONENFKCG_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x13C6B0B0)
#define KKCONENFKCG_GCGOEOMCICE_OFFSET UNITYSDK_OFFSET(0x13C6C4E0)
#define KKCONENFKCG_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x13C6B8F0)
#define KKCONENFKCG_KPHHMFNGOAM_OFFSET UNITYSDK_OFFSET(0x13C6C630)
#define KKCONENFKCG_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x13C6C5D0)
#define KKCONENFKCG__CTOR_OFFSET UNITYSDK_OFFSET(0x13C6B890)

inline static constexpr unsigned int KKCONENFKCG_TypeDefinitionIndex = 61971;

class KKCONENFKCG : public ::HNIKKIMMLAN
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* AECHNIIOHLI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCONENFKCG__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + KKCONENFKCG_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::UnityEngine::Events::UnityAction* EHEKAHIIGEH()
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCONENFKCG_EHEKAHIIGEH_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* HPPLBNIKOLN()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCONENFKCG_HPPLBNIKOLN_OFFSET))(this);
	}

	::System::Boolean GCGOEOMCICE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCONENFKCG_GCGOEOMCICE_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + KKCONENFKCG_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean LOPABKBANAN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCONENFKCG_LOPABKBANAN_OFFSET))(this);
	}

	::System::Boolean KPHHMFNGOAM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCONENFKCG_KPHHMFNGOAM_OFFSET))(this);
	}
};
