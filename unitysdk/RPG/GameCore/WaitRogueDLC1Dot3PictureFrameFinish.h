#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitRogueDLC1Dot3PictureFrameFinish; }

#define RPG_GAMECORE_WAITROGUEDLC1DOT3PICTUREFRAMEFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC72570)
#define RPG_GAMECORE_WAITROGUEDLC1DOT3PICTUREFRAMEFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC72580)
#define RPG_GAMECORE_WAITROGUEDLC1DOT3PICTUREFRAMEFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC724B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueDLC1Dot3PictureFrameFinish_TypeDefinitionIndex = 22287;

	class WaitRogueDLC1Dot3PictureFrameFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEDLC1DOT3PICTUREFRAMEFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueDLC1Dot3PictureFrameFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueDLC1Dot3PictureFrameFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEDLC1DOT3PICTUREFRAMEFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueDLC1Dot3PictureFrameFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueDLC1Dot3PictureFrameFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEDLC1DOT3PICTUREFRAMEFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
