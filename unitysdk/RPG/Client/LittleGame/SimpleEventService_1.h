#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { template <typename T> class IContext_1; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleEventService_1_TypeDefinitionIndex = 76521;

	template <typename T>
	class SimpleEventService_1 : public ::System::Object
	{
	public:
		::Entitas::IContext_1<T>* _Context; // 0x0
		::System::Int32 _EventCenterEntityID; // 0x0
		// static const ::System::Object INVALID_SOURCE_ID; // 0x0
		// static const ::System::Object INVALID_RUNTIME_ID; // 0x0
		// static const ::System::Object NONE_SOURCE_ID; // 0x0
		// static const ::System::Object INVALID_ENTITY_ID; // 0x0
	};
}
