#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DecalPuzzleStart; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DECALPUZZLESTART_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CB820)
#define RPG_GAMECORE_DECALPUZZLESTART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CB840)
#define RPG_GAMECORE_DECALPUZZLESTART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CB7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecalPuzzleStart_TypeDefinitionIndex = 21208;

	class DecalPuzzleStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* DecalConfigIDs; // 0x18
		::RPG::Client::TextID Title; // 0x20
		::RPG::GameCore::TargetEvaluator* IdentifyLookAt; // 0x30
		::System::Single Scale; // 0x38
		::System::Single DecalWidth; // 0x3C
		::System::Single DecalHeight; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLESTART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DecalPuzzleStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DecalPuzzleStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLESTART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DecalPuzzleStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DecalPuzzleStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLESTART_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
