#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMapFaceConfig; }
namespace RPG::GameCore { class FiveDimNavMapConfig; }

#define RPG_GAMECORE_FIVEDIMNAVMAPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A15E0)
#define RPG_GAMECORE_FIVEDIMNAVMAPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A1430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimNavMapConfig_TypeDefinitionIndex = 18520;

	class FiveDimNavMapConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimMapFaceConfig*>* FaceList; // 0x10
		::System::Int16 UnitPixelCount; // 0x18
		::System::Boolean AlwaysShowEntryOnMap; // 0x1A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMNAVMAPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimNavMapConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimNavMapConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMNAVMAPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
