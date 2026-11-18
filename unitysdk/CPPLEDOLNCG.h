#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CPPLEDOLNCG_AAHCJBJLOPK_OFFSET UNITYSDK_OFFSET(0x19735B20)
#define CPPLEDOLNCG_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x19735BF0)
#define CPPLEDOLNCG_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x19735980)
#define CPPLEDOLNCG_MFBMGEICNIH_OFFSET UNITYSDK_OFFSET(0x19735C40)
#define CPPLEDOLNCG__CTOR_OFFSET UNITYSDK_OFFSET(0x19735B90)

inline static constexpr unsigned int CPPLEDOLNCG_TypeDefinitionIndex = 66872;

class CPPLEDOLNCG
{
public:
	::UnityEngine::RectTransform* GACHKMCKLOH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPLEDOLNCG__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + CPPLEDOLNCG_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::String* AAHCJBJLOPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPLEDOLNCG_AAHCJBJLOPK_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + CPPLEDOLNCG_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::String* MFBMGEICNIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPLEDOLNCG_MFBMGEICNIH_OFFSET))(this);
	}
};
