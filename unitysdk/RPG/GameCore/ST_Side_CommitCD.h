#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_CommitCD; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_COMMITCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA54DE0)
#define RPG_GAMECORE_ST_SIDE_COMMITCD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA54DF0)
#define RPG_GAMECORE_ST_SIDE_COMMITCD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA54DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_CommitCD_TypeDefinitionIndex = 20135;

	class ST_Side_CommitCD : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* VariableName; // 0x18
		::System::Single Duration; // 0x20
		::System::Boolean CommitOnEnter; // 0x24
		::System::Boolean CommitOnExit; // 0x25
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_COMMITCD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_CommitCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_CommitCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_COMMITCD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_CommitCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_CommitCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_COMMITCD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
