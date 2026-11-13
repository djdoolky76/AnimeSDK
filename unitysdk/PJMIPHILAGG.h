#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ComicDessertLinearMoveMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PJMIPHILAGG;
namespace RPG::GameCore { class TargetEvaluator; }

#define PJMIPHILAGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E733E40)
#define PJMIPHILAGG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E733E50)
#define PJMIPHILAGG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E733E00)

inline static constexpr unsigned int PJMIPHILAGG_TypeDefinitionIndex = 21873;

	class PJMIPHILAGG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Boolean AKBANOIOHDP; // 0x20
		::System::Boolean JPHFDCIAAGM; // 0x21
		::System::Byte _padding0[0x2];
		::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x24
		::System::Single MLPAPEJNLGM; // 0x28
		::RPG::GameCore::ComicDessertLinearMoveMode HJKLGDDJDJP; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMIPHILAGG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PJMIPHILAGG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PJMIPHILAGG*))((::PBYTE)hIl2Cpp + PJMIPHILAGG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PJMIPHILAGG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PJMIPHILAGG*))((::PBYTE)hIl2Cpp + PJMIPHILAGG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
