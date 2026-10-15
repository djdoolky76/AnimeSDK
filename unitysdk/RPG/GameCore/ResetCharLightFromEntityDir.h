#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetCharLightFromEntityDir; }

#define RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95D1F0)
#define RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95D200)
#define RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95D130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetCharLightFromEntityDir_TypeDefinitionIndex = 21875;

	class ResetCharLightFromEntityDir : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetCharLightFromEntityDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetCharLightFromEntityDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetCharLightFromEntityDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetCharLightFromEntityDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
