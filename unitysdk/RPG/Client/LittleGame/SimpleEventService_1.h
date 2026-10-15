#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IContext; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleEventService_1_TypeDefinitionIndex = 76522;

	template <typename T>
	class SimpleEventService_1 : public ::System::Object
	{
	public:
		::Entitas::IContext* _Context; // 0x0
		::System::Int32 _EventCenterEntityID; // 0x0
		// static const ::System::Object INVALID_SOURCE_ID; // 0x0
		// static const ::System::Object INVALID_RUNTIME_ID; // 0x0
		// static const ::System::Object NONE_SOURCE_ID; // 0x0
		// static const ::System::Object INVALID_ENTITY_ID; // 0x0
	};
}
