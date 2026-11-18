#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOBBMIBKDAG.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCKOHKGBAHI_AMKCAOGMKHO_OFFSET UNITYSDK_OFFSET(0x17275930)
#define NCKOHKGBAHI_EEHGJFBDLKA_OFFSET UNITYSDK_OFFSET(0x172758C0)
#define NCKOHKGBAHI_FGGPLELDMIH_OFFSET UNITYSDK_OFFSET(0x17275830)
#define NCKOHKGBAHI_HGDLGKIHBAD_OFFSET UNITYSDK_OFFSET(0x17275780)
#define NCKOHKGBAHI_HMBBADCEFLN_OFFSET UNITYSDK_OFFSET(0x17275A70)
#define NCKOHKGBAHI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x172759D0)
#define NCKOHKGBAHI__CTOR_OFFSET UNITYSDK_OFFSET(0x172756F0)

inline static constexpr unsigned int NCKOHKGBAHI_TypeDefinitionIndex = 51810;

class NCKOHKGBAHI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::NOBBMIBKDAG>* KEDMNAFAMMP; // 0x10
	::System::Collections::Generic::List_1<::NOBBMIBKDAG>* LFCMLMABJDD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKOHKGBAHI__CTOR_OFFSET))(this);
	}

	::System::Boolean HGDLGKIHBAD(::System::Int32 MGMDLMBEDJF, ::System::String* KKJEJNMLIFP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NCKOHKGBAHI_HGDLGKIHBAD_OFFSET))(this, MGMDLMBEDJF, KKJEJNMLIFP);
	}

	static ::System::Boolean FGGPLELDMIH(::System::Collections::Generic::List_1<::NOBBMIBKDAG>* IBPMEHJAPIN, ::System::Int32 MGMDLMBEDJF, ::System::String* KKJEJNMLIFP)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::NOBBMIBKDAG>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NCKOHKGBAHI_FGGPLELDMIH_OFFSET))(IBPMEHJAPIN, MGMDLMBEDJF, KKJEJNMLIFP);
	}

	::System::Boolean EEHGJFBDLKA(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NCKOHKGBAHI_EEHGJFBDLKA_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKOHKGBAHI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean HMBBADCEFLN(::System::Int32 MGMDLMBEDJF, ::System::String* KKJEJNMLIFP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NCKOHKGBAHI_HMBBADCEFLN_OFFSET))(this, MGMDLMBEDJF, KKJEJNMLIFP);
	}

	static ::System::Boolean AMKCAOGMKHO(::System::Collections::Generic::List_1<::NOBBMIBKDAG>* IBPMEHJAPIN, ::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::NOBBMIBKDAG>*, ::System::Int32))((::PBYTE)hIl2Cpp + NCKOHKGBAHI_AMKCAOGMKHO_OFFSET))(IBPMEHJAPIN, MGMDLMBEDJF);
	}
};
