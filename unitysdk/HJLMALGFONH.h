#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class EMDFLOBAPHI;
class IOOIHHOJOPI;
namespace System { class Object; }
namespace System { class String; }
template <typename T> class LJHFMILANJA_1;

#define HJLMALGFONH_BABCFMCMIAB_OFFSET UNITYSDK_OFFSET(0x17B07890)
#define HJLMALGFONH_DKIBBNCFENG_OFFSET UNITYSDK_OFFSET(0x17B07990)
#define HJLMALGFONH_DONDKEFJMGI_OFFSET UNITYSDK_OFFSET(0x17B071F0)
#define HJLMALGFONH_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x17B06D30)
#define HJLMALGFONH_FDGNAGIJNIF_OFFSET UNITYSDK_OFFSET(0x17B07570)
#define HJLMALGFONH_FNKFPOGMBLB_OFFSET UNITYSDK_OFFSET(0x17B073B0)
#define HJLMALGFONH_LKBLODNBOLI_OFFSET UNITYSDK_OFFSET(0x17B07670)
#define HJLMALGFONH_PBGBKBBGGAC_OFFSET UNITYSDK_OFFSET(0x17B07790)
#define HJLMALGFONH__CTOR_OFFSET UNITYSDK_OFFSET(0x17B071A0)

inline static constexpr unsigned int HJLMALGFONH_TypeDefinitionIndex = 86317;

class HJLMALGFONH : public ::PBJOCICFNGK
{
public:
	::LJHFMILANJA_1<::System::Object*>* JMINOGAOFIL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLMALGFONH__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + HJLMALGFONH_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::String* DONDKEFJMGI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLMALGFONH_DONDKEFJMGI_OFFSET))(this);
	}

	::System::String* FNKFPOGMBLB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLMALGFONH_FNKFPOGMBLB_OFFSET))(this);
	}

	::System::Boolean FDGNAGIJNIF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLMALGFONH_FDGNAGIJNIF_OFFSET))(this);
	}

	::EMDFLOBAPHI* LKBLODNBOLI()
	{
		return ((::EMDFLOBAPHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLMALGFONH_LKBLODNBOLI_OFFSET))(this);
	}

	::System::Boolean PBGBKBBGGAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLMALGFONH_PBGBKBBGGAC_OFFSET))(this);
	}

	::System::String* BABCFMCMIAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLMALGFONH_BABCFMCMIAB_OFFSET))(this);
	}

	::System::Boolean DKIBBNCFENG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLMALGFONH_DKIBBNCFENG_OFFSET))(this);
	}
};
