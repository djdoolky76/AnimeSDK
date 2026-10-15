#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestoreWolfBroPuzzleArchive; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9974A0)
#define RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9974B0)
#define RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D997460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestoreWolfBroPuzzleArchive_TypeDefinitionIndex = 21996;

	class RestoreWolfBroPuzzleArchive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single Timeout; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SuccessSequence; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailSequence; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestoreWolfBroPuzzleArchive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestoreWolfBroPuzzleArchive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestoreWolfBroPuzzleArchive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestoreWolfBroPuzzleArchive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
