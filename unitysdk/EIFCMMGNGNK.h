#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EIFCMMGNGNK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define EIFCMMGNGNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5CF40)
#define EIFCMMGNGNK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF5CFA0)
#define EIFCMMGNGNK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF5CEC0)

inline static constexpr unsigned int EIFCMMGNGNK_TypeDefinitionIndex = 22736;

	class EIFCMMGNGNK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::DynamicFloat* MINCCILIJNN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFCMMGNGNK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EIFCMMGNGNK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EIFCMMGNGNK*))((::PBYTE)hIl2Cpp + EIFCMMGNGNK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EIFCMMGNGNK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EIFCMMGNGNK*))((::PBYTE)hIl2Cpp + EIFCMMGNGNK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
