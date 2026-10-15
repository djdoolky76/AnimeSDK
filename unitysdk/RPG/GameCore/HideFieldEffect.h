#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FieldHideMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideFieldEffect; }

#define RPG_GAMECORE_HIDEFIELDEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73AE40)
#define RPG_GAMECORE_HIDEFIELDEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D73AE50)
#define RPG_GAMECORE_HIDEFIELDEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73AE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideFieldEffect_TypeDefinitionIndex = 22708;

	class HideFieldEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FieldHideMode FieldHideMode; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEFIELDEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideFieldEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideFieldEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEFIELDEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideFieldEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideFieldEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEFIELDEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
