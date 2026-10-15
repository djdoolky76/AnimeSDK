#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicStringList; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitMapPoseSwitcherRemove; }

#define RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9B4B0)
#define RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9B4C0)
#define RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9B470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMapPoseSwitcherRemove_TypeDefinitionIndex = 21264;

	class WaitMapPoseSwitcherRemove : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicStringList* VolumeInstanceIDs; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMapPoseSwitcherRemove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMapPoseSwitcherRemove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMapPoseSwitcherRemove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMapPoseSwitcherRemove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
