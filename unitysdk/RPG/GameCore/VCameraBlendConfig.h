#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraBlendConfig; }

#define RPG_GAMECORE_VCAMERABLENDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4C5A0)
#define RPG_GAMECORE_VCAMERABLENDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC4C5B0)
#define RPG_GAMECORE_VCAMERABLENDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC4C570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraBlendConfig_TypeDefinitionIndex = 20281;

	class VCameraBlendConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLENDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraBlendConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraBlendConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLENDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraBlendConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraBlendConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLENDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
