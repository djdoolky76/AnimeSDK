#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCameraRootFollow; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETCAMERAROOTFOLLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6BBA0)
#define RPG_GAMECORE_SETCAMERAROOTFOLLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6BBB0)
#define RPG_GAMECORE_SETCAMERAROOTFOLLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6BB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCameraRootFollow_TypeDefinitionIndex = 22890;

	class SetCameraRootFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* PointName; // 0x20
		::RPG::MVector3 Offset; // 0x28
		::System::Boolean IsReset; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERAROOTFOLLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCameraRootFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCameraRootFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERAROOTFOLLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCameraRootFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCameraRootFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERAROOTFOLLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
