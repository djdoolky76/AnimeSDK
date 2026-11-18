#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMENNLNGGFF.h"
#include "unitysdk/DMFEAJJFKEA.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AGHDCHDNLFG_BMGPIODCPIJ_OFFSET UNITYSDK_OFFSET(0x1576F730)
#define AGHDCHDNLFG_CDNNGINKGMN_OFFSET UNITYSDK_OFFSET(0x1576F740)
#define AGHDCHDNLFG_EPACEOABCMH_OFFSET UNITYSDK_OFFSET(0x1576F7A0)
#define AGHDCHDNLFG_LKMCNJHIOAD_OFFSET UNITYSDK_OFFSET(0x1576F6C0)
#define AGHDCHDNLFG_MLPMAPGCJAG_OFFSET UNITYSDK_OFFSET(0x1576F6B0)
#define AGHDCHDNLFG_OEOKAHJKGME_OFFSET UNITYSDK_OFFSET(0x1576F6D0)
#define AGHDCHDNLFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1576F6A0)

inline static constexpr unsigned int AGHDCHDNLFG_TypeDefinitionIndex = 11393;

class AGHDCHDNLFG : public ::DMENNLNGGFF
{
public:
	::Il2CppArray<::System::String*>* _IMPABKDHGJB_k__BackingField; // 0x58
	::Il2CppArray<::System::String*>* _PBJICIJCOFL_k__BackingField; // 0x60

	::System::Void _ctor(::DMFEAJJFKEA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DMFEAJJFKEA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AGHDCHDNLFG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::Il2CppArray<::System::String*>* MLPMAPGCJAG()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHDCHDNLFG_MLPMAPGCJAG_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* LKMCNJHIOAD()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHDCHDNLFG_LKMCNJHIOAD_OFFSET))(this);
	}

	::System::Int32 OEOKAHJKGME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHDCHDNLFG_OEOKAHJKGME_OFFSET))(this);
	}

	::System::Void BMGPIODCPIJ(::Il2CppArray<::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + AGHDCHDNLFG_BMGPIODCPIJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 CDNNGINKGMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHDCHDNLFG_CDNNGINKGMN_OFFSET))(this);
	}

	::System::Void EPACEOABCMH(::Il2CppArray<::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + AGHDCHDNLFG_EPACEOABCMH_OFFSET))(this, EGEGIMGMJHN);
	}
};
