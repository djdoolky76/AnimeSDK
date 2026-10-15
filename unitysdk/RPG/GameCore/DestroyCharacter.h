#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DestroyCharacter; }
namespace System { class String; }

#define RPG_GAMECORE_DESTROYCHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CEEF0)
#define RPG_GAMECORE_DESTROYCHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CEF00)
#define RPG_GAMECORE_DESTROYCHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CEEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyCharacter_TypeDefinitionIndex = 21693;

	class DestroyCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYCHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYCHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYCHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
