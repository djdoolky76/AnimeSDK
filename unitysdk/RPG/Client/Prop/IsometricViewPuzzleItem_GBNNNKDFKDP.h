#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_GBNNNKDFKDP_CTOR_OFFSET UNITYSDK_OFFSET(0xDCFF880)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int IsometricViewPuzzleItem_GBNNNKDFKDP_TypeDefinitionIndex = 78645;

	class IsometricViewPuzzleItem_GBNNNKDFKDP : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_GBNNNKDFKDP_CTOR_OFFSET))(this);
		}

	};
}
