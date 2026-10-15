#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/FadeInElementConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class SentenceElementConfig; }

#define RPG_GAMECORE_BOOKLET_SENTENCEELEMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D473C80)
#define RPG_GAMECORE_BOOKLET_SENTENCEELEMENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D473C90)
#define RPG_GAMECORE_BOOKLET_SENTENCEELEMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D475080)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int SentenceElementConfig_TypeDefinitionIndex = 24973;

	class SentenceElementConfig : public ::RPG::GameCore::Booklet::FadeInElementConfig
	{
	public:
		::System::UInt32 SentenceID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SENTENCEELEMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::SentenceElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::SentenceElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SENTENCEELEMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::SentenceElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::SentenceElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SENTENCEELEMENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
