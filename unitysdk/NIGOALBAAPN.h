#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NIGOALBAAPN;
namespace RPG::GameCore { class LittleGameFireEffectParams; }

#define NIGOALBAAPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E5150)
#define NIGOALBAAPN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1E5160)
#define NIGOALBAAPN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1E5120)

inline static constexpr unsigned int NIGOALBAAPN_TypeDefinitionIndex = 21443;

	class NIGOALBAAPN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LittleGameFireEffectParams* EKKGNJDOANO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGOALBAAPN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NIGOALBAAPN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NIGOALBAAPN*))((::PBYTE)hIl2Cpp + NIGOALBAAPN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NIGOALBAAPN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NIGOALBAAPN*))((::PBYTE)hIl2Cpp + NIGOALBAAPN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
