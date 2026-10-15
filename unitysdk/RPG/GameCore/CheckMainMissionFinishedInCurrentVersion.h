#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckMainMissionFinishedInCurrentVersion; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CHECKMAINMISSIONFINISHEDINCURRENTVERSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54E550)
#define RPG_GAMECORE_CHECKMAINMISSIONFINISHEDINCURRENTVERSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54E560)
#define RPG_GAMECORE_CHECKMAINMISSIONFINISHEDINCURRENTVERSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54E520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckMainMissionFinishedInCurrentVersion_TypeDefinitionIndex = 20766;

	class CheckMainMissionFinishedInCurrentVersion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCurrentVersionFinishedTask; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotCurrentVersionFinishedTask; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKMAINMISSIONFINISHEDINCURRENTVERSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKMAINMISSIONFINISHEDINCURRENTVERSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKMAINMISSIONFINISHEDINCURRENTVERSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
