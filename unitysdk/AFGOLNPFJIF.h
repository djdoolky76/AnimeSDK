#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AFGOLNPFJIF;
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElationCharacterUIConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define AFGOLNPFJIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB4F40)
#define AFGOLNPFJIF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCB4F50)
#define AFGOLNPFJIF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCB4F10)

inline static constexpr unsigned int AFGOLNPFJIF_TypeDefinitionIndex = 23171;

	class AFGOLNPFJIF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::ElationCharacterUIConfig* OLOKHEMMGOH; // 0x20
		::System::Boolean EKGDOELGLFK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFGOLNPFJIF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AFGOLNPFJIF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AFGOLNPFJIF*))((::PBYTE)hIl2Cpp + AFGOLNPFJIF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AFGOLNPFJIF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AFGOLNPFJIF*))((::PBYTE)hIl2Cpp + AFGOLNPFJIF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
