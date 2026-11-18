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

#define KBKFCEFLIGG_DKPBHIKKMCO_OFFSET UNITYSDK_OFFSET(0x152BDC40)
#define KBKFCEFLIGG_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x152BE3E0)
#define KBKFCEFLIGG_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x152BD2B0)
#define KBKFCEFLIGG_HOJEHIPIELE_OFFSET UNITYSDK_OFFSET(0x152BD8B0)
#define KBKFCEFLIGG_JPEKDPMCKMP_OFFSET UNITYSDK_OFFSET(0x152BDB80)
#define KBKFCEFLIGG_LNKNKBCBOMM_OFFSET UNITYSDK_OFFSET(0x152BD8D0)
#define KBKFCEFLIGG_NDGNAILAIJD_OFFSET UNITYSDK_OFFSET(0x152BDC60)
#define KBKFCEFLIGG__CTOR_OFFSET UNITYSDK_OFFSET(0x152BD820)

inline static constexpr unsigned int KBKFCEFLIGG_TypeDefinitionIndex = 58474;

class KBKFCEFLIGG : public ::HNIKKIMMLAN
{
public:
	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* CHFKPLNGELF; // 0x78
	::JIOLFCAGOFH_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*>* DNJDKDNBALH; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKFCEFLIGG__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + KBKFCEFLIGG_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Boolean HOJEHIPIELE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKFCEFLIGG_HOJEHIPIELE_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* JPEKDPMCKMP()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKFCEFLIGG_JPEKDPMCKMP_OFFSET))(this);
	}

	::System::Boolean DKPBHIKKMCO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKFCEFLIGG_DKPBHIKKMCO_OFFSET))(this);
	}

	::System::Void NDGNAILAIJD(::System::Int32 OOEOHNBJMGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBKFCEFLIGG_NDGNAILAIJD_OFFSET))(this, OOEOHNBJMGD);
	}

	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* LNKNKBCBOMM()
	{
		return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKFCEFLIGG_LNKNKBCBOMM_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + KBKFCEFLIGG_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
