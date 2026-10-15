#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetDeathDragonLinjian; }

#define RPG_GAMECORE_SETDEATHDRAGONLINJIAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9E6D0)
#define RPG_GAMECORE_SETDEATHDRAGONLINJIAN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9E6E0)
#define RPG_GAMECORE_SETDEATHDRAGONLINJIAN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9E690)

namespace RPG::GameCore
{
	class SetDeathDragonLinjian : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* ShowNum; // 0x20
		::RPG::GameCore::DynamicFloat* PreviewNum; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDEATHDRAGONLINJIAN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDeathDragonLinjian* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDeathDragonLinjian*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDEATHDRAGONLINJIAN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDeathDragonLinjian* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDeathDragonLinjian*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDEATHDRAGONLINJIAN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
