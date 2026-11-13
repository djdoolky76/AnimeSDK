#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpenRaid; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_OPENRAID_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1359A0)
#define RPG_GAMECORE_OPENRAID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F1359B0)
#define RPG_GAMECORE_OPENRAID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F135970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenRaid_TypeDefinitionIndex = 22002;

	class OpenRaid : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RaidID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x20
		::System::Boolean IsSkipUI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENRAID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenRaid* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenRaid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENRAID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenRaid* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenRaid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENRAID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
