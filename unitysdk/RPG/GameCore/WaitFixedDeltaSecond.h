#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitFixedDeltaSecond; }

#define RPG_GAMECORE_WAITFIXEDDELTASECOND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6A600)
#define RPG_GAMECORE_WAITFIXEDDELTASECOND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6A610)
#define RPG_GAMECORE_WAITFIXEDDELTASECOND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6A540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFixedDeltaSecond_TypeDefinitionIndex = 23786;

	class WaitFixedDeltaSecond : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIXEDDELTASECOND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFixedDeltaSecond* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFixedDeltaSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIXEDDELTASECOND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFixedDeltaSecond* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFixedDeltaSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIXEDDELTASECOND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
