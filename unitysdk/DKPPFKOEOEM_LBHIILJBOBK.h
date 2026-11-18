#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DKPPFKOEOEM_LBHIILJBOBK_AKHDBPFJKEP_OFFSET UNITYSDK_OFFSET(0x12BB5380)
#define DKPPFKOEOEM_LBHIILJBOBK_EFJJOEFDNNB_OFFSET UNITYSDK_OFFSET(0x12BB5370)
#define DKPPFKOEOEM_LBHIILJBOBK__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB5360)

inline static constexpr unsigned int DKPPFKOEOEM_LBHIILJBOBK_TypeDefinitionIndex = 53222;

class DKPPFKOEOEM_LBHIILJBOBK : public ::System::Object
{
public:
	::System::Boolean BFLKFFHACFG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_LBHIILJBOBK__CTOR_OFFSET))(this);
	}

	::System::Boolean EFJJOEFDNNB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_LBHIILJBOBK_EFJJOEFDNNB_OFFSET))(this);
	}

	::System::Void AKHDBPFJKEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_LBHIILJBOBK_AKHDBPFJKEP_OFFSET))(this);
	}
};
