#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IHNCCABJGPA;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LDMMOAIDNAB_EFGOADGCJMA_OFFSET UNITYSDK_OFFSET(0xD420FD0)
#define LDMMOAIDNAB_GCPJJIHADMP_OFFSET UNITYSDK_OFFSET(0xD421320)
#define LDMMOAIDNAB_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0xD421650)
#define LDMMOAIDNAB_OELADBPLLEM_OFFSET UNITYSDK_OFFSET(0xD4216B0)
#define LDMMOAIDNAB_PHNLIFFBEAP_OFFSET UNITYSDK_OFFSET(0xD420660)
#define LDMMOAIDNAB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xD420B80)
#define LDMMOAIDNAB__CTOR_OFFSET UNITYSDK_OFFSET(0xD4205D0)

inline static constexpr unsigned int LDMMOAIDNAB_TypeDefinitionIndex = 49079;

class LDMMOAIDNAB : public ::System::Object
{
public:
	static ::LDMMOAIDNAB** StaticGet_GKKEJJFFMOO()
	{
		return (::LDMMOAIDNAB**)Il2CppClass::FromTypeDefinitionIndex(LDMMOAIDNAB_TypeDefinitionIndex)->GetStaticField(0x32AB0);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::IHNCCABJGPA*>*>* GAPGHGPENFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMMOAIDNAB__CTOR_OFFSET))(this);
	}

	::System::Void PHNLIFFBEAP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LDMMOAIDNAB_PHNLIFFBEAP_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMMOAIDNAB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void EFGOADGCJMA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LDMMOAIDNAB_EFGOADGCJMA_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void GCPJJIHADMP(::MoleMole::Battle::Entity* KECKGDFIALJ, ::IHNCCABJGPA* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::IHNCCABJGPA*))((::PBYTE)hIl2Cpp + LDMMOAIDNAB_GCPJJIHADMP_OFFSET))(this, KECKGDFIALJ, NAPFALLANDL);
	}

	static ::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDMMOAIDNAB_LJMIPGJJELP_OFFSET))();
	}

	static ::LDMMOAIDNAB* OELADBPLLEM()
	{
		return ((::LDMMOAIDNAB*(*)())((::PBYTE)hIl2Cpp + LDMMOAIDNAB_OELADBPLLEM_OFFSET))();
	}
};
