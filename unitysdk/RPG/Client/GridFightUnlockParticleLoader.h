#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class GridFightEffectController; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA04400)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CA04140)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CA040B0)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1CA042F0)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CA04390)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CA04340)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1CA04190)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_STOP_OFFSET UNITYSDK_OFFSET(0x1CA04250)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUnlockParticleLoader_TypeDefinitionIndex = 65943;

	class GridFightUnlockParticleLoader : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::GridFightEffectController* _Controller; // 0x18
		::UnityEngine::Transform* _MountPoint; // 0x20
		::System::Boolean _WasActive; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::UnityEngine::Transform* a1, ::RPG::Client::GridFightEffectController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::GridFightEffectController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_REFRESH_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_STOP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_DISPOSE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLELOADER_ONDESTROY_OFFSET))(this);
		}

	};
}
