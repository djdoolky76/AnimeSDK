#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightShowGuideHintWithText; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D742290)
#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7422A0)
#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D742260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowGuideHintWithText_TypeDefinitionIndex = 19974;

	class GridFightShowGuideHintWithText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TalkID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TargetEvent; // 0x20
		::System::Boolean IsBegin; // 0x28
		::System::Boolean IsEnd; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightShowGuideHintWithText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightShowGuideHintWithText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightShowGuideHintWithText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightShowGuideHintWithText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
