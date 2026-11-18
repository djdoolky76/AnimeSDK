#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;

#define FMLGGJAPPPF_PIADAOGPIPM_ANANMJICCDA_OFFSET UNITYSDK_OFFSET(0x10EC27E0)
#define FMLGGJAPPPF_PIADAOGPIPM__CTOR_OFFSET UNITYSDK_OFFSET(0x10EC27D0)

inline static constexpr unsigned int FMLGGJAPPPF_PIADAOGPIPM_TypeDefinitionIndex = 64615;

class FMLGGJAPPPF_PIADAOGPIPM : public ::System::Object
{
public:
	::IANDOOLAALI_NGKHGAPPFDA* NKGCDDCMBCF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_PIADAOGPIPM__CTOR_OFFSET))(this);
	}

	::System::Void ANANMJICCDA(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_PIADAOGPIPM_ANANMJICCDA_OFFSET))(this, NAPFALLANDL);
	}
};
