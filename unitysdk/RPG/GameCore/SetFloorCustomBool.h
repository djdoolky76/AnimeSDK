#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicBool; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetFloorCustomBool; }
namespace RPG::GameCore { class SetFloorCustomValueExtraInfo; }

#define RPG_GAMECORE_SETFLOORCUSTOMBOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA85D20)
#define RPG_GAMECORE_SETFLOORCUSTOMBOOL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA85D30)
#define RPG_GAMECORE_SETFLOORCUSTOMBOOL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA85CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFloorCustomBool_TypeDefinitionIndex = 20691;

	class SetFloorCustomBool : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x18
		::RPG::GameCore::DynamicBool* Value; // 0x20
		::System::Boolean UseExtraInfo; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::GameCore::SetFloorCustomValueExtraInfo* ExtraInfo; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMBOOL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFloorCustomBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMBOOL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFloorCustomBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMBOOL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
