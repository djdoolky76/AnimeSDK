#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNIKKIMMLAN.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
class KOIDMLPJGML;
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class DBMAHDDGMHM_1;

#define ICCLBIBIBKL_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0xEA13000)
#define ICCLBIBIBKL_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0xEA10E20)
#define ICCLBIBIBKL_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0xEA11190)
#define ICCLBIBIBKL_LNKNKBCBOMM_OFFSET UNITYSDK_OFFSET(0xEA11260)
#define ICCLBIBIBKL__CTOR_OFFSET UNITYSDK_OFFSET(0xEA11180)

inline static constexpr unsigned int ICCLBIBIBKL_TypeDefinitionIndex = 60553;

class ICCLBIBIBKL : public ::HNIKKIMMLAN
{
public:
	::DBMAHDDGMHM_1<::System::Collections::Generic::IList_1<::KOIDMLPJGML*>*>* CHFKPLNGELF; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCLBIBIBKL__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + ICCLBIBIBKL_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::MoleMole::UIControllerContextBase* JHMPNJLFHKC()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCLBIBIBKL_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + ICCLBIBIBKL_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::DBMAHDDGMHM_1<::System::Collections::Generic::IList_1<::KOIDMLPJGML*>*>* LNKNKBCBOMM()
	{
		return ((::DBMAHDDGMHM_1<::System::Collections::Generic::IList_1<::KOIDMLPJGML*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCLBIBIBKL_LNKNKBCBOMM_OFFSET))(this);
	}
};
