#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SpookyHash_U.h"

namespace QWER { template <typename T1, typename T2> class CSkipListNode_2; }

namespace QWER
{
	inline static constexpr unsigned int CSkipListLevel_2_TypeDefinitionIndex = 9126;

	template <typename T1, typename T2>
	class CSkipListLevel_2 : public ::System::Object
	{
	public:
		::QWER::CSkipListNode_2<T1, ::UnityEngine::SpookyHash_U>* _Next_k__BackingField; // 0x0
		::QWER::CSkipListNode_2<T1, ::UnityEngine::SpookyHash_U>* _Previous_k__BackingField; // 0x0
		::System::Int32 _Span_k__BackingField; // 0x0
	};
}
