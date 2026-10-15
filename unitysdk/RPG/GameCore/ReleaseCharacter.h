#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ReleaseCharacter; }
namespace System { class String; }

#define RPG_GAMECORE_RELEASECHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D977AC0)
#define RPG_GAMECORE_RELEASECHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D977AD0)
#define RPG_GAMECORE_RELEASECHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D977A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReleaseCharacter_TypeDefinitionIndex = 20821;

	class ReleaseCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReleaseCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReleaseCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReleaseCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReleaseCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
