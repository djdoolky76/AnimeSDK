#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OIAFHFJLJHH;
namespace RPG::GameCore { class TargetEvaluator; }

#define OIAFHFJLJHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2816D0)
#define OIAFHFJLJHH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2816E0)
#define OIAFHFJLJHH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2816A0)

inline static constexpr unsigned int OIAFHFJLJHH_TypeDefinitionIndex = 24113;

	class OIAFHFJLJHH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* GEOMBJDBHDD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAFHFJLJHH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OIAFHFJLJHH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OIAFHFJLJHH*))((::PBYTE)hIl2Cpp + OIAFHFJLJHH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OIAFHFJLJHH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OIAFHFJLJHH*))((::PBYTE)hIl2Cpp + OIAFHFJLJHH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
