#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKKDCFLLIOF;
namespace System { class Action; }

#define MGDOBCKEJOF_DOCGMAIMGNJ_OFFSET UNITYSDK_OFFSET(0x12D845F0)
#define MGDOBCKEJOF_FIAHOKIKNPI_OFFSET UNITYSDK_OFFSET(0x12D845E0)
#define MGDOBCKEJOF_GFNEJOJAMKF_OFFSET UNITYSDK_OFFSET(0x12D84550)
#define MGDOBCKEJOF_HONDPMGLADB_OFFSET UNITYSDK_OFFSET(0x12D84590)
#define MGDOBCKEJOF_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x12D84600)
#define MGDOBCKEJOF_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x12D846D0)
#define MGDOBCKEJOF_PJFPEPHIEGE_OFFSET UNITYSDK_OFFSET(0x12D84670)
#define MGDOBCKEJOF__CTOR_OFFSET UNITYSDK_OFFSET(0x12D845D0)

inline static constexpr unsigned int MGDOBCKEJOF_TypeDefinitionIndex = 47891;

class MGDOBCKEJOF : public ::System::Object
{
public:
	::System::Action* PLEJMLIFFHG; // 0x10
	::IKKDCFLLIOF* FNFFDCJOEEJ; // 0x18
	::System::Boolean NCKCKOHHMOE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDOBCKEJOF__CTOR_OFFSET))(this);
	}

	::System::Void GFNEJOJAMKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDOBCKEJOF_GFNEJOJAMKF_OFFSET))(this);
	}

	::System::Void HONDPMGLADB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDOBCKEJOF_HONDPMGLADB_OFFSET))(this);
	}

	::IKKDCFLLIOF* FIAHOKIKNPI()
	{
		return ((::IKKDCFLLIOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDOBCKEJOF_FIAHOKIKNPI_OFFSET))(this);
	}

	::System::Boolean DOCGMAIMGNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDOBCKEJOF_DOCGMAIMGNJ_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG(::IKKDCFLLIOF* OFJCKDMPPFO, ::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::IKKDCFLLIOF*, ::System::Action*))((::PBYTE)hIl2Cpp + MGDOBCKEJOF_LCJEELHBNHG_OFFSET))(this, OFJCKDMPPFO, PABLEDCGDGM);
	}

	::System::Void PJFPEPHIEGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDOBCKEJOF_PJFPEPHIEGE_OFFSET))(this);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDOBCKEJOF_OKLLFEIJKHN_OFFSET))(this);
	}
};
