#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetVirtualCameraPosByPlayerTalk; }
namespace System { class String; }

#define RPG_GAMECORE_RESETVIRTUALCAMERAPOSBYPLAYERTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95EAE0)
#define RPG_GAMECORE_RESETVIRTUALCAMERAPOSBYPLAYERTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95EAF0)
#define RPG_GAMECORE_RESETVIRTUALCAMERAPOSBYPLAYERTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95EAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetVirtualCameraPosByPlayerTalk_TypeDefinitionIndex = 23736;

	class ResetVirtualCameraPosByPlayerTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* CameraAnchorName; // 0x20
		::System::String* PlayerAnchorName; // 0x28
		::System::String* NPCAnchorName; // 0x30
		::System::String* RealPlayerUniqueName; // 0x38
		::System::String* RealNPCUniqueName; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETVIRTUALCAMERAPOSBYPLAYERTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetVirtualCameraPosByPlayerTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetVirtualCameraPosByPlayerTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETVIRTUALCAMERAPOSBYPLAYERTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetVirtualCameraPosByPlayerTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetVirtualCameraPosByPlayerTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETVIRTUALCAMERAPOSBYPLAYERTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
