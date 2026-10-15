#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CameraLookAtScreenRange; }

#define RPG_GAMECORE_CAMERALOOKATSCREENRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D556710)
#define RPG_GAMECORE_CAMERALOOKATSCREENRANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D556600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraLookAtScreenRange_TypeDefinitionIndex = 20506;

	class CameraLookAtScreenRange : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single XRange; // 0x10
		::System::Single YRange; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERALOOKATSCREENRANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CameraLookAtScreenRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CameraLookAtScreenRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERALOOKATSCREENRANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
