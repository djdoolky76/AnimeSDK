#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/B8AC70DD96553B07.h"

#define B88AE25E53F39EF3_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x387DAB0)
#define B88AE25E53F39EF3__CTOR_OFFSET UNITYSDK_OFFSET(0x387DBA0)

inline static constexpr unsigned int B88AE25E53F39EF3_TypeDefinitionIndex = 18035;

class B88AE25E53F39EF3 : public ::System::Object
{
public:
	::UnityEngine::B8AC70DD96553B07 BD8273AB04C4B760; // 0x10

	::System::Boolean E83F6F358E73B362(::B88AE25E53F39EF3* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::B88AE25E53F39EF3*))((::PBYTE)hIl2Cpp + B88AE25E53F39EF3_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor(::UnityEngine::B8AC70DD96553B07 BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::B8AC70DD96553B07))((::PBYTE)hIl2Cpp + B88AE25E53F39EF3__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}
};
