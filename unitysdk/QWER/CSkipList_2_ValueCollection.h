#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SpookyHash_U.h"

namespace QWER { template <typename T1, typename T2> class CSkipList_2; }

namespace QWER
{
	inline static constexpr unsigned int CSkipList_2_ValueCollection_TypeDefinitionIndex = 9133;

	template <typename T1, typename T2>
	class CSkipList_2_ValueCollection : public ::System::Object
	{
	public:
		::QWER::CSkipList_2<T1, ::UnityEngine::SpookyHash_U>* m_oOwner; // 0x0
	};
}
