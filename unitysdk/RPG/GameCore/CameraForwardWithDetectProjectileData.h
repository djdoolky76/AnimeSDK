#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CameraForwardAttachType.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CameraForwardWithDetectProjectileData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_CAMERAFORWARDWITHDETECTPROJECTILEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D555750)
#define RPG_GAMECORE_CAMERAFORWARDWITHDETECTPROJECTILEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D555760)
#define RPG_GAMECORE_CAMERAFORWARDWITHDETECTPROJECTILEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D555700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraForwardWithDetectProjectileData_TypeDefinitionIndex = 15673;

	class CameraForwardWithDetectProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Single CollisionEnableDelay; // 0xB8
		::System::Single MaxLifeTime; // 0xBC
		::RPG::GameCore::CameraForwardAttachType AttachType; // 0xC0
		::System::Byte _padding0[0x4];
		::System::String* AttachUniqueEffectName; // 0xC8
		::System::String* AttachEffectPoint; // 0xD0
		::RPG::GameCore::DynamicFloat* ForwardDistanceOffset; // 0xD8
		::RPG::GameCore::DynamicFloat* PitchAngleOffset; // 0xE0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERAFORWARDWITHDETECTPROJECTILEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CameraForwardWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CameraForwardWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERAFORWARDWITHDETECTPROJECTILEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CameraForwardWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CameraForwardWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERAFORWARDWITHDETECTPROJECTILEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
