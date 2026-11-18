#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOUIGACHAITEMPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18F81D50)

inline static constexpr unsigned int MonoUIGachaItemParam_TypeDefinitionIndex = 52936;

class MonoUIGachaItemParam : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* configItems; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIGACHAITEMPARAM__CTOR_OFFSET))(this);
	}
};
