#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIUrbanMapLeftTastListRow03Context; }
namespace MoleMole { class UIUrbanMapMissionProgressRowContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DBMAHDDGMHM_1;

#define DDGNBFEEMPI_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1328A220)
#define DDGNBFEEMPI_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x1328A470)
#define DDGNBFEEMPI_LBBJOAMNPEE_OFFSET UNITYSDK_OFFSET(0x1328A910)
#define DDGNBFEEMPI_MAJHAIOAPAG_OFFSET UNITYSDK_OFFSET(0x1328A510)
#define DDGNBFEEMPI_MELKJHANODB_OFFSET UNITYSDK_OFFSET(0x1328A9B0)
#define DDGNBFEEMPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1328A420)

inline static constexpr unsigned int DDGNBFEEMPI_TypeDefinitionIndex = 55512;

class DDGNBFEEMPI : public ::PBJOCICFNGK
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapMissionProgressRowContext*>* AECHNIIOHLI; // 0x50
	::DBMAHDDGMHM_1<::MoleMole::UIUrbanMapLeftTastListRow03Context*>* DAAAEJDBNFI; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGNBFEEMPI__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + DDGNBFEEMPI_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIUrbanMapLeftTastListRow03Context* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftTastListRow03Context*))((::PBYTE)hIl2Cpp + DDGNBFEEMPI_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapMissionProgressRowContext*>* MAJHAIOAPAG()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapMissionProgressRowContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGNBFEEMPI_MAJHAIOAPAG_OFFSET))(this);
	}

	::System::Void LBBJOAMNPEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGNBFEEMPI_LBBJOAMNPEE_OFFSET))(this);
	}

	::System::Int32 MELKJHANODB(::MoleMole::UIUrbanMapMissionProgressRowContext* HAAEBCOBKFF, ::MoleMole::UIUrbanMapMissionProgressRowContext* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIUrbanMapMissionProgressRowContext*, ::MoleMole::UIUrbanMapMissionProgressRowContext*))((::PBYTE)hIl2Cpp + DDGNBFEEMPI_MELKJHANODB_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
