#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeBuffParamKey; }
namespace RPG::GameCore { class SetDynamicValueByMazeBuffConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYMAZEBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA7290)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMAZEBUFFCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA72A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMAZEBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA7260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByMazeBuffConfig_TypeDefinitionIndex = 23834;

	class SetDynamicValueByMazeBuffConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MazeBuffParamKey*>* QueryList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAZEBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByMazeBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByMazeBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAZEBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByMazeBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByMazeBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAZEBUFFCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
