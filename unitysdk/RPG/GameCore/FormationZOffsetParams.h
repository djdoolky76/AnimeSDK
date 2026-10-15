#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationZOffsetParams; }

#define RPG_GAMECORE_FORMATIONZOFFSETPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BE6E0)
#define RPG_GAMECORE_FORMATIONZOFFSETPARAMS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BE5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationZOffsetParams_TypeDefinitionIndex = 16574;

	class FormationZOffsetParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Offset; // 0x10
		::System::Single Yaw; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONZOFFSETPARAMS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationZOffsetParams* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationZOffsetParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONZOFFSETPARAMS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
