#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MCIIEMOJFLO;

#define MCIIEMOJFLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB870A0)
#define MCIIEMOJFLO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1BB870B0)
#define MCIIEMOJFLO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1BB87060)

inline static constexpr unsigned int MCIIEMOJFLO_TypeDefinitionIndex = 21840;

	class MCIIEMOJFLO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean AALCCPJCBME; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIIEMOJFLO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MCIIEMOJFLO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MCIIEMOJFLO*))((::PBYTE)hIl2Cpp + MCIIEMOJFLO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MCIIEMOJFLO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MCIIEMOJFLO*))((::PBYTE)hIl2Cpp + MCIIEMOJFLO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
