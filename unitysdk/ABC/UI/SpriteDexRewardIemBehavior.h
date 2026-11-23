#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ABC_UI_SPRITEDEXREWARDIEMBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::UI
{
	inline static constexpr unsigned int SpriteDexRewardIemBehavior_TypeDefinitionIndex = 1230;

	class SpriteDexRewardIemBehavior : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Index; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_SPRITEDEXREWARDIEMBEHAVIOR__CTOR_OFFSET))(this);
		}
	};
}
