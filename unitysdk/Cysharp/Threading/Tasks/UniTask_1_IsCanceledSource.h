#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_1_IsCanceledSource_TypeDefinitionIndex = 38383;

	template <typename T>
	class UniTask_1_IsCanceledSource : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskSource* source; // 0x0
	};
}
