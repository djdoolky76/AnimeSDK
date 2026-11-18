#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBKLGDFLGNE.h"
#include "unitysdk/HDNPMMAAGNF.h"
#include "unitysdk/MGJKGALELBK.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HAFLGNENJDI;
class KPNIFGIKELE;
class MHJDIPINMMF;
namespace MoleMole::Battle { class Entity; }

#define KJIEAHMFJFC_LKJDHLCJLJC_OFFSET UNITYSDK_OFFSET(0x151633A0)
#define KJIEAHMFJFC__CTOR_OFFSET UNITYSDK_OFFSET(0x751E40)

inline static constexpr unsigned int KJIEAHMFJFC_TypeDefinitionIndex = 89058;

struct alignas(4) KJIEAHMFJFC
{
	::System::UInt32 DKBGLBIECBN; // 0x10
	::System::UInt32 DGMOLEDDPOA; // 0x14
	::MoleMole::EntityHandle CLAGCAKPECB; // 0x18
	::MoleMole::Config::EntityType IGFHCJEOCHL; // 0x28
	::UnityEngine::Vector3 AHJKOLMLNMO; // 0x2C
	::UnityEngine::Vector3 HOBJBNGENOO; // 0x38
	::System::Single ENCJEDOPKPL; // 0x44
	::MGJKGALELBK HMFJEEBONFD; // 0x48
	::System::Boolean GFJKFBBOPCH; // 0x4C
	::System::Byte _padding0[0x3];
	::MoleMole::Config::DamageElementType HBMBILMFEII; // 0x50
	::System::Boolean MBPCIGJBOJI; // 0x54
	::System::Byte _padding1[0x3];
	::HDNPMMAAGNF OGHNNDNMFBG; // 0x58
	::System::Single MKNBLCDCBEC; // 0x5C
	::MoleMole::Config::SpecialDamageTextType HNJCMEJKCNB; // 0x60
	::System::Boolean OKMJCMLIFPF; // 0x64
	::System::Boolean NIHFNGKFAJN; // 0x65
	::System::Boolean NPDONIIFLMM; // 0x66
	::System::Boolean PIPFJKLFMPK; // 0x67
	::System::Boolean BPGOLLFBDIL; // 0x68
	::System::Boolean IEFJFOENGGK; // 0x69
	::System::Boolean LPDDMGCHBEN; // 0x6A
	::System::Boolean MOAAINHJJEN; // 0x6B
	::System::Boolean IMDCAHNPGPM; // 0x6C
	::DBKLGDFLGNE HPINBBGJLGL; // 0x6D
	::System::Byte _padding2[0x2];
	::System::Single FLIGAKKGGAH; // 0x70
	::System::Int32 KEIDJNJKCAN; // 0x74
	::System::Boolean MDDDPHINPIF; // 0x78
	::System::Boolean ADGIOKCNJGA; // 0x79

	::System::Void _ctor(::System::UInt32 DKBGLBIECBN, ::System::UInt32 DGMOLEDDPOA, ::MoleMole::EntityHandle CLAGCAKPECB, ::MoleMole::Config::EntityType IGFHCJEOCHL, ::UnityEngine::Vector3 AHJKOLMLNMO, ::UnityEngine::Vector3 HOBJBNGENOO, ::System::Single ENCJEDOPKPL, ::MGJKGALELBK HMFJEEBONFD, ::System::Boolean GFJKFBBOPCH, ::MoleMole::Config::DamageElementType HBMBILMFEII, ::System::Boolean MBPCIGJBOJI, ::HDNPMMAAGNF OGHNNDNMFBG, ::System::Single MKNBLCDCBEC, ::MoleMole::Config::SpecialDamageTextType HNJCMEJKCNB, ::System::Boolean OKMJCMLIFPF, ::System::Boolean NIHFNGKFAJN, ::System::Boolean NPDONIIFLMM, ::System::Boolean PIPFJKLFMPK, ::System::Boolean BPGOLLFBDIL, ::System::Boolean IEFJFOENGGK, ::System::Boolean LPDDMGCHBEN, ::System::Boolean MOAAINHJJEN, ::System::Boolean IMDCAHNPGPM, ::DBKLGDFLGNE& HPINBBGJLGL, ::System::Single FLIGAKKGGAH, ::System::Int32 KEIDJNJKCAN, ::System::Boolean MDDDPHINPIF, ::System::Boolean ADGIOKCNJGA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::EntityHandle, ::MoleMole::Config::EntityType, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::MGJKGALELBK, ::System::Boolean, ::MoleMole::Config::DamageElementType, ::System::Boolean, ::HDNPMMAAGNF, ::System::Single, ::MoleMole::Config::SpecialDamageTextType, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::DBKLGDFLGNE&, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KJIEAHMFJFC__CTOR_OFFSET))(this, DKBGLBIECBN, DGMOLEDDPOA, CLAGCAKPECB, IGFHCJEOCHL, AHJKOLMLNMO, HOBJBNGENOO, ENCJEDOPKPL, HMFJEEBONFD, GFJKFBBOPCH, HBMBILMFEII, MBPCIGJBOJI, OGHNNDNMFBG, MKNBLCDCBEC, HNJCMEJKCNB, OKMJCMLIFPF, NIHFNGKFAJN, NPDONIIFLMM, PIPFJKLFMPK, BPGOLLFBDIL, IEFJFOENGGK, LPDDMGCHBEN, MOAAINHJJEN, IMDCAHNPGPM, HPINBBGJLGL, FLIGAKKGGAH, KEIDJNJKCAN, MDDDPHINPIF, ADGIOKCNJGA);
	}

	/*
	static ::System::Boolean LKJDHLCJLJC(::MHJDIPINMMF* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::KPNIFGIKELE* IKHJEGECGJA, ::HAFLGNENJDI* OALCOHFBEAB, ::KJIEAHMFJFC& BIJNDBBOLIJ)
	{
		return ((::System::Boolean(*)(::MHJDIPINMMF*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::KPNIFGIKELE*, ::HAFLGNENJDI*, ::KJIEAHMFJFC&))((::PBYTE)hIl2Cpp + KJIEAHMFJFC_LKJDHLCJLJC_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ, MFMPICKHAMJ, IKHJEGECGJA, OALCOHFBEAB, BIJNDBBOLIJ);
	}
	*/
};
