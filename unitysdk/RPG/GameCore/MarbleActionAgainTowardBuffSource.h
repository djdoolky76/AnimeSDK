#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleActionAgainTowardBuffSource; }

#define RPG_GAMECORE_MARBLEACTIONAGAINTOWARDBUFFSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D808BC0)
#define RPG_GAMECORE_MARBLEACTIONAGAINTOWARDBUFFSOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D808BD0)
#define RPG_GAMECORE_MARBLEACTIONAGAINTOWARDBUFFSOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D808B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleActionAgainTowardBuffSource_TypeDefinitionIndex = 16836;

	class MarbleActionAgainTowardBuffSource : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 BuffId; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEACTIONAGAINTOWARDBUFFSOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleActionAgainTowardBuffSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleActionAgainTowardBuffSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEACTIONAGAINTOWARDBUFFSOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleActionAgainTowardBuffSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleActionAgainTowardBuffSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEACTIONAGAINTOWARDBUFFSOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
