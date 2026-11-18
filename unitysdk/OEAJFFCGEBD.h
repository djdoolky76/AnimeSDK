#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNIKKIMMLAN.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
class KOIDMLPJGML;
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class DBMAHDDGMHM_1;

#define OEAJFFCGEBD_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x16C05590)
#define OEAJFFCGEBD_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x16C03CD0)
#define OEAJFFCGEBD_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x16C04040)
#define OEAJFFCGEBD_LNKNKBCBOMM_OFFSET UNITYSDK_OFFSET(0x16C04110)
#define OEAJFFCGEBD__CTOR_OFFSET UNITYSDK_OFFSET(0x16C04030)

inline static constexpr unsigned int OEAJFFCGEBD_TypeDefinitionIndex = 93134;

class OEAJFFCGEBD : public ::HNIKKIMMLAN
{
public:
	::DBMAHDDGMHM_1<::System::Collections::Generic::IList_1<::KOIDMLPJGML*>*>* CHFKPLNGELF; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAJFFCGEBD__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + OEAJFFCGEBD_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::MoleMole::UIControllerContextBase* JHMPNJLFHKC()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAJFFCGEBD_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + OEAJFFCGEBD_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::DBMAHDDGMHM_1<::System::Collections::Generic::IList_1<::KOIDMLPJGML*>*>* LNKNKBCBOMM()
	{
		return ((::DBMAHDDGMHM_1<::System::Collections::Generic::IList_1<::KOIDMLPJGML*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAJFFCGEBD_LNKNKBCBOMM_OFFSET))(this);
	}
};
