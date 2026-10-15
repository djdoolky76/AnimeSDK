#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitForNotifyNoParam; }
namespace System { class String; }

#define RPG_GAMECORE_WAITFORNOTIFYNOPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC98B40)
#define RPG_GAMECORE_WAITFORNOTIFYNOPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC98B50)
#define RPG_GAMECORE_WAITFORNOTIFYNOPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC98B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitForNotifyNoParam_TypeDefinitionIndex = 20912;

	class WaitForNotifyNoParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NotifyTypeName; // 0x18
		::System::Boolean IsLoop; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotify; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORNOTIFYNOPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitForNotifyNoParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitForNotifyNoParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORNOTIFYNOPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitForNotifyNoParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitForNotifyNoParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORNOTIFYNOPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
