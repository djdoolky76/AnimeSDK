#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideEffectAutoLayout; }
namespace System { class String; }

#define RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D767DC0)
#define RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D767DD0)
#define RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D767D80)

namespace RPG::GameCore
{
	class HideEffectAutoLayout : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18
		::System::Boolean IsHide; // 0x20
		::System::Boolean IsFade; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideEffectAutoLayout* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideEffectAutoLayout*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideEffectAutoLayout* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideEffectAutoLayout*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
