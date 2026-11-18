#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBDCAGEKHAJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CALIGLPABNP;
class DIAEPBNFKBO;
class DKPJAEANAPO;
class FKDBFFKIOFN;
namespace MoleMole::Battle { class Entity; }

#define JKIJDEMBHKD_DNKCHIOOBDL_OFFSET UNITYSDK_OFFSET(0x1308E420)
#define JKIJDEMBHKD_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x1308ED00)
#define JKIJDEMBHKD_HNOOCCLOANE_OFFSET UNITYSDK_OFFSET(0x1308E3D0)
#define JKIJDEMBHKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1308E180)

inline static constexpr unsigned int JKIJDEMBHKD_TypeDefinitionIndex = 60064;

class JKIJDEMBHKD : public ::BBDCAGEKHAJ
{
public:
	::DKPJAEANAPO* ONEFAGGPEFP; // 0x40
	::CALIGLPABNP* PFLOEOFIMBI; // 0x48
	::DIAEPBNFKBO* IEEMFFDFBHA; // 0x50
	::System::Single NMALHDOPFCB; // 0x58
	::System::Single PBFBDBCMALP; // 0x5C
	::System::Single NCCDJLDKFGA; // 0x60

	::System::Void _ctor(::MoleMole::Battle::Entity* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JKIJDEMBHKD__CTOR_OFFSET))(this, AMNIHACKELI);
	}

	::System::Int32 HNOOCCLOANE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIJDEMBHKD_HNOOCCLOANE_OFFSET))(this);
	}

	::UnityEngine::Vector3 DNKCHIOOBDL(::FKDBFFKIOFN* LJBPECKCCEA)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::FKDBFFKIOFN*))((::PBYTE)hIl2Cpp + JKIJDEMBHKD_DNKCHIOOBDL_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Boolean FFCPIEDHBDP(::MoleMole::Battle::Entity* HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JKIJDEMBHKD_FFCPIEDHBDP_OFFSET))(this, HODAIDNDKHD);
	}
};
