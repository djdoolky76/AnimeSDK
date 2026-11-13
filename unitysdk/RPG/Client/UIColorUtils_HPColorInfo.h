#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CLIENT_UICOLORUTILS_HPCOLORINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A103AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIColorUtils_HPColorInfo_TypeDefinitionIndex = 75283;

	class UIColorUtils_HPColorInfo : public ::System::Object
	{
	public:
		::System::Boolean IsDanger; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Color HPColor; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS_HPCOLORINFO_CTOR_OFFSET))(this);
		}

	};
}
