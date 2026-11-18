#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class DFEONFMKCKE;
class FBAMLABJMKF;
class HNJINLDLIDO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNJINLDLIDO_GJLFGFPGJAN_BPFKPHIFGDH_OFFSET UNITYSDK_OFFSET(0x10124540)
#define HNJINLDLIDO_GJLFGFPGJAN_EOINBLAEELB_OFFSET UNITYSDK_OFFSET(0x10123F10)
#define HNJINLDLIDO_GJLFGFPGJAN_FGLOJLKLMKA_OFFSET UNITYSDK_OFFSET(0x101242F0)
#define HNJINLDLIDO_GJLFGFPGJAN_JPMFBMGIJIM_OFFSET UNITYSDK_OFFSET(0x10124010)
#define HNJINLDLIDO_GJLFGFPGJAN_NOMOFFFAOIO_OFFSET UNITYSDK_OFFSET(0x10123ED0)
#define HNJINLDLIDO_GJLFGFPGJAN__CTOR_OFFSET UNITYSDK_OFFSET(0x10123EC0)

inline static constexpr unsigned int HNJINLDLIDO_GJLFGFPGJAN_TypeDefinitionIndex = 74441;

class HNJINLDLIDO_GJLFGFPGJAN : public ::System::Object
{
public:
	::FBAMLABJMKF* LOCHNHHANMP; // 0x10
	::System::Collections::Generic::List_1<::DFEONFMKCKE*>* MJMNNFAMCHI; // 0x18
	::FBAMLABJMKF* LHMMIJIKNDE; // 0x20
	::HNJINLDLIDO* KLHPEBKNIFB; // 0x28
	::MoleMole::HollowChessboard::HollowCell DNGILIFDBJL; // 0x30
	::MoleMole::HollowChessboard::HollowCell PHMDFGMDLGI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJINLDLIDO_GJLFGFPGJAN__CTOR_OFFSET))(this);
	}

	::System::Void NOMOFFFAOIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJINLDLIDO_GJLFGFPGJAN_NOMOFFFAOIO_OFFSET))(this);
	}

	::System::Void EOINBLAEELB(::System::Collections::Generic::List_1<::DFEONFMKCKE*>* DFGBBNIDIMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DFEONFMKCKE*>*))((::PBYTE)hIl2Cpp + HNJINLDLIDO_GJLFGFPGJAN_EOINBLAEELB_OFFSET))(this, DFGBBNIDIMF);
	}

	::System::Void FGLOJLKLMKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJINLDLIDO_GJLFGFPGJAN_FGLOJLKLMKA_OFFSET))(this);
	}

	::System::Void JPMFBMGIJIM(::DFEONFMKCKE* PGIKOMMEEGC)
	{
		return ((::System::Void(*)(::PVOID, ::DFEONFMKCKE*))((::PBYTE)hIl2Cpp + HNJINLDLIDO_GJLFGFPGJAN_JPMFBMGIJIM_OFFSET))(this, PGIKOMMEEGC);
	}

	::System::Void BPFKPHIFGDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJINLDLIDO_GJLFGFPGJAN_BPFKPHIFGDH_OFFSET))(this);
	}
};
