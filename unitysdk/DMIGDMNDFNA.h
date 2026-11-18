#pragma once
#include "unitysdk/unitysdk.h"

class DMIGDMNDFNA_FOPDGANCCOF;

#define DMIGDMNDFNA_DJDJKILDPGP_OFFSET UNITYSDK_OFFSET(0x12425960)
#define DMIGDMNDFNA_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x12425D60)
#define DMIGDMNDFNA_KPAMIIKGPKD_OFFSET UNITYSDK_OFFSET(0x12425DF0)
#define DMIGDMNDFNA_MHCCELBKEON_OFFSET UNITYSDK_OFFSET(0x12425A10)
#define DMIGDMNDFNA__CTOR_OFFSET UNITYSDK_OFFSET(0x12425DD0)

inline static constexpr unsigned int DMIGDMNDFNA_TypeDefinitionIndex = 61918;

class DMIGDMNDFNA
{
public:
	::DMIGDMNDFNA_FOPDGANCCOF* MLPIAFHMBLI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIGDMNDFNA__CTOR_OFFSET))(this);
	}

	::System::Void DJDJKILDPGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIGDMNDFNA_DJDJKILDPGP_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIGDMNDFNA_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void KPAMIIKGPKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIGDMNDFNA_KPAMIIKGPKD_OFFSET))(this);
	}

	::System::Void MHCCELBKEON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIGDMNDFNA_MHCCELBKEON_OFFSET))(this);
	}
};
