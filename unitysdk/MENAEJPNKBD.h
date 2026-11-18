#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace System { class Object; }
namespace System::Collections { class IEnumerable; }
template <typename T> class LJHFMILANJA_1;

#define MENAEJPNKBD_AOAGAEJLDLI_OFFSET UNITYSDK_OFFSET(0x1852EB10)
#define MENAEJPNKBD_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1852E6B0)
#define MENAEJPNKBD_FDOEEDLDIBK_OFFSET UNITYSDK_OFFSET(0x1852ED30)
#define MENAEJPNKBD_IJELHGLJEMO_OFFSET UNITYSDK_OFFSET(0x1852EC20)
#define MENAEJPNKBD_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x1852EED0)
#define MENAEJPNKBD_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x1852E740)
#define MENAEJPNKBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1852EAC0)

inline static constexpr unsigned int MENAEJPNKBD_TypeDefinitionIndex = 88286;

class MENAEJPNKBD : public ::PBJOCICFNGK
{
public:
	::LJHFMILANJA_1<::System::Object*>* DGDENJKAJDB; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENAEJPNKBD__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + MENAEJPNKBD_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENAEJPNKBD_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void AOAGAEJLDLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENAEJPNKBD_AOAGAEJLDLI_OFFSET))(this);
	}

	::System::Void IJELHGLJEMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENAEJPNKBD_IJELHGLJEMO_OFFSET))(this);
	}

	::System::Collections::IEnumerable* FDOEEDLDIBK()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENAEJPNKBD_FDOEEDLDIBK_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENAEJPNKBD_NPKBDILPMHJ_OFFSET))(this);
	}
};
