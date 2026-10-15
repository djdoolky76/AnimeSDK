#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleChooseTarget; }

#define RPG_GAMECORE_MARBLECHOOSETARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D80E610)
#define RPG_GAMECORE_MARBLECHOOSETARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D80E620)
#define RPG_GAMECORE_MARBLECHOOSETARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D80E5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleChooseTarget_TypeDefinitionIndex = 16844;

	class MarbleChooseTarget : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECHOOSETARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleChooseTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleChooseTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECHOOSETARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleChooseTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleChooseTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECHOOSETARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
