#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelLockableFeatureType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelLockFeature; }

#define RPG_GAMECORE_LEVELLOCKFEATURE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B26B0)
#define RPG_GAMECORE_LEVELLOCKFEATURE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7B26C0)
#define RPG_GAMECORE_LEVELLOCKFEATURE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7B2680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLockFeature_TypeDefinitionIndex = 23403;

	class LevelLockFeature : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LevelLockableFeatureType LockFeatureType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURE_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelLockFeature* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelLockFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURE_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelLockFeature* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelLockFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURE_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
