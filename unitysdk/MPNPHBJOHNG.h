#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MPNPHBJOHNG_ACPJIIANKLI_OFFSET UNITYSDK_OFFSET(0x177DB2E0)
#define MPNPHBJOHNG_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x177DB2F0)
#define MPNPHBJOHNG_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x177DAD00)
#define MPNPHBJOHNG_GLNIKGDMMFC_OFFSET UNITYSDK_OFFSET(0x177DAFC0)
#define MPNPHBJOHNG_JPEKDPMCKMP_OFFSET UNITYSDK_OFFSET(0x177DB340)
#define MPNPHBJOHNG__CTOR_OFFSET UNITYSDK_OFFSET(0x177DB280)

inline static constexpr unsigned int MPNPHBJOHNG_TypeDefinitionIndex = 66744;

class MPNPHBJOHNG
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* AECHNIIOHLI; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* FCFHLDFPAGE; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNPHBJOHNG__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + MPNPHBJOHNG_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void GLNIKGDMMFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNPHBJOHNG_GLNIKGDMMFC_OFFSET))(this);
	}

	::System::Void ACPJIIANKLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNPHBJOHNG_ACPJIIANKLI_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + MPNPHBJOHNG_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* JPEKDPMCKMP()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNPHBJOHNG_JPEKDPMCKMP_OFFSET))(this);
	}
};
