#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNIKKIMMLAN.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapRightListRowImageWidgetContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGBAIAEAKDH_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x17650B10)
#define KGBAIAEAKDH_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x17650190)
#define KGBAIAEAKDH_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x176503C0)
#define KGBAIAEAKDH_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x17650690)
#define KGBAIAEAKDH__CTOR_OFFSET UNITYSDK_OFFSET(0x176503B0)

inline static constexpr unsigned int KGBAIAEAKDH_TypeDefinitionIndex = 40000;

class KGBAIAEAKDH : public ::HNIKKIMMLAN
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRightListRowImageWidgetContext*>* AECHNIIOHLI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBAIAEAKDH__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + KGBAIAEAKDH_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::MoleMole::UIControllerContextBase* HPPLBNIKOLN()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBAIAEAKDH_HPPLBNIKOLN_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowImageWidgetContext*>* JHMPNJLFHKC()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowImageWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBAIAEAKDH_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + KGBAIAEAKDH_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
