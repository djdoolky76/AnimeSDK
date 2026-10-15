#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class ModifyShieldValueByNewShieldModifier; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define DNOAPIADICF_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD6A60)
#define DNOAPIADICF_OKJPJMNNMGF_OFFSET UNITYSDK_OFFSET(0x11FD70A0)
#define DNOAPIADICF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FD6AD0)

inline static constexpr unsigned int DNOAPIADICF_TypeDefinitionIndex = 55211;

	class DNOAPIADICF
	{
	public:
		::RPG::GameCore::StringHash IGDMHJBOOLE; // 0x28
		::RPG::GameCore::StringHash KNBEODCOLAC; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyShieldValueByNewShieldModifier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyShieldValueByNewShieldModifier*))((::PBYTE)hIl2Cpp + DNOAPIADICF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOAPIADICF_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedModifierInstance* OKJPJMNNMGF(::RPG::GameCore::AbilityComponent* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID, ::RPG::GameCore::AbilityComponent*, ::System::String*))((::PBYTE)hIl2Cpp + DNOAPIADICF_OKJPJMNNMGF_OFFSET))(this, a1, a2);
		}

	};
