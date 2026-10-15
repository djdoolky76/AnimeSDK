#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcPetSearch; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVNPCPETSEARCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37AD00)
#define RPG_GAMECORE_ADVNPCPETSEARCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D37AD20)
#define RPG_GAMECORE_ADVNPCPETSEARCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D37ACB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcPetSearch_TypeDefinitionIndex = 19990;

	class AdvNpcPetSearch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStartSearchCallback; // 0x18
		::RPG::GameCore::DynamicString* OnFoundTreatureString; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFoundTreatureCallback; // 0x28
		::RPG::GameCore::DynamicString* OnLeaveSearchString; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLeaveSearchCallback; // 0x38
		::System::Single DistanceProtection; // 0x40
		::System::Single TransferDistance; // 0x44
		::System::Single ToFarLeaveDistance; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPETSEARCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcPetSearch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcPetSearch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPETSEARCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcPetSearch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcPetSearch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPETSEARCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
