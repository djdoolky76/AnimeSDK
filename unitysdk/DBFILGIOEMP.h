#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DBFILGIOEMP;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define DBFILGIOEMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA1F00)
#define DBFILGIOEMP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA1F10)
#define DBFILGIOEMP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA1ED0)

inline static constexpr unsigned int DBFILGIOEMP_TypeDefinitionIndex = 22856;

	class DBFILGIOEMP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFILGIOEMP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DBFILGIOEMP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DBFILGIOEMP*))((::PBYTE)hIl2Cpp + DBFILGIOEMP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DBFILGIOEMP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DBFILGIOEMP*))((::PBYTE)hIl2Cpp + DBFILGIOEMP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
