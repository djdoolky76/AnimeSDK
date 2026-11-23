#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseEvent.h"

#define ABC_UI_MONOUIAUDIOBEHAVIOR_E007FC2DEF6CE6A1_OFFSET UNITYSDK_OFFSET(0x1F5F370)
#define ABC_UI_MONOUIAUDIOBEHAVIOR_E629A49308E1855F_OFFSET UNITYSDK_OFFSET(0x1F5F360)
#define ABC_UI_MONOUIAUDIOBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5F320)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoUIAudioBehavior_TypeDefinitionIndex = 7827;

	class MonoUIAudioBehavior
	{
	public:
		::ABC::Config::WwiseEvent _showAudioEvent; // 0x28
		::ABC::Config::WwiseEvent _hideAudioEvent; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUDIOBEHAVIOR__CTOR_OFFSET))(this);
		}

		::ABC::Config::WwiseEvent E007FC2DEF6CE6A1()
		{
			return ((::ABC::Config::WwiseEvent(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUDIOBEHAVIOR_E007FC2DEF6CE6A1_OFFSET))(this);
		}

		::ABC::Config::WwiseEvent E629A49308E1855F()
		{
			return ((::ABC::Config::WwiseEvent(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUDIOBEHAVIOR_E629A49308E1855F_OFFSET))(this);
		}
	};
}
