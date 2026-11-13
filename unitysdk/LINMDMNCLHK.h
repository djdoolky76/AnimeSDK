#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LINMDMNCLHK;
namespace RPG::GameCore { class TargetEvaluator; }

#define LINMDMNCLHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F59D0)
#define LINMDMNCLHK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E3F59E0)
#define LINMDMNCLHK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E3F5990)

inline static constexpr unsigned int LINMDMNCLHK_TypeDefinitionIndex = 21886;

	class LINMDMNCLHK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Single HBDINFCPLPF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINMDMNCLHK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LINMDMNCLHK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LINMDMNCLHK*))((::PBYTE)hIl2Cpp + LINMDMNCLHK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LINMDMNCLHK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LINMDMNCLHK*))((::PBYTE)hIl2Cpp + LINMDMNCLHK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
