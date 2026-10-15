#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleBuffText; }

#define RPG_GAMECORE_MARBLEBUFFTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D80A260)
#define RPG_GAMECORE_MARBLEBUFFTEXT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D80A270)
#define RPG_GAMECORE_MARBLEBUFFTEXT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D80A210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBuffText_TypeDefinitionIndex = 16840;

	class MarbleBuffText : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 TextId; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFTEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleBuffText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleBuffText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFTEXT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleBuffText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleBuffText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFTEXT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
