#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALPPICGGOGH.h"
#include "unitysdk/FGJOHGGGABB.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FCBNEBOPNIF_CDNNGINKGMN_OFFSET UNITYSDK_OFFSET(0x116A4240)
#define FCBNEBOPNIF_LKMCNJHIOAD_OFFSET UNITYSDK_OFFSET(0x116A40E0)
#define FCBNEBOPNIF_MLPMAPGCJAG_OFFSET UNITYSDK_OFFSET(0x116A3E70)
#define FCBNEBOPNIF_OEOKAHJKGME_OFFSET UNITYSDK_OFFSET(0x116A3E10)
#define FCBNEBOPNIF_PEJPHCCHMLD_OFFSET UNITYSDK_OFFSET(0x116A3FD0)
#define FCBNEBOPNIF__CTOR_OFFSET UNITYSDK_OFFSET(0x116A3DF0)

inline static constexpr unsigned int FCBNEBOPNIF_TypeDefinitionIndex = 86898;

class FCBNEBOPNIF : public ::ALPPICGGOGH
{
public:
	::System::Void _ctor(::FGJOHGGGABB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FGJOHGGGABB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FCBNEBOPNIF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 OEOKAHJKGME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBNEBOPNIF_OEOKAHJKGME_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* MLPMAPGCJAG()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBNEBOPNIF_MLPMAPGCJAG_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* PEJPHCCHMLD()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBNEBOPNIF_PEJPHCCHMLD_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* LKMCNJHIOAD()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBNEBOPNIF_LKMCNJHIOAD_OFFSET))(this);
	}

	::System::Int32 CDNNGINKGMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBNEBOPNIF_CDNNGINKGMN_OFFSET))(this);
	}
};
