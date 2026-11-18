#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCONJOMJABJ.h"

class FKLMDAMIFBF;

#define NDJHHLGCINO_FFOOPJIJPHC_OFFSET UNITYSDK_OFFSET(0x16B65CF0)
#define NDJHHLGCINO_MLHLMLIOHAO_OFFSET UNITYSDK_OFFSET(0x16B65C60)
#define NDJHHLGCINO__CTOR_OFFSET UNITYSDK_OFFSET(0x16B65C30)

inline static constexpr unsigned int NDJHHLGCINO_TypeDefinitionIndex = 48399;

class NDJHHLGCINO : public ::MCONJOMJABJ
{
public:
	::System::Void _ctor(::FKLMDAMIFBF* HMOIMNEIIAK)
	{
		return ((::System::Void(*)(::PVOID, ::FKLMDAMIFBF*))((::PBYTE)hIl2Cpp + NDJHHLGCINO__CTOR_OFFSET))(this, HMOIMNEIIAK);
	}

	::System::Void MLHLMLIOHAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJHHLGCINO_MLHLMLIOHAO_OFFSET))(this);
	}

	::System::Void FFOOPJIJPHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJHHLGCINO_FFOOPJIJPHC_OFFSET))(this);
	}
};
