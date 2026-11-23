#pragma once
#include "unitysdk/unitysdk.h"

namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Object; }

#define FB44A8EE635F7557_E20A978BCA29B7D3_BCE38589ED4EF93E_OFFSET UNITYSDK_OFFSET(0x16DFCA0)
#define FB44A8EE635F7557_E20A978BCA29B7D3__CTOR_OFFSET UNITYSDK_OFFSET(0x403A750)

inline static constexpr unsigned int FB44A8EE635F7557_E20A978BCA29B7D3_TypeDefinitionIndex = 20391;

class FB44A8EE635F7557_E20A978BCA29B7D3
{
public:
	::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*>* A19C736BC127A000; // 0x60

	::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*>* BCE38589ED4EF93E()
	{
		return ((::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FB44A8EE635F7557_E20A978BCA29B7D3_BCE38589ED4EF93E_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB44A8EE635F7557_E20A978BCA29B7D3__CTOR_OFFSET))(this);
	}
};
