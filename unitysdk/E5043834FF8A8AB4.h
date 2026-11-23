#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define E5043834FF8A8AB4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E5043834FF8A8AB4_TypeDefinitionIndex = 20877;

class E5043834FF8A8AB4 : public ::System::Object
{
public:
	::System::Int32 B9957DC49F39B6C9; // 0x10
	::System::Int32 EDD22AE318A5B861; // 0x14
	::UnityEngine::Mesh* F2F9C64408906D6F; // 0x18
	::System::Int32 F9F672C13731B935; // 0x20
	::System::Byte _padding0[0x4];
	::UnityEngine::Transform* E7A41DB667CBC570; // 0x28
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* B72A1B79CA080F41; // 0x30
	::Il2CppArray<::UnityEngine::Mesh*>* E1DCFCEBA8D25FE7; // 0x38
	::Il2CppArray<::UnityEngine::Vector3>* BFC7EE88CC5C520C; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5043834FF8A8AB4__CTOR_OFFSET))(this);
	}
};
