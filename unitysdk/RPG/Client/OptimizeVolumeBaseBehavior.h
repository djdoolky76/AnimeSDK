#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class OptimzieVolumeBaseMonoPlugin; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xDA0CF70)
#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xDA0CB20)
#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_GHDILMPKAEA_OFFSET UNITYSDK_OFFSET(0xDA0CBA0)
#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_JMMMDANKFLP_OFFSET UNITYSDK_OFFSET(0xDA0C720)
#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xDA0CEB0)
#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDA0CBE0)
#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xDA0CF10)
#define RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xDA0CC70)

namespace RPG::Client
{
	inline static constexpr unsigned int OptimizeVolumeBaseBehavior_TypeDefinitionIndex = 70832;

	class OptimizeVolumeBaseBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Camera* _MainCamera; // 0x38
		::System::Single _FadeDuration; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Boolean JMMMDANKFLP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_JMMMDANKFLP_OFFSET))(this, a1);
		}

		::System::Void GHDILMPKAEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_GHDILMPKAEA_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::RPG::Client::OptimzieVolumeBaseMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::OptimzieVolumeBaseMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZEVOLUMEBASEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
