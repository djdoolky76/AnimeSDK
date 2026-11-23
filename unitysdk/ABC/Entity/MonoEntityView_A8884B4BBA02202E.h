#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BA764B4A67FFE28D.h"

#define ABC_ENTITY_MONOENTITYVIEW_A8884B4BBA02202E_F1A90A1CBC8A9B14_OFFSET UNITYSDK_OFFSET(0x26F4F40)
#define ABC_ENTITY_MONOENTITYVIEW_A8884B4BBA02202E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoEntityView_A8884B4BBA02202E_TypeDefinitionIndex = 2810;

	class MonoEntityView_A8884B4BBA02202E : public ::BA764B4A67FFE28D
	{
	public:
		::System::Void F1A90A1CBC8A9B14(::System::Single A63A2A070210EF43)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOENTITYVIEW_A8884B4BBA02202E_F1A90A1CBC8A9B14_OFFSET))(this, A63A2A070210EF43);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOENTITYVIEW_A8884B4BBA02202E__CTOR_OFFSET))(this);
		}
	};
}
