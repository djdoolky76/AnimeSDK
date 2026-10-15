#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereShowNumberType.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MFHGBPDJJPE;
namespace RPG::GameCore { class TargetEvaluator; }

#define MFHGBPDJJPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D12B500)
#define MFHGBPDJJPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D12B510)
#define MFHGBPDJJPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D12B4C0)

inline static constexpr unsigned int MFHGBPDJJPE_TypeDefinitionIndex = 22620;

	class MFHGBPDJJPE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::ElationTimeAtmosphereShowNumberType CBFGKOPANAK; // 0x20
		::RPG::GameCore::ElationTimeAtmosphereType GMPGDEINODK; // 0x24
		::System::Boolean GNDCCBNILML; // 0x28
		::System::Boolean FGFILICHKOH; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHGBPDJJPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MFHGBPDJJPE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MFHGBPDJJPE*))((::PBYTE)hIl2Cpp + MFHGBPDJJPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MFHGBPDJJPE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MFHGBPDJJPE*))((::PBYTE)hIl2Cpp + MFHGBPDJJPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
