#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;

#define FMLGGJAPPPF_GDMABGEHNMC_BGLGJKPPAMJ_OFFSET UNITYSDK_OFFSET(0x14110260)
#define FMLGGJAPPPF_GDMABGEHNMC__CTOR_OFFSET UNITYSDK_OFFSET(0x14110250)

inline static constexpr unsigned int FMLGGJAPPPF_GDMABGEHNMC_TypeDefinitionIndex = 64622;

class FMLGGJAPPPF_GDMABGEHNMC : public ::System::Object
{
public:
	::IANDOOLAALI_NGKHGAPPFDA* NKGCDDCMBCF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_GDMABGEHNMC__CTOR_OFFSET))(this);
	}

	::System::Void BGLGJKPPAMJ(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_GDMABGEHNMC_BGLGJKPPAMJ_OFFSET))(this, NAPFALLANDL);
	}
};
