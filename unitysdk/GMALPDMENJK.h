#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class AJLCGNBIDJP;
class IOOIHHOJOPI;
class LEFFOBDDLPC;
class LNKBLMHHHPN;
class NACKKIAJOLA;
namespace System { class Action; }
template <typename T> class BFMLEHMAGAK_1;
template <typename T> class LJHFMILANJA_1;

#define GMALPDMENJK_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x179FAE10)
#define GMALPDMENJK__CTOR_OFFSET UNITYSDK_OFFSET(0x179FC380)

inline static constexpr unsigned int GMALPDMENJK_TypeDefinitionIndex = 53673;

class GMALPDMENJK : public ::PBJOCICFNGK
{
public:
	::BFMLEHMAGAK_1<::System::Int32>* ECKDCFACIBI; // 0x50
	::BFMLEHMAGAK_1<::System::Boolean>* IIPKCKDCBJO; // 0x58
	::BFMLEHMAGAK_1<::System::Int32>* DHAJLFMHDNG; // 0x60
	::BFMLEHMAGAK_1<::System::Int32>* DKFFGDIODAB; // 0x68
	::BFMLEHMAGAK_1<::System::Boolean>* OPAHGCGNLDJ; // 0x70
	::LJHFMILANJA_1<::System::Int32>* CFNHKJCDOKC; // 0x78
	::BFMLEHMAGAK_1<::System::Boolean>* PAJNCNHJDKM; // 0x80
	::BFMLEHMAGAK_1<::LNKBLMHHHPN*>* OMJDJJBCMBA; // 0x88
	::BFMLEHMAGAK_1<::NACKKIAJOLA*>* MJKAOJANHAI; // 0x90
	::BFMLEHMAGAK_1<::LEFFOBDDLPC*>* NMLDOEGPOMM; // 0x98
	::System::Action* OMBKKEDAOEC; // 0xA0
	::BFMLEHMAGAK_1<::AJLCGNBIDJP*>* DOHDKEBPGJA; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMALPDMENJK__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + GMALPDMENJK_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}
};
