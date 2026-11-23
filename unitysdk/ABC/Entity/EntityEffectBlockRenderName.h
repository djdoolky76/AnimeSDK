#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ABC_ENTITY_ENTITYEFFECTBLOCKRENDERNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Entity
{
	inline static constexpr unsigned int EntityEffectBlockRenderName_TypeDefinitionIndex = 8058;

	class EntityEffectBlockRenderName : public ::System::Object
	{
	public:
		::System::String* RendererName; // 0x10
		::System::Boolean HideOverlay; // 0x18
		::System::Boolean HideRenderer; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_ENTITYEFFECTBLOCKRENDERNAME__CTOR_OFFSET))(this);
		}
	};
}
