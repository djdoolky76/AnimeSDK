#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraTalkContent; }

#define RPG_GAMECORE_CHIMERATALKCONTENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BEEB0)
#define RPG_GAMECORE_CHIMERATALKCONTENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7BEEC0)
#define RPG_GAMECORE_CHIMERATALKCONTENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7BEAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTalkContent_TypeDefinitionIndex = 16009;

	class ChimeraTalkContent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ChimeraEmojiID; // 0x10
		::System::UInt32 ChimeraTalkContentID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONTENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTalkContent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTalkContent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONTENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTalkContent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTalkContent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONTENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
