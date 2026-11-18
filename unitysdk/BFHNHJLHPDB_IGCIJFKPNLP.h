#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFHNHJLHPDB_KCKGAEJMMGI;
class EGFKFNHAHKL;

#define BFHNHJLHPDB_IGCIJFKPNLP_OELCJAFGHBA_OFFSET UNITYSDK_OFFSET(0x12D21340)
#define BFHNHJLHPDB_IGCIJFKPNLP__CTOR_OFFSET UNITYSDK_OFFSET(0x12D21330)

inline static constexpr unsigned int BFHNHJLHPDB_IGCIJFKPNLP_TypeDefinitionIndex = 45392;

class BFHNHJLHPDB_IGCIJFKPNLP : public ::System::Object
{
public:
	::BFHNHJLHPDB_KCKGAEJMMGI* FGBNBFHOKAA; // 0x10
	::System::UInt32 DAOGCKMMPIP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHNHJLHPDB_IGCIJFKPNLP__CTOR_OFFSET))(this);
	}

	::System::Void OELCJAFGHBA(::EGFKFNHAHKL* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::EGFKFNHAHKL*))((::PBYTE)hIl2Cpp + BFHNHJLHPDB_IGCIJFKPNLP_OELCJAFGHBA_OFFSET))(this, GLAOEHCGCFO);
	}
};
