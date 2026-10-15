#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceCharacterID; }
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CFB90)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CFBA0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CFB40)

namespace RPG::GameCore
{
	class ComplexSkillAISourceCharacterID : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* CharacterIDGroup; // 0x18
		::System::UInt32 CharacterID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceCharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceCharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECHARACTERID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
