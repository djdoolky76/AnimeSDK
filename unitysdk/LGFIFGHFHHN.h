#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEPHBHBKMCC.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MNJPCFNLLGO;
namespace MoleMole::Battle { class Entity; }

#define LGFIFGHFHHN_BPOMENPKFIL_OFFSET UNITYSDK_OFFSET(0x1A30DFB0)
#define LGFIFGHFHHN_EPBGNCNHHLI_OFFSET UNITYSDK_OFFSET(0x1A30E7E0)
#define LGFIFGHFHHN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A30E990)
#define LGFIFGHFHHN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A30E860)
#define LGFIFGHFHHN_HBPKCIGAMOK_OFFSET UNITYSDK_OFFSET(0x1A30E900)
#define LGFIFGHFHHN_LPMGGFIKEJG_OFFSET UNITYSDK_OFFSET(0x1A30EA30)
#define LGFIFGHFHHN_NGLNDOGKFLH_OFFSET UNITYSDK_OFFSET(0x1A30E9A0)
#define LGFIFGHFHHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A30E8F0)

inline static constexpr unsigned int LGFIFGHFHHN_TypeDefinitionIndex = 51574;

class LGFIFGHFHHN : public ::FEPHBHBKMCC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFIFGHFHHN__CTOR_OFFSET))(this);
	}

	::System::Void BPOMENPKFIL(::MoleMole::Battle::Entity* LMMEJKPAOEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LGFIFGHFHHN_BPOMENPKFIL_OFFSET))(this, LMMEJKPAOEA);
	}

	::System::Void EPBGNCNHHLI(::MNJPCFNLLGO* ANGAEFIEFHK)
	{
		return ((::System::Void(*)(::PVOID, ::MNJPCFNLLGO*))((::PBYTE)hIl2Cpp + LGFIFGHFHHN_EPBGNCNHHLI_OFFSET))(this, ANGAEFIEFHK);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFIFGHFHHN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void HBPKCIGAMOK(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LGFIFGHFHHN_HBPKCIGAMOK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFIFGHFHHN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void NGLNDOGKFLH(::MNJPCFNLLGO* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MNJPCFNLLGO*))((::PBYTE)hIl2Cpp + LGFIFGHFHHN_NGLNDOGKFLH_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Battle::Entity* LPMGGFIKEJG(::System::Int32 MIHKLDPHCJH, ::System::UInt32 LACJPGJJLCH, ::System::UInt32 CCOIAGNGLNK, ::System::UInt32 IKEMGLJOMAA, ::System::Boolean FHPFCJFGJNM, ::UnityEngine::Vector3 IACKHFCLPJI, ::System::Single ELAOOOJBCNO)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LGFIFGHFHHN_LPMGGFIKEJG_OFFSET))(this, MIHKLDPHCJH, LACJPGJJLCH, CCOIAGNGLNK, IKEMGLJOMAA, FHPFCJFGJNM, IACKHFCLPJI, ELAOOOJBCNO);
	}
};
