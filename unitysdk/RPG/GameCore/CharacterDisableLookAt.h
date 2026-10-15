#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterDisableLookAt; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERDISABLELOOKAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56FD10)
#define RPG_GAMECORE_CHARACTERDISABLELOOKAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56FD20)
#define RPG_GAMECORE_CHARACTERDISABLELOOKAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56FCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterDisableLookAt_TypeDefinitionIndex = 20867;

	class CharacterDisableLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean TargetIsOwner; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* CharacterUniqueName; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Boolean Disable; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDISABLELOOKAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterDisableLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterDisableLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDISABLELOOKAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterDisableLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterDisableLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDISABLELOOKAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
