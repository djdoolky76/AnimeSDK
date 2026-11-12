#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LDGFOHKLOII;
namespace RPG::GameCore { class TargetEvaluator; }

#define LDGFOHKLOII_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D7140)
#define LDGFOHKLOII_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E2D7150)
#define LDGFOHKLOII_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E2D7110)

inline static constexpr unsigned int LDGFOHKLOII_TypeDefinitionIndex = 22735;

	class LDGFOHKLOII : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGFOHKLOII_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LDGFOHKLOII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDGFOHKLOII*))((::PBYTE)hIl2Cpp + LDGFOHKLOII_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LDGFOHKLOII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDGFOHKLOII*))((::PBYTE)hIl2Cpp + LDGFOHKLOII_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
