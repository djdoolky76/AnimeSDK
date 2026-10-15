#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetForceStreamingThisFrame; }

#define RPG_GAMECORE_SETFORCESTREAMINGTHISFRAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA86CB0)
#define RPG_GAMECORE_SETFORCESTREAMINGTHISFRAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA86CC0)
#define RPG_GAMECORE_SETFORCESTREAMINGTHISFRAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA86C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetForceStreamingThisFrame_TypeDefinitionIndex = 21102;

	class SetForceStreamingThisFrame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean StartLoadingTick; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFORCESTREAMINGTHISFRAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetForceStreamingThisFrame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetForceStreamingThisFrame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFORCESTREAMINGTHISFRAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetForceStreamingThisFrame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetForceStreamingThisFrame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFORCESTREAMINGTHISFRAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
