#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
template <typename T> class BFMLEHMAGAK_1;
template <typename T> class LJHFMILANJA_1;

#define ENENPAGNJPC_AHGIPNGDJGC_OFFSET UNITYSDK_OFFSET(0x12376700)
#define ENENPAGNJPC_BABCFMCMIAB_OFFSET UNITYSDK_OFFSET(0x12375BF0)
#define ENENPAGNJPC_DKIBBNCFENG_OFFSET UNITYSDK_OFFSET(0x12375C10)
#define ENENPAGNJPC_DONDKEFJMGI_OFFSET UNITYSDK_OFFSET(0x123750B0)
#define ENENPAGNJPC_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x12374970)
#define ENENPAGNJPC_FDGNAGIJNIF_OFFSET UNITYSDK_OFFSET(0x123760E0)
#define ENENPAGNJPC_FKPOANIFJKG_OFFSET UNITYSDK_OFFSET(0x123764C0)
#define ENENPAGNJPC_MDOFAMFNBGB_OFFSET UNITYSDK_OFFSET(0x12376440)
#define ENENPAGNJPC_PBGBKBBGGAC_OFFSET UNITYSDK_OFFSET(0x12376470)
#define ENENPAGNJPC__CTOR_OFFSET UNITYSDK_OFFSET(0x12375060)

inline static constexpr unsigned int ENENPAGNJPC_TypeDefinitionIndex = 39892;

class ENENPAGNJPC : public ::PBJOCICFNGK
{
public:
	::BFMLEHMAGAK_1<::System::Int32>* AAIHILMANOD; // 0x50
	::BFMLEHMAGAK_1<::System::Int32>* FDLPJOJMLCO; // 0x58
	::LJHFMILANJA_1<::System::Object*>* DGDENJKAJDB; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENENPAGNJPC__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + ENENPAGNJPC_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::String* DONDKEFJMGI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENENPAGNJPC_DONDKEFJMGI_OFFSET))(this);
	}

	::System::Void BABCFMCMIAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENENPAGNJPC_BABCFMCMIAB_OFFSET))(this);
	}

	::System::Int32 DKIBBNCFENG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENENPAGNJPC_DKIBBNCFENG_OFFSET))(this);
	}

	::System::Int32 FDGNAGIJNIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENENPAGNJPC_FDGNAGIJNIF_OFFSET))(this);
	}

	::System::Boolean MDOFAMFNBGB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENENPAGNJPC_MDOFAMFNBGB_OFFSET))(this);
	}

	::System::Boolean PBGBKBBGGAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENENPAGNJPC_PBGBKBBGGAC_OFFSET))(this);
	}

	::System::Collections::IEnumerable* FKPOANIFJKG()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENENPAGNJPC_FKPOANIFJKG_OFFSET))(this);
	}

	::System::Boolean AHGIPNGDJGC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENENPAGNJPC_AHGIPNGDJGC_OFFSET))(this);
	}
};
