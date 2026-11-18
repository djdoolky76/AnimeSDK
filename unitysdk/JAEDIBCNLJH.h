#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNIKKIMMLAN.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
class KOIDMLPJGML;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DBMAHDDGMHM_1;

#define JAEDIBCNLJH_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x16597C10)
#define JAEDIBCNLJH_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x16595D00)
#define JAEDIBCNLJH_JPEKDPMCKMP_OFFSET UNITYSDK_OFFSET(0x16597B40)
#define JAEDIBCNLJH_LBBJOAMNPEE_OFFSET UNITYSDK_OFFSET(0x165971B0)
#define JAEDIBCNLJH_LNKNKBCBOMM_OFFSET UNITYSDK_OFFSET(0x16595FA0)
#define JAEDIBCNLJH__CTOR_OFFSET UNITYSDK_OFFSET(0x16595F90)

inline static constexpr unsigned int JAEDIBCNLJH_TypeDefinitionIndex = 89688;

class JAEDIBCNLJH : public ::HNIKKIMMLAN
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* AECHNIIOHLI; // 0x78
	::DBMAHDDGMHM_1<::System::Collections::Generic::IList_1<::KOIDMLPJGML*>*>* CHFKPLNGELF; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEDIBCNLJH__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + JAEDIBCNLJH_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::DBMAHDDGMHM_1<::System::Collections::Generic::IList_1<::KOIDMLPJGML*>*>* LNKNKBCBOMM()
	{
		return ((::DBMAHDDGMHM_1<::System::Collections::Generic::IList_1<::KOIDMLPJGML*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEDIBCNLJH_LNKNKBCBOMM_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* LBBJOAMNPEE()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEDIBCNLJH_LBBJOAMNPEE_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* JPEKDPMCKMP()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEDIBCNLJH_JPEKDPMCKMP_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + JAEDIBCNLJH_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
