#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNIKKIMMLAN.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
class KOIDMLPJGML;
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FFABFLJMPNI_DGODAMAAMCF_OFFSET UNITYSDK_OFFSET(0x15E5C350)
#define FFABFLJMPNI_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x15E5C390)
#define FFABFLJMPNI_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x15E5B3B0)
#define FFABFLJMPNI_JPEKDPMCKMP_OFFSET UNITYSDK_OFFSET(0x15E5C370)
#define FFABFLJMPNI_LBBJOAMNPEE_OFFSET UNITYSDK_OFFSET(0x15E5BE60)
#define FFABFLJMPNI_LNKNKBCBOMM_OFFSET UNITYSDK_OFFSET(0x15E5B8D0)
#define FFABFLJMPNI__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5B840)

inline static constexpr unsigned int FFABFLJMPNI_TypeDefinitionIndex = 47927;

class FFABFLJMPNI : public ::HNIKKIMMLAN
{
public:
	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* CHFKPLNGELF; // 0x78
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* AECHNIIOHLI; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFABFLJMPNI__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + FFABFLJMPNI_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* LNKNKBCBOMM()
	{
		return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFABFLJMPNI_LNKNKBCBOMM_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* LBBJOAMNPEE()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFABFLJMPNI_LBBJOAMNPEE_OFFSET))(this);
	}

	::System::Boolean DGODAMAAMCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFABFLJMPNI_DGODAMAAMCF_OFFSET))(this);
	}

	::System::Boolean JPEKDPMCKMP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFABFLJMPNI_JPEKDPMCKMP_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + FFABFLJMPNI_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
