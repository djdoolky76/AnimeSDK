#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BA764B4A67FFE28D.h"

#define ABC_ENTITY_MONOENTITYVIEW_F1EE048D8268E992_F1A90A1CBC8A9B14_OFFSET UNITYSDK_OFFSET(0x26F52F0)
#define ABC_ENTITY_MONOENTITYVIEW_F1EE048D8268E992__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoEntityView_F1EE048D8268E992_TypeDefinitionIndex = 2809;

	class MonoEntityView_F1EE048D8268E992 : public ::BA764B4A67FFE28D
	{
	public:
		::System::Void F1A90A1CBC8A9B14(::System::Single A63A2A070210EF43)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOENTITYVIEW_F1EE048D8268E992_F1A90A1CBC8A9B14_OFFSET))(this, A63A2A070210EF43);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOENTITYVIEW_F1EE048D8268E992__CTOR_OFFSET))(this);
		}
	};
}
