#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;

#define FMLGGJAPPPF_APICOHNBOAD_GOIKHJMNDEB_OFFSET UNITYSDK_OFFSET(0x15EFAD40)
#define FMLGGJAPPPF_APICOHNBOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFAD30)

inline static constexpr unsigned int FMLGGJAPPPF_APICOHNBOAD_TypeDefinitionIndex = 64616;

class FMLGGJAPPPF_APICOHNBOAD : public ::System::Object
{
public:
	::IANDOOLAALI_NGKHGAPPFDA* NKGCDDCMBCF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_APICOHNBOAD__CTOR_OFFSET))(this);
	}

	::System::Void GOIKHJMNDEB(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_APICOHNBOAD_GOIKHJMNDEB_OFFSET))(this, NAPFALLANDL);
	}
};
