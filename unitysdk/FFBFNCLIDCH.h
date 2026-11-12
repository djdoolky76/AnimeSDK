#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace System { class String; }

#define FFBFNCLIDCH_ACLLJEHELEN_OFFSET UNITYSDK_OFFSET(0x1664B090)
#define FFBFNCLIDCH_AOJAODJOANA_OFFSET UNITYSDK_OFFSET(0x1664B000)
#define FFBFNCLIDCH_KLFHJEEMMMF_OFFSET UNITYSDK_OFFSET(0x1664B040)

inline static constexpr unsigned int FFBFNCLIDCH_TypeDefinitionIndex = 58927;

	class FFBFNCLIDCH : public ::System::Object
	{
	public:
		static ::System::Boolean AOJAODJOANA(::RPG::GameCore::AvatarSpecialUltraType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarSpecialUltraType))((::PBYTE)hIl2Cpp + FFBFNCLIDCH_AOJAODJOANA_OFFSET))(a1);
		}

		static ::System::Boolean KLFHJEEMMMF(::RPG::GameCore::AvatarSpecialUltraType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarSpecialUltraType))((::PBYTE)hIl2Cpp + FFBFNCLIDCH_KLFHJEEMMMF_OFFSET))(a1);
		}

		static ::RPG::GameCore::AbilityProperty ACLLJEHELEN(::RPG::GameCore::AvatarUltraSkillConfigRow* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::AbilityProperty(*)(::RPG::GameCore::AvatarUltraSkillConfigRow*, ::System::String*))((::PBYTE)hIl2Cpp + FFBFNCLIDCH_ACLLJEHELEN_OFFSET))(a1, a2);
		}

	};
