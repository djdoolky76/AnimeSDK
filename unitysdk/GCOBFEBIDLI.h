#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCDKBCGNDLE.h"
#include "unitysdk/EBGCNKJOFAL.h"
#include "unitysdk/EHOOLLACPFF.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/GBKFEKIBCEA.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class InteractionSpecialParamBase; }
namespace System { class String; }

#define GCOBFEBIDLI_CMDMHCNKJDB_OFFSET UNITYSDK_OFFSET(0x6C2E90)
#define GCOBFEBIDLI_DDIALODIKLI_OFFSET UNITYSDK_OFFSET(0x6C2DE0)
#define GCOBFEBIDLI_PNLHPHHJFOP_OFFSET UNITYSDK_OFFSET(0x6C2EE0)
#define GCOBFEBIDLI_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x6C2E30)
#define GCOBFEBIDLI__CTOR_OFFSET UNITYSDK_OFFSET(0x6C2D40)

inline static constexpr unsigned int GCOBFEBIDLI_TypeDefinitionIndex = 91031;

struct alignas(8) GCOBFEBIDLI
{
	::System::Int32 KOMCHMAIGIL; // 0x10
	::Foundation::ViewObject::GroupMemberIdentifier EOJAFFGKIAG; // 0x14
	::System::Byte _padding0[0x4];
	::System::String* MGEDBKBHJPM; // 0x20
	::System::Int32 PADMMLMDJAM; // 0x28
	::System::Int32 HLBKHEFJAPH; // 0x2C
	::GBKFEKIBCEA OGDKIDBHCGO; // 0x30
	::System::Boolean FMPPNPLHFIP; // 0x34
	::System::Byte _padding1[0x3];
	::System::Single DHNKFNEPKAO; // 0x38
	::BCDKBCGNDLE LJJDFDHKIKP; // 0x3C
	::EHOOLLACPFF HDNHODNPJEA; // 0x40
	::System::Int32 BLCEPFCGFLF; // 0x44
	::System::String* FAIOLCDEHEK; // 0x48
	::EBGCNKJOFAL DOMBLIJFEKF; // 0x50
	::System::Byte _padding2[0x4];
	::MoleMole::InteractionSpecialParamBase* GNLBJADOFMK; // 0x58

	::System::Void _ctor(::System::Int32 COMDNFILAIC, ::Foundation::ViewObject::GroupMemberIdentifier OIEMPMGCNPD, ::System::Int32 AMKBLKPDDKH, ::System::Int32 DKOFFFNEFJC, ::System::String* HIAIKHDFCLN, ::GBKFEKIBCEA DCKLIOLOCGP, ::System::Boolean NGNENBNBOBL, ::System::Single AEPFEEACPCF, ::BCDKBCGNDLE HHAANFCPOBC, ::EHOOLLACPFF IIMOMACPJEH, ::System::Int32 EHDLEOPFKDN, ::System::String* ONJNNPBAJDP, ::EBGCNKJOFAL CPGGKPIGANE, ::MoleMole::InteractionSpecialParamBase* NBBBINJKECC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::Int32, ::System::Int32, ::System::String*, ::GBKFEKIBCEA, ::System::Boolean, ::System::Single, ::BCDKBCGNDLE, ::EHOOLLACPFF, ::System::Int32, ::System::String*, ::EBGCNKJOFAL, ::MoleMole::InteractionSpecialParamBase*))((::PBYTE)hIl2Cpp + GCOBFEBIDLI__CTOR_OFFSET))(this, COMDNFILAIC, OIEMPMGCNPD, AMKBLKPDDKH, DKOFFFNEFJC, HIAIKHDFCLN, DCKLIOLOCGP, NGNENBNBOBL, AEPFEEACPCF, HHAANFCPOBC, IIMOMACPJEH, EHDLEOPFKDN, ONJNNPBAJDP, CPGGKPIGANE, NBBBINJKECC);
	}

	::System::Boolean DDIALODIKLI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOBFEBIDLI_DDIALODIKLI_OFFSET))(this);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOBFEBIDLI_PNNJKJEOHAL_OFFSET))(this);
	}

	::System::Boolean CMDMHCNKJDB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOBFEBIDLI_CMDMHCNKJDB_OFFSET))(this);
	}

	::System::Boolean PNLHPHHJFOP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOBFEBIDLI_PNLHPHHJFOP_OFFSET))(this);
	}
};
