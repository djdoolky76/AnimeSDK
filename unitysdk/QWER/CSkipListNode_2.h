#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SpookyHash_U.h"

namespace QWER { template <typename T1, typename T2> class CSkipListLevel_2; }
namespace QWER { template <typename T1, typename T2> class CSkipList_2; }

namespace QWER
{
	inline static constexpr unsigned int CSkipListNode_2_TypeDefinitionIndex = 9127;

	template <typename T1, typename T2>
	class CSkipListNode_2 : public ::System::Object
	{
	public:
		::Il2CppArray<::QWER::CSkipListLevel_2<T1, ::UnityEngine::SpookyHash_U>*>* _Elements_k__BackingField; // 0x0
		::QWER::CSkipList_2<T1, ::UnityEngine::SpookyHash_U>* _Owner_k__BackingField; // 0x0
		T2 _Key_k__BackingField; // 0x0
		T2 _Value_k__BackingField; // 0x0
	};
}
