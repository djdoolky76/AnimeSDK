#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightPreparationEffectSource; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTPAYLOAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF36610)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPreparationEffectPayload_TypeDefinitionIndex = 66025;

	class GridFightPreparationEffectPayload : public ::System::Object
	{
	public:
		::System::Object* UserObject; // 0x10
		::RPG::Client::GridFightPreparationEffectSource* EffectSource; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTPAYLOAD_CTOR_OFFSET))(this);
		}

	};
}
