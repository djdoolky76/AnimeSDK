#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FOIBLOANLCJ;
namespace RPG::GameCore { class TargetEvaluator; }

#define FOIBLOANLCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE4B70)
#define FOIBLOANLCJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDE4BB0)
#define FOIBLOANLCJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDE4B10)

inline static constexpr unsigned int FOIBLOANLCJ_TypeDefinitionIndex = 22918;

	class FOIBLOANLCJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Boolean MOKNCFJICIC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIBLOANLCJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FOIBLOANLCJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FOIBLOANLCJ*))((::PBYTE)hIl2Cpp + FOIBLOANLCJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FOIBLOANLCJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FOIBLOANLCJ*))((::PBYTE)hIl2Cpp + FOIBLOANLCJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
