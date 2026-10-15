#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OLDNLALHKOH;

#define OLDNLALHKOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D26B280)
#define OLDNLALHKOH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D26B290)
#define OLDNLALHKOH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D26B240)

inline static constexpr unsigned int OLDNLALHKOH_TypeDefinitionIndex = 24209;

	class OLDNLALHKOH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean KDHCICFNAOC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDNLALHKOH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OLDNLALHKOH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OLDNLALHKOH*))((::PBYTE)hIl2Cpp + OLDNLALHKOH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OLDNLALHKOH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OLDNLALHKOH*))((::PBYTE)hIl2Cpp + OLDNLALHKOH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
