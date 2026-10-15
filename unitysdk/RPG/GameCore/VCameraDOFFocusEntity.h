#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DOFCocMethodType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VCameraDOFFocusEntity; }

#define RPG_GAMECORE_VCAMERADOFFOCUSENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7E2D0)
#define RPG_GAMECORE_VCAMERADOFFOCUSENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7DAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraDOFFocusEntity_TypeDefinitionIndex = 16423;

	class VCameraDOFFocusEntity : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Boolean Reset; // 0x11
		::System::Byte _padding0[0x2];
		::RPG::GameCore::DOFCocMethodType CocMethodType; // 0x14
		::System::Single FixedFocusDistance; // 0x18
		::System::Single FStop; // 0x1C
		::System::Single SensorWidth; // 0x20
		::System::Single NearTransitionRegion; // 0x24
		::System::Single FarTransitionRegion; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERADOFFOCUSENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraDOFFocusEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraDOFFocusEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERADOFFOCUSENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
