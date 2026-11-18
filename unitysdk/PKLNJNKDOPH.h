#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class COMOBAHMOKF;
class MLLODDNIAKE;
class PDDKHKKCENB;
namespace System { class String; }

#define PKLNJNKDOPH_DOCGMAIMGNJ_OFFSET UNITYSDK_OFFSET(0x1BF207D0)
#define PKLNJNKDOPH_EOCAAAHIEKL_OFFSET UNITYSDK_OFFSET(0x1BF20660)
#define PKLNJNKDOPH_NCNNMNLJMCD_OFFSET UNITYSDK_OFFSET(0x1BF207C0)
#define PKLNJNKDOPH_NKJODPLJJKJ_OFFSET UNITYSDK_OFFSET(0x1BF20760)
#define PKLNJNKDOPH_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x1BF207E0)
#define PKLNJNKDOPH_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1BF20850)
#define PKLNJNKDOPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF20630)

inline static constexpr unsigned int PKLNJNKDOPH_TypeDefinitionIndex = 81001;

class PKLNJNKDOPH : public ::System::Object
{
public:
	::MoleMole::EntityHandle KOFMLNEJIPG; // 0x10
	::MLLODDNIAKE* CICNHLHKOGD; // 0x20
	::COMOBAHMOKF* ONCPHGEGDPC; // 0x28
	::System::Single MIALAHPDEAI; // 0x30
	::System::Boolean LMIICPBLIOB; // 0x34
	::System::Boolean NCKCKOHHMOE; // 0x35
	::System::Byte _padding0[0x2];
	::System::Int32 EBHLMLGJIHA; // 0x38

	::System::Void _ctor(::MoleMole::EntityHandle OAMCPEJPHLP, ::COMOBAHMOKF* NFJECIGPFOL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::COMOBAHMOKF*))((::PBYTE)hIl2Cpp + PKLNJNKDOPH__CTOR_OFFSET))(this, OAMCPEJPHLP, NFJECIGPFOL);
	}

	::System::String* NKJODPLJJKJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLNJNKDOPH_NKJODPLJJKJ_OFFSET))(this);
	}

	::PDDKHKKCENB* EOCAAAHIEKL()
	{
		return ((::PDDKHKKCENB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLNJNKDOPH_EOCAAAHIEKL_OFFSET))(this);
	}

	::MoleMole::EntityHandle NCNNMNLJMCD()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLNJNKDOPH_NCNNMNLJMCD_OFFSET))(this);
	}

	::System::Boolean DOCGMAIMGNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLNJNKDOPH_DOCGMAIMGNJ_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ(::System::Boolean ACJNEHDOIEC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKLNJNKDOPH_PGHAJOMNDDJ_OFFSET))(this, ACJNEHDOIEC);
	}

	::System::Void PLPONJAKNEB(::System::Single JKNJECPCCAC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKLNJNKDOPH_PLPONJAKNEB_OFFSET))(this, JKNJECPCCAC);
	}
};
