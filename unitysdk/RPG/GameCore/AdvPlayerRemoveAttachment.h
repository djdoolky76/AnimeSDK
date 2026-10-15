#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvPlayerRemoveAttachment; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37D7E0)
#define RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D37D7F0)
#define RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D37D7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerRemoveAttachment_TypeDefinitionIndex = 21050;

	class AdvPlayerRemoveAttachment : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerRemoveAttachment* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerRemoveAttachment*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerRemoveAttachment* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerRemoveAttachment*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
