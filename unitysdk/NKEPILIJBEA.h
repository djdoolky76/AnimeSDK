#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CBMHGDLNOOG;
class IOOIHHOJOPI;
namespace UnityEngine::Events { class UnityAction; }

#define NKEPILIJBEA_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x105C54E0)
#define NKEPILIJBEA_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x105C5DB0)
#define NKEPILIJBEA_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x105C5D60)
#define NKEPILIJBEA_LIEEAKBPMDO_OFFSET UNITYSDK_OFFSET(0x105C5740)
#define NKEPILIJBEA__CTOR_OFFSET UNITYSDK_OFFSET(0x105C56F0)

inline static constexpr unsigned int NKEPILIJBEA_TypeDefinitionIndex = 66122;

class NKEPILIJBEA : public ::PBJOCICFNGK
{
public:
	::CBMHGDLNOOG* KMMKMGDHCOI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEPILIJBEA__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + NKEPILIJBEA_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void LIEEAKBPMDO(::System::Boolean LICLNHECJEA, ::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NKEPILIJBEA_LIEEAKBPMDO_OFFSET))(this, LICLNHECJEA, MGMDLMBEDJF);
	}

	::UnityEngine::Events::UnityAction* JHMPNJLFHKC()
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEPILIJBEA_JHMPNJLFHKC_OFFSET))(this);
	}

	::UnityEngine::Events::UnityAction* HPPLBNIKOLN()
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEPILIJBEA_HPPLBNIKOLN_OFFSET))(this);
	}
};
