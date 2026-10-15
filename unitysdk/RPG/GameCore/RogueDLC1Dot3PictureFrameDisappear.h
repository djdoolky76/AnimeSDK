#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLC1Dot3PictureFrameDisappear; }

#define RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D986150)
#define RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D986160)
#define RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D986090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3PictureFrameDisappear_TypeDefinitionIndex = 20808;

	class RogueDLC1Dot3PictureFrameDisappear : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
