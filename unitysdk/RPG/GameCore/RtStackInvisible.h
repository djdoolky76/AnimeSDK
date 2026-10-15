#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtStackInvisible; }

#define RPG_GAMECORE_RTSTACKINVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA37720)
#define RPG_GAMECORE_RTSTACKINVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA37730)
#define RPG_GAMECORE_RTSTACKINVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA37660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtStackInvisible_TypeDefinitionIndex = 24120;

	class RtStackInvisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTACKINVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtStackInvisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtStackInvisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTACKINVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtStackInvisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtStackInvisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTACKINVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
