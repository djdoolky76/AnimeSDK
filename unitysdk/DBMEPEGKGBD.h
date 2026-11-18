#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNIKKIMMLAN.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
class KOIDMLPJGML;
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBMEPEGKGBD_DGODAMAAMCF_OFFSET UNITYSDK_OFFSET(0x15A29A70)
#define DBMEPEGKGBD_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x15A2B130)
#define DBMEPEGKGBD_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x15A28B60)
#define DBMEPEGKGBD_JPEKDPMCKMP_OFFSET UNITYSDK_OFFSET(0x15A2B110)
#define DBMEPEGKGBD_LBBJOAMNPEE_OFFSET UNITYSDK_OFFSET(0x15A29080)
#define DBMEPEGKGBD_LNKNKBCBOMM_OFFSET UNITYSDK_OFFSET(0x15A29AB0)
#define DBMEPEGKGBD__CTOR_OFFSET UNITYSDK_OFFSET(0x15A28FF0)

inline static constexpr unsigned int DBMEPEGKGBD_TypeDefinitionIndex = 75916;

class DBMEPEGKGBD : public ::HNIKKIMMLAN
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* AECHNIIOHLI; // 0x78
	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* CHFKPLNGELF; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMEPEGKGBD__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + DBMEPEGKGBD_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* LBBJOAMNPEE()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMEPEGKGBD_LBBJOAMNPEE_OFFSET))(this);
	}

	::System::Boolean DGODAMAAMCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMEPEGKGBD_DGODAMAAMCF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* LNKNKBCBOMM()
	{
		return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMEPEGKGBD_LNKNKBCBOMM_OFFSET))(this);
	}

	::System::Boolean JPEKDPMCKMP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMEPEGKGBD_JPEKDPMCKMP_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + DBMEPEGKGBD_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
