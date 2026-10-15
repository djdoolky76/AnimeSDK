#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CaseContainerBase; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CASECONTAINERBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D52A540)
#define RPG_GAMECORE_CASECONTAINERBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D52A490)
#define RPG_GAMECORE_CASECONTAINERBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D52A210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CaseContainerBase_TypeDefinitionIndex = 23769;

	class CaseContainerBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CASECONTAINERBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CaseContainerBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CaseContainerBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CASECONTAINERBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CaseContainerBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CaseContainerBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CASECONTAINERBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
