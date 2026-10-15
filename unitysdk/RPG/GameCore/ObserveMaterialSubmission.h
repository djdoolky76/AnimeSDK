#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ObserveMaterialSubmission; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_OBSERVEMATERIALSUBMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B0CD0)
#define RPG_GAMECORE_OBSERVEMATERIALSUBMISSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B0CE0)
#define RPG_GAMECORE_OBSERVEMATERIALSUBMISSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B0CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ObserveMaterialSubmission_TypeDefinitionIndex = 21249;

	class ObserveMaterialSubmission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinished; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancelled; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInterrupted; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OBSERVEMATERIALSUBMISSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ObserveMaterialSubmission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ObserveMaterialSubmission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OBSERVEMATERIALSUBMISSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ObserveMaterialSubmission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ObserveMaterialSubmission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OBSERVEMATERIALSUBMISSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
