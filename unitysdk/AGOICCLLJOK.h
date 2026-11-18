#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMILFPBMCKH;
class HBEBFHNELBM;

#define AGOICCLLJOK_HPEENMKKKEM_OFFSET UNITYSDK_OFFSET(0x14350B50)
#define AGOICCLLJOK__CTOR_OFFSET UNITYSDK_OFFSET(0x14350B40)

inline static constexpr unsigned int AGOICCLLJOK_TypeDefinitionIndex = 67282;

class AGOICCLLJOK : public ::System::Object
{
public:
	::AMILFPBMCKH* DEKJDEPKKLH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOICCLLJOK__CTOR_OFFSET))(this);
	}

	::HBEBFHNELBM* HPEENMKKKEM()
	{
		return ((::HBEBFHNELBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOICCLLJOK_HPEENMKKKEM_OFFSET))(this);
	}
};
