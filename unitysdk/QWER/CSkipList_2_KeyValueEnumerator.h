#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SpookyHash_U.h"

namespace QWER { template <typename T1, typename T2> class CSkipListNode_2; }
namespace QWER { template <typename T1, typename T2> class CSkipList_2; }

namespace QWER
{
	inline static constexpr unsigned int CSkipList_2_KeyValueEnumerator_TypeDefinitionIndex = 9129;

	template <typename T1, typename T2>
	class CSkipList_2_KeyValueEnumerator : public ::System::Object
	{
	public:
		::QWER::CSkipListNode_2<T1, ::UnityEngine::SpookyHash_U>* m_oNode; // 0x0
		::QWER::CSkipList_2<T1, ::UnityEngine::SpookyHash_U>* m_oOwner; // 0x0
	};
}
