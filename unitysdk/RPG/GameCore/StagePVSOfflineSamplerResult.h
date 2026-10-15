#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StagePVSOfflineSamplerInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StagePVSOfflineSamplerResult; }
namespace RPG::GameCore { class StagePVSOfflineVisiblityInfo; }

#define RPG_GAMECORE_STAGEPVSOFFLINESAMPLERRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB12260)
#define RPG_GAMECORE_STAGEPVSOFFLINESAMPLERRESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB12270)
#define RPG_GAMECORE_STAGEPVSOFFLINESAMPLERRESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB124D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSOfflineSamplerResult_TypeDefinitionIndex = 19183;

	class StagePVSOfflineSamplerResult : public ::RPG::GameCore::StagePVSOfflineSamplerInfo
	{
	public:
		::RPG::GameCore::StagePVSOfflineVisiblityInfo* SceneItemVisInfo; // 0x28
		::RPG::GameCore::StagePVSOfflineVisiblityInfo* LightVisInfo; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESAMPLERRESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePVSOfflineSamplerResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePVSOfflineSamplerResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESAMPLERRESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePVSOfflineSamplerResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePVSOfflineSamplerResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESAMPLERRESULT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
