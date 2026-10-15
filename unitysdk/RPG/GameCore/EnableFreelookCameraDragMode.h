#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FreelookCameraDragMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableFreelookCameraDragMode; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLEFREELOOKCAMERADRAGMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63F360)
#define RPG_GAMECORE_ENABLEFREELOOKCAMERADRAGMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D63F370)
#define RPG_GAMECORE_ENABLEFREELOOKCAMERADRAGMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D63F330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableFreelookCameraDragMode_TypeDefinitionIndex = 20832;

	class EnableFreelookCameraDragMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FreelookCameraDragMode Mode; // 0x1C
		::RPG::GameCore::TargetEvaluator* AimTarget; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFREELOOKCAMERADRAGMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableFreelookCameraDragMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableFreelookCameraDragMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFREELOOKCAMERADRAGMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableFreelookCameraDragMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableFreelookCameraDragMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFREELOOKCAMERADRAGMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
