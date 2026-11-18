#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNIKKIMMLAN.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIControllerContextBase; }

#define LPLFEONIMEC_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x185168E0)
#define LPLFEONIMEC_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x18516760)
#define LPLFEONIMEC_MEABAAJFJDI_OFFSET UNITYSDK_OFFSET(0x185168F0)
#define LPLFEONIMEC__CTOR_OFFSET UNITYSDK_OFFSET(0x185168D0)

inline static constexpr unsigned int LPLFEONIMEC_TypeDefinitionIndex = 50681;

class LPLFEONIMEC : public ::HNIKKIMMLAN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLFEONIMEC__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + LPLFEONIMEC_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + LPLFEONIMEC_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::MoleMole::UIControllerContextBase* MEABAAJFJDI()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLFEONIMEC_MEABAAJFJDI_OFFSET))(this);
	}
};
