#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLC1Dot3PictureFrame; }

#define RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B38A0)
#define RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B38B0)
#define RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B3870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3PictureFrame_TypeDefinitionIndex = 22286;

	class RogueDLC1Dot3PictureFrame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForceUsePicture; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3PictureFrame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3PictureFrame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3PictureFrame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3PictureFrame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
