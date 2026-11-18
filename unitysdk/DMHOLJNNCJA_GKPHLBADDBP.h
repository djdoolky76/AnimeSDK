#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNCGCMHIOGN;

#define DMHOLJNNCJA_GKPHLBADDBP_BFGDCONFBHG_OFFSET UNITYSDK_OFFSET(0x13457CA0)
#define DMHOLJNNCJA_GKPHLBADDBP__CTOR_OFFSET UNITYSDK_OFFSET(0x13457C90)

inline static constexpr unsigned int DMHOLJNNCJA_GKPHLBADDBP_TypeDefinitionIndex = 46952;

class DMHOLJNNCJA_GKPHLBADDBP : public ::System::Object
{
public:
	::System::UInt32 FIOCHBBFGLA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_GKPHLBADDBP__CTOR_OFFSET))(this);
	}

	::System::Boolean BFGDCONFBHG(::PNCGCMHIOGN* NOCCODBMGFP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNCGCMHIOGN*))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_GKPHLBADDBP_BFGDCONFBHG_OFFSET))(this, NOCCODBMGFP);
	}
};
