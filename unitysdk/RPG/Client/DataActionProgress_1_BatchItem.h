#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGPCBBIOGLB;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int DataActionProgress_1_BatchItem_TypeDefinitionIndex = 59547;

	template <typename T>
	class DataActionProgress_1_BatchItem : public ::System::Object
	{
	public:
		::KGPCBBIOGLB* Data; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* Items; // 0x0
	};
}
