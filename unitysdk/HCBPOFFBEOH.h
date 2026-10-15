#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamageCounterStyle.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HCBPOFFBEOH;

#define HCBPOFFBEOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE5CD20)
#define HCBPOFFBEOH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE5CD30)
#define HCBPOFFBEOH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE5CCF0)

inline static constexpr unsigned int HCBPOFFBEOH_TypeDefinitionIndex = 23172;

	class HCBPOFFBEOH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DamageCounterStyle GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBPOFFBEOH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HCBPOFFBEOH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HCBPOFFBEOH*))((::PBYTE)hIl2Cpp + HCBPOFFBEOH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HCBPOFFBEOH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HCBPOFFBEOH*))((::PBYTE)hIl2Cpp + HCBPOFFBEOH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
