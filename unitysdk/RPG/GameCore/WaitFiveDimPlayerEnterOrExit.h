#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitFiveDimPlayerEnterOrExit; }

#define RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC97920)
#define RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC97930)
#define RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC978F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFiveDimPlayerEnterOrExit_TypeDefinitionIndex = 21290;

	class WaitFiveDimPlayerEnterOrExit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean SpecifyContainer; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicString* ContainerID; // 0x20
		::System::Boolean SpecifiyFDEntity; // 0x28
		::System::Byte _padding1[0x7];
		::RPG::GameCore::DynamicString* FDEntityID; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTeleportFiveDimFinish; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTeleportThreeDimFinish; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMPLAYERENTEROREXIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
