#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameOpertationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenGameTriggerOpertation; }

#define RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76C3E0)
#define RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D76C3F0)
#define RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76C3B0)

namespace RPG::GameCore
{
	class HipplenGameTriggerOpertation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::HipplenGameOpertationType Type; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenGameTriggerOpertation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenGameTriggerOpertation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenGameTriggerOpertation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenGameTriggerOpertation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
