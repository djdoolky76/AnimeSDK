#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class ByCheckTurnCountMatch; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define DNHLHDPJDNN_COAGLHPJJII_OFFSET UNITYSDK_OFFSET(0x119622A0)
#define DNHLHDPJDNN_CTOR_OFFSET UNITYSDK_OFFSET(0x11962030)
#define DNHLHDPJDNN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11962120)
#define DNHLHDPJDNN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x119621F0)
#define DNHLHDPJDNN_GGHIDBNAJFA_OFFSET UNITYSDK_OFFSET(0x119623F0)

inline static constexpr unsigned int DNHLHDPJDNN_TypeDefinitionIndex = 57974;

	class DNHLHDPJDNN
	{
	public:
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x28
		::RPG::GameCore::TeamType AKCDGGOOBKG; // 0x30
		::System::UInt32 IHCPGAIAJBL; // 0x34
		::System::UInt32 EKEOEPKNJDC; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckTurnCountMatch* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckTurnCountMatch*))((::PBYTE)hIl2Cpp + DNHLHDPJDNN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLHDPJDNN_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLHDPJDNN_EVALUATE_OFFSET))(this);
		}

		::System::Void COAGLHPJJII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLHDPJDNN_COAGLHPJJII_OFFSET))(this);
		}

		::System::Void GGHIDBNAJFA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DNHLHDPJDNN_GGHIDBNAJFA_OFFSET))(this, a1);
		}

	};
