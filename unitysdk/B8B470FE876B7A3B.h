#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E76932BE70884945.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define B8B470FE876B7A3B_B8835EB5F6F428D7_OFFSET UNITYSDK_OFFSET(0x2874CD0)
#define B8B470FE876B7A3B__CTOR_OFFSET UNITYSDK_OFFSET(0x2874E20)

inline static constexpr unsigned int B8B470FE876B7A3B_TypeDefinitionIndex = 16112;

class B8B470FE876B7A3B
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::E76932BE70884945>* A68ED35098D0F752; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8B470FE876B7A3B__CTOR_OFFSET))(this);
	}

	::System::Void B8835EB5F6F428D7(::UnityEngine::GameObject* BC86B53A2ACB6AD1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + B8B470FE876B7A3B_B8835EB5F6F428D7_OFFSET))(this, BC86B53A2ACB6AD1);
	}
};
