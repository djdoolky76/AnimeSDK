#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckSkillBPAxis; }
namespace System { class String; }

#define RPG_GAMECORE_CHECKSKILLBPAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57C790)
#define RPG_GAMECORE_CHECKSKILLBPAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57C7A0)
#define RPG_GAMECORE_CHECKSKILLBPAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57C760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckSkillBPAxis_TypeDefinitionIndex = 15506;

	class CheckSkillBPAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::System::String* SkillName; // 0x10
		::RPG::GameCore::FixPoint CheckScore; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLBPAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckSkillBPAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckSkillBPAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLBPAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckSkillBPAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckSkillBPAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLBPAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
