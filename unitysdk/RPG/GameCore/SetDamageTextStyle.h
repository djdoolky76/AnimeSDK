#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DamageTextType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDamageTextStyle; }

#define RPG_GAMECORE_SETDAMAGETEXTSTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9E350)
#define RPG_GAMECORE_SETDAMAGETEXTSTYLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9E360)
#define RPG_GAMECORE_SETDAMAGETEXTSTYLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9E320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDamageTextStyle_TypeDefinitionIndex = 22950;

	class SetDamageTextStyle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID Content; // 0x18
		::RPG::GameCore::DamageTextType Type; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAMAGETEXTSTYLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDamageTextStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDamageTextStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAMAGETEXTSTYLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDamageTextStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDamageTextStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAMAGETEXTSTYLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
