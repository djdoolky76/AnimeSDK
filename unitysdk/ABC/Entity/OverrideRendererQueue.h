#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ABC_ENTITY_OVERRIDERENDERERQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Entity
{
	inline static constexpr unsigned int OverrideRendererQueue_TypeDefinitionIndex = 8595;

	class OverrideRendererQueue : public ::System::Object
	{
	public:
		::System::String* RendererName; // 0x10
		::System::Int32 OverrideRenderQueue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_OVERRIDERENDERERQUEUE__CTOR_OFFSET))(this);
		}
	};
}
