#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TalkFigure; }
namespace System { class String; }

#define RPG_GAMECORE_TALKFIGURE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB54E80)
#define RPG_GAMECORE_TALKFIGURE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB54E90)
#define RPG_GAMECORE_TALKFIGURE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB54E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkFigure_TypeDefinitionIndex = 21927;

	class TalkFigure : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* ImagePath; // 0x20
		::System::Boolean TriggerSound; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKFIGURE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TalkFigure* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TalkFigure*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKFIGURE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TalkFigure* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TalkFigure*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKFIGURE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
