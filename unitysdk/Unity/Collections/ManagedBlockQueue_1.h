#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { template <typename T> class ThreadLocal_1; }

namespace Unity::Collections
{
	inline static constexpr unsigned int ManagedBlockQueue_1_TypeDefinitionIndex = 18013;

	template <typename T>
	class ManagedBlockQueue_1 : public ::System::Object
	{
	public:
		::System::Int32 m_MaxItemsPerBlock; // 0x0
		::System::Object* m_PoolLock; // 0x0
		::System::Object* m_QueueLock; // 0x0
		::System::Object* m_PoolHead; // 0x0
		::System::Int32 m_PoolCount; // 0x0
		::System::Int32 m_MaxPoolBlocks; // 0x0
		::System::Object* m_FirstBlock; // 0x0
		::System::Object* m_LastBlock; // 0x0
		::System::Int32 m_CurrentRead; // 0x0
		::Il2CppArray<::System::Object*>* m_TlsWriteBlock; // 0x0
		::System::Int32 m_NextTlsSlot; // 0x0
		::System::Threading::ThreadLocal_1<::System::Int32>* m_ThreadSlot; // 0x0
		::System::Boolean m_Disposed; // 0x0
	};
}
