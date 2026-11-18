#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class HGAJKHIMKJP;
class IOOIHHOJOPI;
class PCBAHCDHHEG;
namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;

#define FLLAONJONLJ_DGODAMAAMCF_OFFSET UNITYSDK_OFFSET(0x17508DC0)
#define FLLAONJONLJ_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x17508920)
#define FLLAONJONLJ_HOJEHIPIELE_OFFSET UNITYSDK_OFFSET(0x17508D50)
#define FLLAONJONLJ_JPEKDPMCKMP_OFFSET UNITYSDK_OFFSET(0x17508F00)
#define FLLAONJONLJ_LBBJOAMNPEE_OFFSET UNITYSDK_OFFSET(0x17508CE0)
#define FLLAONJONLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17508C90)

inline static constexpr unsigned int FLLAONJONLJ_TypeDefinitionIndex = 76313;

class FLLAONJONLJ : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::HGAJKHIMKJP*>* PMHJBOFDPEJ; // 0x50
	::DBMAHDDGMHM_1<::PCBAHCDHHEG*>* LJBPECKCCEA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLAONJONLJ__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + FLLAONJONLJ_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::String* LBBJOAMNPEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLAONJONLJ_LBBJOAMNPEE_OFFSET))(this);
	}

	::System::String* HOJEHIPIELE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLAONJONLJ_HOJEHIPIELE_OFFSET))(this);
	}

	::System::Void DGODAMAAMCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLAONJONLJ_DGODAMAAMCF_OFFSET))(this);
	}

	::System::String* JPEKDPMCKMP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLAONJONLJ_JPEKDPMCKMP_OFFSET))(this);
	}
};
