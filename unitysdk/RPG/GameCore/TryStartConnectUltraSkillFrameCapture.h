#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TryStartConnectUltraSkillFrameCapture; }

#define RPG_GAMECORE_TRYSTARTCONNECTULTRASKILLFRAMECAPTURE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE740A0)
#define RPG_GAMECORE_TRYSTARTCONNECTULTRASKILLFRAMECAPTURE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE740B0)
#define RPG_GAMECORE_TRYSTARTCONNECTULTRASKILLFRAMECAPTURE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE73FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TryStartConnectUltraSkillFrameCapture_TypeDefinitionIndex = 23147;

	class TryStartConnectUltraSkillFrameCapture : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSTARTCONNECTULTRASKILLFRAMECAPTURE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryStartConnectUltraSkillFrameCapture* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryStartConnectUltraSkillFrameCapture*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSTARTCONNECTULTRASKILLFRAMECAPTURE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryStartConnectUltraSkillFrameCapture* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryStartConnectUltraSkillFrameCapture*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSTARTCONNECTULTRASKILLFRAMECAPTURE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
