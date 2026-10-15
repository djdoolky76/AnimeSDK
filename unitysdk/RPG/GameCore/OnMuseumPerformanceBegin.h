#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OnMuseumPerformanceBegin; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B2E80)
#define RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B2E90)
#define RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B2E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OnMuseumPerformanceBegin_TypeDefinitionIndex = 20905;

	class OnMuseumPerformanceBegin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPerformanceBegin; // 0x18
		::System::UInt32 AreaID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OnMuseumPerformanceBegin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OnMuseumPerformanceBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OnMuseumPerformanceBegin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OnMuseumPerformanceBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
