#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameOpertationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenGameTriggerOpertation; }

#define RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73E950)
#define RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D73E960)
#define RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73E920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameTriggerOpertation_TypeDefinitionIndex = 21322;

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
