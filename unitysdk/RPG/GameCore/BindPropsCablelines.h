#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BindPropsCablelines; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_BINDPROPSCABLELINES_CTOR_OFFSET UNITYSDK_OFFSET(0x1D46D180)
#define RPG_GAMECORE_BINDPROPSCABLELINES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D46D1E0)
#define RPG_GAMECORE_BINDPROPSCABLELINES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D46D100)

namespace RPG::GameCore
{
	class BindPropsCablelines : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StartPropInstanceID; // 0x18
		::System::UInt32 EndPropInstanceID; // 0x1C
		::System::UInt32 LinePropInstanceID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* LineEffectPath; // 0x28
		::RPG::GameCore::DynamicString* MoveEffectPath; // 0x30
		::RPG::GameCore::DynamicFloat* MoveEffectSpeedOverride; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDPROPSCABLELINES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BindPropsCablelines* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BindPropsCablelines*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDPROPSCABLELINES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BindPropsCablelines* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BindPropsCablelines*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDPROPSCABLELINES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
