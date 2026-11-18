#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Concurrent { template <typename T> class BlockingCollection_1; }
namespace System::Threading { class CancellationTokenSource; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int BlockingCollection_1__GetConsumingEnumerable_d__68_TypeDefinitionIndex = 4003;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65, typename T66, typename T67, typename T68>
	class BlockingCollection_1__GetConsumingEnumerable_d__68 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T1 __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationToken __3__cancellationToken; // 0x0
		::System::Collections::Concurrent::BlockingCollection_1<T2>* __4__this; // 0x0
		::System::Threading::CancellationTokenSource* _linkedTokenSource_5__1; // 0x0
	};
}
