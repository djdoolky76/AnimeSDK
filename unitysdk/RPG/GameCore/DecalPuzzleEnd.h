#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DecalPuzzleEnd; }

#define RPG_GAMECORE_DECALPUZZLEEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1F004A90)
#define RPG_GAMECORE_DECALPUZZLEEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F004AA0)
#define RPG_GAMECORE_DECALPUZZLEEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F0049D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecalPuzzleEnd_TypeDefinitionIndex = 21552;

	class DecalPuzzleEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLEEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DecalPuzzleEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DecalPuzzleEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLEEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DecalPuzzleEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DecalPuzzleEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLEEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
