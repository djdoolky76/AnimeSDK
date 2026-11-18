#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMNOACLIOAE_PBIMIOAHBHO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }

#define JMGPJMCHOIA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x18749140)
#define JMGPJMCHOIA_CPCOGCDGKEC_OFFSET UNITYSDK_OFFSET(0x18749380)
#define JMGPJMCHOIA_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x18749430)
#define JMGPJMCHOIA_IPLECEIOJHF_OFFSET UNITYSDK_OFFSET(0x18749470)
#define JMGPJMCHOIA_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x187493E0)
#define JMGPJMCHOIA_PAJNCNHJDKM_OFFSET UNITYSDK_OFFSET(0x18749230)
#define JMGPJMCHOIA_PLNFPHMLFFH_OFFSET UNITYSDK_OFFSET(0x187494C0)
#define JMGPJMCHOIA_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x18749280)
#define JMGPJMCHOIA__CTOR_OFFSET UNITYSDK_OFFSET(0x18749510)

inline static constexpr unsigned int JMGPJMCHOIA_TypeDefinitionIndex = 71435;

class JMGPJMCHOIA : public ::System::Object
{
public:
	::JMNOACLIOAE_PBIMIOAHBHO JGODNJGKNKO; // 0x10
	::System::Single FBAFJDJFEJN; // 0x14
	::UnityEngine::Vector3 KEIBFKHFLAJ; // 0x18
	::System::Boolean FMEPBJADMNI; // 0x24
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 BDINBFHOKDI; // 0x28
	::System::Single HACJFKBLODH; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGPJMCHOIA__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 HODAIDNDKHD, ::System::Single FNIOPKPHDEH, ::JMNOACLIOAE_PBIMIOAHBHO JGODNJGKNKO, ::System::Boolean CKMMFNBLGGD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::JMNOACLIOAE_PBIMIOAHBHO, ::System::Boolean))((::PBYTE)hIl2Cpp + JMGPJMCHOIA_BBOMJDBNHIC_OFFSET))(this, KECKGDFIALJ, GIAEPMKCBIB, HODAIDNDKHD, FNIOPKPHDEH, JGODNJGKNKO, CKMMFNBLGGD);
	}

	::System::Boolean PAJNCNHJDKM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGPJMCHOIA_PAJNCNHJDKM_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMGPJMCHOIA_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void CPCOGCDGKEC(::UnityEngine::Vector3 FMJGOHNLJNA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JMGPJMCHOIA_CPCOGCDGKEC_OFFSET))(this, FMJGOHNLJNA);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGPJMCHOIA_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGPJMCHOIA_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Boolean IPLECEIOJHF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JMGPJMCHOIA_IPLECEIOJHF_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean PLNFPHMLFFH(::JMNOACLIOAE_PBIMIOAHBHO ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::JMNOACLIOAE_PBIMIOAHBHO))((::PBYTE)hIl2Cpp + JMGPJMCHOIA_PLNFPHMLFFH_OFFSET))(this, ABHBKFJKINO);
	}
};
