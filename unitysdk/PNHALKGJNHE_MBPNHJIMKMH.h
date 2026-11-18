#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPHKPALFIOC.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PNHALKGJNHE_MBPNHJIMKMH__CTOR_OFFSET UNITYSDK_OFFSET(0x945520)

inline static constexpr unsigned int PNHALKGJNHE_MBPNHJIMKMH_TypeDefinitionIndex = 29105;

struct alignas(8) PNHALKGJNHE_MBPNHJIMKMH
{
	::System::Int32 DFOJFLBIOFB; // 0x10
	::System::Int32 HLBKHEFJAPH; // 0x14
	::FPHKPALFIOC KBLIFPLNLCO; // 0x18
	::System::String* AOBKDBIHILA; // 0x30
	::System::String* JGFMLLCMIFA; // 0x38

	::System::Void _ctor(::System::Int32 JDJCDBJKCCP, ::System::Int32 DKOFFFNEFJC, ::FPHKPALFIOC& MECOFDHMKEB, ::System::String* IOJDLBCOIHH, ::System::String* DBDLBFIJKCM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::FPHKPALFIOC&, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PNHALKGJNHE_MBPNHJIMKMH__CTOR_OFFSET))(this, JDJCDBJKCCP, DKOFFFNEFJC, MECOFDHMKEB, IOJDLBCOIHH, DBDLBFIJKCM);
	}
};
