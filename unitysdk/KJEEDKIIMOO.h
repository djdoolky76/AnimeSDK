#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KJEEDKIIMOO;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define KJEEDKIIMOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F423C60)
#define KJEEDKIIMOO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F423C90)
#define KJEEDKIIMOO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F423C10)

inline static constexpr unsigned int KJEEDKIIMOO_TypeDefinitionIndex = 22406;

	class KJEEDKIIMOO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* MGFLFCHMGPA; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Int32 GMDBHJKEAEI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEEDKIIMOO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KJEEDKIIMOO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KJEEDKIIMOO*))((::PBYTE)hIl2Cpp + KJEEDKIIMOO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KJEEDKIIMOO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KJEEDKIIMOO*))((::PBYTE)hIl2Cpp + KJEEDKIIMOO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
