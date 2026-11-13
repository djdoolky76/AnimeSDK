#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropResetPuzzle; }

#define RPG_GAMECORE_PROPRESETPUZZLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8F3D0)
#define RPG_GAMECORE_PROPRESETPUZZLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EF8F3E0)
#define RPG_GAMECORE_PROPRESETPUZZLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EF8F310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropResetPuzzle_TypeDefinitionIndex = 22376;

	class PropResetPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESETPUZZLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropResetPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropResetPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESETPUZZLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropResetPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropResetPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESETPUZZLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
