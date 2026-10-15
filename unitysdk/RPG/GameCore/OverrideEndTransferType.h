#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideEndTransferType; }

#define RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E7170)
#define RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E7180)
#define RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E7130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideEndTransferType_TypeDefinitionIndex = 21921;

	class OverrideEndTransferType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::StoryBlackType BlackType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideEndTransferType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideEndTransferType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideEndTransferType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideEndTransferType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
