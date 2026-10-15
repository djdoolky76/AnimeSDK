#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiniEmoEffectNodeVisible; }
namespace System { class String; }

#define RPG_GAMECORE_MINIEMOEFFECTNODEVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D87FBB0)
#define RPG_GAMECORE_MINIEMOEFFECTNODEVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D87FA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniEmoEffectNodeVisible_TypeDefinitionIndex = 21861;

	class MiniEmoEffectNodeVisible : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* NodePath; // 0x10
		::System::Boolean Visible; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIEMOEFFECTNODEVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniEmoEffectNodeVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniEmoEffectNodeVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIEMOEFFECTNODEVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
