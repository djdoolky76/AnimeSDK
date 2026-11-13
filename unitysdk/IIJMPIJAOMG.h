#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IIJMPIJAOMG;
namespace RPG::GameCore { class TargetEvaluator; }

#define IIJMPIJAOMG_CTOR_OFFSET UNITYSDK_OFFSET(0xC98A160)
#define IIJMPIJAOMG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0xC98A190)
#define IIJMPIJAOMG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0xC98A110)

inline static constexpr unsigned int IIJMPIJAOMG_TypeDefinitionIndex = 22402;

	class IIJMPIJAOMG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJMPIJAOMG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IIJMPIJAOMG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IIJMPIJAOMG*))((::PBYTE)hIl2Cpp + IIJMPIJAOMG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IIJMPIJAOMG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IIJMPIJAOMG*))((::PBYTE)hIl2Cpp + IIJMPIJAOMG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
