#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowGuideEvolveTalk; }

#define RPG_GAMECORE_SHOWGUIDEEVOLVETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADE410)
#define RPG_GAMECORE_SHOWGUIDEEVOLVETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADE420)
#define RPG_GAMECORE_SHOWGUIDEEVOLVETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADE3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowGuideEvolveTalk_TypeDefinitionIndex = 24329;

	class ShowGuideEvolveTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* TalkIDList; // 0x18
		::System::UInt32 Season; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEEVOLVETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGuideEvolveTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGuideEvolveTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEEVOLVETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGuideEvolveTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGuideEvolveTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEEVOLVETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
