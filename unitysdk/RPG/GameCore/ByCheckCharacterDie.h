#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class HGDOFGNAMDM;
namespace RPG::GameCore { class ByCheckCharacterDie; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKCHARACTERDIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D45F1D0)
#define RPG_GAMECORE_BYCHECKCHARACTERDIE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D45F380)
#define RPG_GAMECORE_BYCHECKCHARACTERDIE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D45F350)
#define RPG_GAMECORE_BYCHECKCHARACTERDIE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D45F1E0)
#define RPG_GAMECORE_BYCHECKCHARACTERDIE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D45F1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckCharacterDie_TypeDefinitionIndex = 23439;

	class ByCheckCharacterDie : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 CharacterID; // 0x20
		::System::Byte _padding0[0x4];
		::HGDOFGNAMDM* OverrideConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERDIE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckCharacterDie* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERDIE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckCharacterDie* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERDIE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterDie* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERDIE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterDie* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERDIE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
