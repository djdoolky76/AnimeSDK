#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ReadParamPosition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SkillParamMapping; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SKILLPARAMMAPPING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC23D0)
#define RPG_GAMECORE_SKILLPARAMMAPPING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC2200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillParamMapping_TypeDefinitionIndex = 18173;

	class SkillParamMapping : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AbilityName; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ReadParamPosition>* DynamicValues; // 0x18
		::System::Boolean WriteStance; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLPARAMMAPPING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillParamMapping* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillParamMapping*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLPARAMMAPPING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
