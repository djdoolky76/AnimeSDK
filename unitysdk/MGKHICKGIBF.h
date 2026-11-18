#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBDCAGEKHAJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CALIGLPABNP;
class DIAEPBNFKBO;
class DKPJAEANAPO;
class FKDBFFKIOFN;
namespace MoleMole::Battle { class Entity; }

#define MGKHICKGIBF_DNKCHIOOBDL_OFFSET UNITYSDK_OFFSET(0x1405C150)
#define MGKHICKGIBF_HNOOCCLOANE_OFFSET UNITYSDK_OFFSET(0x1405C100)
#define MGKHICKGIBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1405BEB0)

inline static constexpr unsigned int MGKHICKGIBF_TypeDefinitionIndex = 73946;

class MGKHICKGIBF : public ::BBDCAGEKHAJ
{
public:
	::DKPJAEANAPO* ONEFAGGPEFP; // 0x40
	::DIAEPBNFKBO* IEEMFFDFBHA; // 0x48
	::CALIGLPABNP* PFLOEOFIMBI; // 0x50
	::System::Single BDEDDEGJFKL; // 0x58
	::System::Single PBFBDBCMALP; // 0x5C
	::System::Single NCCDJLDKFGA; // 0x60
	::System::Single NBPOIONKKBK; // 0x64

	::System::Void _ctor(::MoleMole::Battle::Entity* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MGKHICKGIBF__CTOR_OFFSET))(this, AMNIHACKELI);
	}

	::System::Int32 HNOOCCLOANE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKHICKGIBF_HNOOCCLOANE_OFFSET))(this);
	}

	::UnityEngine::Vector3 DNKCHIOOBDL(::FKDBFFKIOFN* LJBPECKCCEA)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::FKDBFFKIOFN*))((::PBYTE)hIl2Cpp + MGKHICKGIBF_DNKCHIOOBDL_OFFSET))(this, LJBPECKCCEA);
	}
};
