#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NENMILNIFAB;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define NENMILNIFAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4122B0)
#define NENMILNIFAB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E4122E0)
#define NENMILNIFAB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E412260)

inline static constexpr unsigned int NENMILNIFAB_TypeDefinitionIndex = 22404;

	class NENMILNIFAB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* NOHLFJBAGJC; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Int32 GMDBHJKEAEI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NENMILNIFAB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NENMILNIFAB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NENMILNIFAB*))((::PBYTE)hIl2Cpp + NENMILNIFAB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NENMILNIFAB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NENMILNIFAB*))((::PBYTE)hIl2Cpp + NENMILNIFAB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
