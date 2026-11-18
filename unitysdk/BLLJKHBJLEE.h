#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace System { class Object; }
namespace System::Collections { class IEnumerable; }
template <typename T> class LJHFMILANJA_1;

#define BLLJKHBJLEE_AOAGAEJLDLI_OFFSET UNITYSDK_OFFSET(0x10E0DF40)
#define BLLJKHBJLEE_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x10E0DB70)
#define BLLJKHBJLEE_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x10E0E0E0)
#define BLLJKHBJLEE_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x10E0DC00)
#define BLLJKHBJLEE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E0DEF0)

inline static constexpr unsigned int BLLJKHBJLEE_TypeDefinitionIndex = 44251;

class BLLJKHBJLEE : public ::PBJOCICFNGK
{
public:
	::LJHFMILANJA_1<::System::Object*>* DGDENJKAJDB; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLJKHBJLEE__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + BLLJKHBJLEE_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLJKHBJLEE_PILPKINFMBA_OFFSET))(this);
	}

	::System::Collections::IEnumerable* AOAGAEJLDLI()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLJKHBJLEE_AOAGAEJLDLI_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLJKHBJLEE_NPKBDILPMHJ_OFFSET))(this);
	}
};
