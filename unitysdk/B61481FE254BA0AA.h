#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E18051FFFF1746BF/A6278676CF7F5274.h"
#include "unitysdk/F5D9B2730D543D46/B22D1632AF3C5F18.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define B61481FE254BA0AA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B61481FE254BA0AA_TypeDefinitionIndex = 5029;

class B61481FE254BA0AA : public ::System::Object
{
public:
	::UnityEngine::Vector2 FAF8C63C9A83F6FA; // 0x10
	::System::Collections::Generic::List_1<::F5D9B2730D543D46::B22D1632AF3C5F18>* A8B29827878F7F68; // 0x18
	::E18051FFFF1746BF::A6278676CF7F5274 A8CD59771ADED47B; // 0x20
	::System::Single FF49DAB3CDC0F786; // 0x24
	::UnityEngine::Vector2 EE8B505B9D2B1840; // 0x28
	::UnityEngine::Vector2 EB26D43C1064B950; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B61481FE254BA0AA__CTOR_OFFSET))(this);
	}
};
