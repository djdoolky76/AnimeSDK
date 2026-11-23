#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABC_ENTITY_MONOENTITYVIEW_A0D77E1D4843E1DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoEntityView_A0D77E1D4843E1DA_TypeDefinitionIndex = 2804;

	class MonoEntityView_A0D77E1D4843E1DA : public ::System::Object
	{
	public:
		::System::Boolean E1EE9768787FFE6E; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single A66473435655ABC6; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOENTITYVIEW_A0D77E1D4843E1DA__CTOR_OFFSET))(this);
		}
	};
}
