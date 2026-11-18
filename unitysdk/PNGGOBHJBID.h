#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFFKGFBNNPI.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIControllerContextBase; }

#define PNGGOBHJBID_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x1BF2F1B0)
#define PNGGOBHJBID_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1BF2ED80)
#define PNGGOBHJBID_MEABAAJFJDI_OFFSET UNITYSDK_OFFSET(0x1BF2EF00)
#define PNGGOBHJBID__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF2EEF0)

inline static constexpr unsigned int PNGGOBHJBID_TypeDefinitionIndex = 50551;

class PNGGOBHJBID : public ::GFFKGFBNNPI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGGOBHJBID__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + PNGGOBHJBID_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::MoleMole::UIControllerContextBase* MEABAAJFJDI()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGGOBHJBID_MEABAAJFJDI_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + PNGGOBHJBID_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
