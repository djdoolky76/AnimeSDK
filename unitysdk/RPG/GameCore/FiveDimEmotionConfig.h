#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmotionEnum.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEmotionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMEMOTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68D460)
#define RPG_GAMECORE_FIVEDIMEMOTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68D350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEmotionConfig_TypeDefinitionIndex = 16715;

	class FiveDimEmotionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EmotionEnum Emotion; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* SoundEvent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEMOTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEmotionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEmotionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEMOTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
