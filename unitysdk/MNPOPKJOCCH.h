#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace System { class Object; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class ABGINBDKGEK_1;

#define MNPOPKJOCCH_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x11F63060)
#define MNPOPKJOCCH_IBIKKADEEMD_OFFSET UNITYSDK_OFFSET(0x11F634D0)
#define MNPOPKJOCCH_JKKAAHEBJPC_OFFSET UNITYSDK_OFFSET(0x11F63520)
#define MNPOPKJOCCH_MJOINGDMPDI_OFFSET UNITYSDK_OFFSET(0x11F634B0)
#define MNPOPKJOCCH_PMIAHEJKNKP_OFFSET UNITYSDK_OFFSET(0x11F634C0)
#define MNPOPKJOCCH__CTOR_OFFSET UNITYSDK_OFFSET(0x11F63380)

inline static constexpr unsigned int MNPOPKJOCCH_TypeDefinitionIndex = 92006;

class MNPOPKJOCCH : public ::PBJOCICFNGK
{
public:
	::ABGINBDKGEK_1<::System::Object*>* _KNKJDLDAPID_k__BackingField; // 0x50
	::System::Int32 BALHGAPPLBL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPOPKJOCCH__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + MNPOPKJOCCH_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void MJOINGDMPDI(::ABGINBDKGEK_1<::System::Object*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ABGINBDKGEK_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MNPOPKJOCCH_MJOINGDMPDI_OFFSET))(this, EGEGIMGMJHN);
	}

	::ABGINBDKGEK_1<::System::Object*>* PMIAHEJKNKP()
	{
		return ((::ABGINBDKGEK_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPOPKJOCCH_PMIAHEJKNKP_OFFSET))(this);
	}

	::System::Collections::IEnumerable* IBIKKADEEMD()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPOPKJOCCH_IBIKKADEEMD_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Object*>* JKKAAHEBJPC()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPOPKJOCCH_JKKAAHEBJPC_OFFSET))(this);
	}
};
