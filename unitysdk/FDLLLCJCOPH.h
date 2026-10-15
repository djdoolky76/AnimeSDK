#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FDLLLCJCOPH;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define FDLLLCJCOPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB07B0)
#define FDLLLCJCOPH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDB07C0)
#define FDLLLCJCOPH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDB0770)

inline static constexpr unsigned int FDLLLCJCOPH_TypeDefinitionIndex = 23606;

	class FDLLLCJCOPH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ALDLOOKHHGI; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::RPG::GameCore::PropertyModifyFunction DNKFJMBHINL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLLLCJCOPH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FDLLLCJCOPH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FDLLLCJCOPH*))((::PBYTE)hIl2Cpp + FDLLLCJCOPH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FDLLLCJCOPH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FDLLLCJCOPH*))((::PBYTE)hIl2Cpp + FDLLLCJCOPH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
