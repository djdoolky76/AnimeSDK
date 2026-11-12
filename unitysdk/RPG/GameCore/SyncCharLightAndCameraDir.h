#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SyncCharLightAndCameraDir; }

#define RPG_GAMECORE_SYNCCHARLIGHTANDCAMERADIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDFF7C0)
#define RPG_GAMECORE_SYNCCHARLIGHTANDCAMERADIR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EDFF7D0)
#define RPG_GAMECORE_SYNCCHARLIGHTANDCAMERADIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EDFF780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncCharLightAndCameraDir_TypeDefinitionIndex = 23401;

	class SyncCharLightAndCameraDir : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsSync; // 0x18
		::System::Boolean IsDurable; // 0x19
		::System::Boolean IsRevert; // 0x1A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCCHARLIGHTANDCAMERADIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncCharLightAndCameraDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncCharLightAndCameraDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCCHARLIGHTANDCAMERADIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncCharLightAndCameraDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncCharLightAndCameraDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCCHARLIGHTANDCAMERADIR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
