#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAnimComposite; }
namespace RPG::GameCore { class PlanetFesAvatarAnimConfig; }

#define RPG_GAMECORE_PLANETFESAVATARANIMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D920B10)
#define RPG_GAMECORE_PLANETFESAVATARANIMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9209C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarAnimConfig_TypeDefinitionIndex = 16254;

	class PlanetFesAvatarAnimConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::PlanetFesAnimComposite*>* AnimComposite; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARANIMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesAvatarAnimConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesAvatarAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARANIMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
