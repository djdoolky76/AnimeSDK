#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class WaitCustomString; }

#define RPG_GAMECORE_WAITCUSTOMSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC68010)
#define RPG_GAMECORE_WAITCUSTOMSTRING_GET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x1DC68470)
#define RPG_GAMECORE_WAITCUSTOMSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC68020)
#define RPG_GAMECORE_WAITCUSTOMSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC67E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitCustomString_TypeDefinitionIndex = 23758;

	class WaitCustomString : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* CustomString; // 0x18
		::System::Boolean WaitOwnerOnly; // 0x20
		::System::Boolean GoNextImmediately; // 0x21
		::System::Boolean ResetWhenTaskBegin; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCUSTOMSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCUSTOMSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCUSTOMSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Boolean get_IsClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCUSTOMSTRING_GET_ISCLIENTONLY_OFFSET))(this);
		}

	};
}
