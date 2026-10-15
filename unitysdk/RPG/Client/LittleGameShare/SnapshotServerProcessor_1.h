#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEKIOONKCIB;
namespace Entitas { template <typename T> class IContext_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotServerProcessor_1_TypeDefinitionIndex = 36940;

	template <typename T>
	class SnapshotServerProcessor_1 : public ::System::Object
	{
	public:
		::AEKIOONKCIB* _Instance; // 0x0
		::Entitas::IContext_1<T>* _Context; // 0x0
		::System::Int32 _ReplicatedComponentIndex; // 0x0
	};
}
