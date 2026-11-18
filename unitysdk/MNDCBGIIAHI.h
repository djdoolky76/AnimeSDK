#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADELBIEMCJL.h"
#include "unitysdk/ALIMLODBBJD.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MNDCBGIIAHI__CTOR_OFFSET UNITYSDK_OFFSET(0x127437F0)

inline static constexpr unsigned int MNDCBGIIAHI_TypeDefinitionIndex = 60736;

class MNDCBGIIAHI : public ::System::Object
{
public:
	::System::String* NFGFLEPHECP; // 0x10
	::System::String* FPJPGBLFELK; // 0x18
	::ALIMLODBBJD FPFKHEKPGNF; // 0x20
	::ADELBIEMCJL HBLNIDBGMLC; // 0x24
	::System::Boolean MJBAFKLLNNE; // 0x28
	::System::Boolean HPDGFLCCOGL; // 0x29
	::System::Boolean LIIHBJCCMBD; // 0x2A
	::System::Boolean CJJIJAHHOFP; // 0x2B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDCBGIIAHI__CTOR_OFFSET))(this);
	}
};
