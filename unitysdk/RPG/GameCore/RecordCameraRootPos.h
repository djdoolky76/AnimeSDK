#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RecordCameraRootPos; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RECORDCAMERAROOTPOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D946110)
#define RPG_GAMECORE_RECORDCAMERAROOTPOS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D946120)
#define RPG_GAMECORE_RECORDCAMERAROOTPOS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9460E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecordCameraRootPos_TypeDefinitionIndex = 23727;

	class RecordCameraRootPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDCAMERAROOTPOS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RecordCameraRootPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RecordCameraRootPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDCAMERAROOTPOS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RecordCameraRootPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RecordCameraRootPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDCAMERAROOTPOS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
