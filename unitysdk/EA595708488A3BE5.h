#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E18051FFFF1746BF/EAE15A099F8CE1B2.h"
#include "unitysdk/F5D9B2730D543D46/B22D1632AF3C5F18.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define EA595708488A3BE5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EA595708488A3BE5_TypeDefinitionIndex = 4732;

class EA595708488A3BE5 : public ::System::Object
{
public:
	::UnityEngine::Vector2 FAF8C63C9A83F6FA; // 0x10
	::System::Collections::Generic::List_1<::F5D9B2730D543D46::B22D1632AF3C5F18>* A8B29827878F7F68; // 0x18
	::E18051FFFF1746BF::EAE15A099F8CE1B2 A8CD59771ADED47B; // 0x20
	::System::Single FF49DAB3CDC0F786; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA595708488A3BE5__CTOR_OFFSET))(this);
	}
};
