#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBPBNMALPHD;

#define BFMAKOAGGCP_EEMMCFCIHGI_JIOOAMCAJNO_OFFSET UNITYSDK_OFFSET(0x128A5490)
#define BFMAKOAGGCP_EEMMCFCIHGI__CTOR_OFFSET UNITYSDK_OFFSET(0x128A5480)

inline static constexpr unsigned int BFMAKOAGGCP_EEMMCFCIHGI_TypeDefinitionIndex = 56145;

class BFMAKOAGGCP_EEMMCFCIHGI : public ::System::Object
{
public:
	::GBPBNMALPHD* COBBFANEKIF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMAKOAGGCP_EEMMCFCIHGI__CTOR_OFFSET))(this);
	}

	::System::Boolean JIOOAMCAJNO(::GBPBNMALPHD* JEGBBOJPEHL)
	{
		return ((::System::Boolean(*)(::PVOID, ::GBPBNMALPHD*))((::PBYTE)hIl2Cpp + BFMAKOAGGCP_EEMMCFCIHGI_JIOOAMCAJNO_OFFSET))(this, JEGBBOJPEHL);
	}
};
