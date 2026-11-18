#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
class MonoUITableScrollV2;
namespace System { class Object; }
namespace System::Collections { class IEnumerable; }
template <typename T> class MECCGBIINJI_1;

#define FFPMENLPADG_CFCCLLHDGHH_OFFSET UNITYSDK_OFFSET(0x11D757D0)
#define FFPMENLPADG_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x11D74E20)
#define FFPMENLPADG_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x11D75740)
#define FFPMENLPADG_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x11D75240)
#define FFPMENLPADG__CTOR_OFFSET UNITYSDK_OFFSET(0x11D756F0)

inline static constexpr unsigned int FFPMENLPADG_TypeDefinitionIndex = 46234;

class FFPMENLPADG : public ::PBJOCICFNGK
{
public:
	::MonoUITableScrollV2* FFLJPJNHONI; // 0x50
	::MECCGBIINJI_1<::System::Object*>* HJMOEJELNPE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPMENLPADG__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + FFPMENLPADG_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPMENLPADG_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPMENLPADG_NPKBDILPMHJ_OFFSET))(this);
	}

	::System::Collections::IEnumerable* CFCCLLHDGHH()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPMENLPADG_CFCCLLHDGHH_OFFSET))(this);
	}
};
