#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
class MDHFKDAMNKD;

#define KLDMCLGOOBC_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0xD400350)
#define KLDMCLGOOBC_LKNBCFOKJLO_OFFSET UNITYSDK_OFFSET(0xD4005E0)
#define KLDMCLGOOBC_MOKINDNACHI_OFFSET UNITYSDK_OFFSET(0xD400480)
#define KLDMCLGOOBC_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0xD400550)
#define KLDMCLGOOBC_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0xD4004C0)
#define KLDMCLGOOBC__CTOR_OFFSET UNITYSDK_OFFSET(0xD400500)

inline static constexpr unsigned int KLDMCLGOOBC_TypeDefinitionIndex = 60539;

class KLDMCLGOOBC : public ::PBJOCICFNGK
{
public:
	::MDHFKDAMNKD* LPOBPAEDFCH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMCLGOOBC__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + KLDMCLGOOBC_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void MOKINDNACHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMCLGOOBC_MOKINDNACHI_OFFSET))(this);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMCLGOOBC_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMCLGOOBC_NPKBDILPMHJ_OFFSET))(this);
	}

	::System::Void LKNBCFOKJLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMCLGOOBC_LKNBCFOKJLO_OFFSET))(this);
	}
};
