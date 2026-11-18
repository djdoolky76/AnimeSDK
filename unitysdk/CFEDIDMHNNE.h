#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CLAHIKGHGBD;
class IOOIHHOJOPI;
namespace System { class Object; }
template <typename T> class LJHFMILANJA_1;

#define CFEDIDMHNNE_BEGMNCEOIEA_OFFSET UNITYSDK_OFFSET(0x1532B6D0)
#define CFEDIDMHNNE_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1532A860)
#define CFEDIDMHNNE_GFBJLHMNBAD_OFFSET UNITYSDK_OFFSET(0x1532B6E0)
#define CFEDIDMHNNE_LGKFEKDAEEP_OFFSET UNITYSDK_OFFSET(0x1532B4B0)
#define CFEDIDMHNNE__CTOR_OFFSET UNITYSDK_OFFSET(0x1532B460)

inline static constexpr unsigned int CFEDIDMHNNE_TypeDefinitionIndex = 75477;

class CFEDIDMHNNE : public ::PBJOCICFNGK
{
public:
	::CLAHIKGHGBD* LPOBPAEDFCH; // 0x50
	::LJHFMILANJA_1<::System::Object*>* _NFMCJBAAGIF_k__BackingField; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDIDMHNNE__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + CFEDIDMHNNE_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	static ::System::Void LGKFEKDAEEP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFEDIDMHNNE_LGKFEKDAEEP_OFFSET))();
	}

	::System::Void BEGMNCEOIEA(::LJHFMILANJA_1<::System::Object*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CFEDIDMHNNE_BEGMNCEOIEA_OFFSET))(this, EGEGIMGMJHN);
	}

	::LJHFMILANJA_1<::System::Object*>* GFBJLHMNBAD()
	{
		return ((::LJHFMILANJA_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDIDMHNNE_GFBJLHMNBAD_OFFSET))(this);
	}
};
