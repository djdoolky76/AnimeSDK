#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterReplaceOriginMaterial; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERREPLACEORIGINMATERIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D578C50)
#define RPG_GAMECORE_CHARACTERREPLACEORIGINMATERIAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D578C60)
#define RPG_GAMECORE_CHARACTERREPLACEORIGINMATERIAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D578C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReplaceOriginMaterial_TypeDefinitionIndex = 23844;

	class CharacterReplaceOriginMaterial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ReplaceKey; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEORIGINMATERIAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterReplaceOriginMaterial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterReplaceOriginMaterial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEORIGINMATERIAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterReplaceOriginMaterial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterReplaceOriginMaterial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEORIGINMATERIAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
