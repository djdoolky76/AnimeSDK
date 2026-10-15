#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayAndWaitSimpleTalk; }
namespace RPG::GameCore { class SimpleTalkBackground; }
namespace RPG::GameCore { class SimpleTalkStyle; }
namespace RPG::GameCore { class SimpleTalkTargetBehavior; }

#define RPG_GAMECORE_PLAYANDWAITSIMPLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92C390)
#define RPG_GAMECORE_PLAYANDWAITSIMPLETALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D92C3A0)
#define RPG_GAMECORE_PLAYANDWAITSIMPLETALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D92C350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayAndWaitSimpleTalk_TypeDefinitionIndex = 21123;

	class PlayAndWaitSimpleTalk : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Boolean KeepDisplay; // 0x20
		::System::Boolean BlackMask; // 0x21
		::System::Boolean NeedFadeBlackMask; // 0x22
		::System::Boolean UseBackground; // 0x23
		::System::Boolean SkipFirstTalkBgFadeIn; // 0x24
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::SimpleTalkBackground*>* Backgrounds; // 0x28
		::System::Boolean UseTargetBehavior; // 0x30
		::System::Byte _padding1[0x7];
		::Il2CppArray<::RPG::GameCore::SimpleTalkTargetBehavior*>* TargetBehaviors; // 0x38
		::System::Boolean ChangeStyle; // 0x40
		::System::Byte _padding2[0x7];
		::Il2CppArray<::RPG::GameCore::SimpleTalkStyle*>* StyleList; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANDWAITSIMPLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayAndWaitSimpleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayAndWaitSimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANDWAITSIMPLETALK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayAndWaitSimpleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayAndWaitSimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANDWAITSIMPLETALK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
