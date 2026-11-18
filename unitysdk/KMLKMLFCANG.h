#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNIKKIMMLAN.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
class KOIDMLPJGML;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class JIOLFCAGOFH_1;

#define KMLKMLFCANG_DKPBHIKKMCO_OFFSET UNITYSDK_OFFSET(0x17669130)
#define KMLKMLFCANG_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x17669120)
#define KMLKMLFCANG_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x176679C0)
#define KMLKMLFCANG_HOJEHIPIELE_OFFSET UNITYSDK_OFFSET(0x17669150)
#define KMLKMLFCANG_JPEKDPMCKMP_OFFSET UNITYSDK_OFFSET(0x17669060)
#define KMLKMLFCANG_LNKNKBCBOMM_OFFSET UNITYSDK_OFFSET(0x17667FC0)
#define KMLKMLFCANG__CTOR_OFFSET UNITYSDK_OFFSET(0x17667F30)

inline static constexpr unsigned int KMLKMLFCANG_TypeDefinitionIndex = 71107;

class KMLKMLFCANG : public ::HNIKKIMMLAN
{
public:
	::JIOLFCAGOFH_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*>* DNJDKDNBALH; // 0x78
	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* CHFKPLNGELF; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLKMLFCANG__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + KMLKMLFCANG_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* LNKNKBCBOMM()
	{
		return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLKMLFCANG_LNKNKBCBOMM_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* JPEKDPMCKMP()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLKMLFCANG_JPEKDPMCKMP_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + KMLKMLFCANG_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean DKPBHIKKMCO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLKMLFCANG_DKPBHIKKMCO_OFFSET))(this);
	}

	::System::Boolean HOJEHIPIELE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLKMLFCANG_HOJEHIPIELE_OFFSET))(this);
	}
};
