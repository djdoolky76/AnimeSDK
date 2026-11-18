#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
template <typename T> class DBMAHDDGMHM_1;

#define NPPBOHAHOGI_CNFMLFHPDKK_OFFSET UNITYSDK_OFFSET(0xFD46500)
#define NPPBOHAHOGI_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0xFD460C0)
#define NPPBOHAHOGI_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0xFD46350)
#define NPPBOHAHOGI_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0xFD463C0)
#define NPPBOHAHOGI__CTOR_OFFSET UNITYSDK_OFFSET(0xFD46300)

inline static constexpr unsigned int NPPBOHAHOGI_TypeDefinitionIndex = 90534;

class NPPBOHAHOGI : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::System::Boolean>* PFCKNHPNEFO; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPBOHAHOGI__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + NPPBOHAHOGI_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Boolean HPPLBNIKOLN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPBOHAHOGI_HPPLBNIKOLN_OFFSET))(this);
	}

	::System::Void LOPABKBANAN(::System::Boolean CMBKOECNKKG, ::System::Boolean IAOJECCOMPN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPPBOHAHOGI_LOPABKBANAN_OFFSET))(this, CMBKOECNKKG, IAOJECCOMPN);
	}

	::System::Void CNFMLFHPDKK(::System::Boolean CMBKOECNKKG, ::System::Boolean HBHAGICGLBB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPPBOHAHOGI_CNFMLFHPDKK_OFFSET))(this, CMBKOECNKKG, HBHAGICGLBB);
	}
};
