#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CameraFollowEntityTimeScale; }

#define RPG_GAMECORE_CAMERAFOLLOWENTITYTIMESCALE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7673B0)
#define RPG_GAMECORE_CAMERAFOLLOWENTITYTIMESCALE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7673C0)
#define RPG_GAMECORE_CAMERAFOLLOWENTITYTIMESCALE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E767370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraFollowEntityTimeScale_TypeDefinitionIndex = 23098;

	class CameraFollowEntityTimeScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERAFOLLOWENTITYTIMESCALE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CameraFollowEntityTimeScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CameraFollowEntityTimeScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERAFOLLOWENTITYTIMESCALE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CameraFollowEntityTimeScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CameraFollowEntityTimeScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERAFOLLOWENTITYTIMESCALE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
