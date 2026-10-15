#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RefreshFrameCapture; }

#define RPG_GAMECORE_REFRESHFRAMECAPTURE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D948BC0)
#define RPG_GAMECORE_REFRESHFRAMECAPTURE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D948BD0)
#define RPG_GAMECORE_REFRESHFRAMECAPTURE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D948B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshFrameCapture_TypeDefinitionIndex = 20275;

	class RefreshFrameCapture : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Immediate; // 0x18
		::System::Boolean NoPP; // 0x19
		::System::Boolean IncludeUI; // 0x1A
		::System::Boolean ToneMappingAfterCapture; // 0x1B
		::System::Boolean UseLastFrame; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFRAMECAPTURE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshFrameCapture* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshFrameCapture*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFRAMECAPTURE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshFrameCapture* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshFrameCapture*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFRAMECAPTURE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
