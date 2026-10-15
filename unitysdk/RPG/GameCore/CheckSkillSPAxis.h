#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckSkillSPAxis; }
namespace System { class String; }

#define RPG_GAMECORE_CHECKSKILLSPAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57CB00)
#define RPG_GAMECORE_CHECKSKILLSPAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57CB10)
#define RPG_GAMECORE_CHECKSKILLSPAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57CAD0)

namespace RPG::GameCore
{
	class CheckSkillSPAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::System::String* SkillName; // 0x10
		::RPG::GameCore::FixPoint CheckScore; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLSPAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckSkillSPAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckSkillSPAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLSPAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckSkillSPAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckSkillSPAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLSPAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
