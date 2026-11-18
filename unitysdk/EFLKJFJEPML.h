#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace System { class Object; }
template <typename T> class LJHFMILANJA_1;

#define EFLKJFJEPML_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x11A6FBC0)
#define EFLKJFJEPML_EKIFPEICBMK_OFFSET UNITYSDK_OFFSET(0x11A6FE20)
#define EFLKJFJEPML_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x11A6FD80)
#define EFLKJFJEPML_PENDMLPCMKB_OFFSET UNITYSDK_OFFSET(0x11A6FE10)
#define EFLKJFJEPML_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x11A6FC10)
#define EFLKJFJEPML__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6FD30)

inline static constexpr unsigned int EFLKJFJEPML_TypeDefinitionIndex = 51612;

class EFLKJFJEPML : public ::PBJOCICFNGK
{
public:
	::LJHFMILANJA_1<::System::Object*>* _NIIOHJPLBJF_k__BackingField; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLKJFJEPML__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + EFLKJFJEPML_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLKJFJEPML_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLKJFJEPML_NPKBDILPMHJ_OFFSET))(this);
	}

	::LJHFMILANJA_1<::System::Object*>* PENDMLPCMKB()
	{
		return ((::LJHFMILANJA_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLKJFJEPML_PENDMLPCMKB_OFFSET))(this);
	}

	::System::Void EKIFPEICBMK(::LJHFMILANJA_1<::System::Object*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EFLKJFJEPML_EKIFPEICBMK_OFFSET))(this, EGEGIMGMJHN);
	}
};
