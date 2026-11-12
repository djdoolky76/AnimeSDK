#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOJPIOJDBAP_CAPJOMDLNIP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ACBFNEKJDNP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace UnityEngine { class Camera; }

#define BOJPIOJDBAP_CTOR_OFFSET UNITYSDK_OFFSET(0xC774BE0)
#define BOJPIOJDBAP_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0xC774270)
#define BOJPIOJDBAP_INIT_OFFSET UNITYSDK_OFFSET(0xC7742B0)
#define BOJPIOJDBAP_MJMDDJFCMOA_OFFSET UNITYSDK_OFFSET(0xC774680)
#define BOJPIOJDBAP_PKGHALOJDBF_OFFSET UNITYSDK_OFFSET(0xC7744A0)
#define BOJPIOJDBAP_REFRESH_OFFSET UNITYSDK_OFFSET(0xC774320)
#define BOJPIOJDBAP_RESET_OFFSET UNITYSDK_OFFSET(0xC774A10)

inline static constexpr unsigned int BOJPIOJDBAP_TypeDefinitionIndex = 71553;

	class BOJPIOJDBAP : public ::System::Object
	{
	public:
		::ACBFNEKJDNP* LEOGIKABIGF; // 0x10
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x18
		::RPG::Client::CameraFightStateCommonConfig* MAFIONBKPIE; // 0x20
		::BOJPIOJDBAP_CAPJOMDLNIP NOKJFPPOHKM; // 0x28
		::System::Boolean KHDDOPOHNAF; // 0x4C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 AMHPOGFBPIM; // 0x50
		::UnityEngine::Quaternion JPJEJABNNAJ; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJPIOJDBAP_CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
		{
			return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJPIOJDBAP_GETFIGHTSTATECONFIG_OFFSET))(this);
		}

		::System::Void Init(::ACBFNEKJDNP* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ACBFNEKJDNP*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + BOJPIOJDBAP_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJPIOJDBAP_REFRESH_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJPIOJDBAP_RESET_OFFSET))(this);
		}

		::System::Void PKGHALOJDBF(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + BOJPIOJDBAP_PKGHALOJDBF_OFFSET))(this, a1);
		}

		::System::Void MJMDDJFCMOA(::BOJPIOJDBAP_CAPJOMDLNIP a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOJPIOJDBAP_CAPJOMDLNIP))((::PBYTE)hIl2Cpp + BOJPIOJDBAP_MJMDDJFCMOA_OFFSET))(this, a1);
		}

	};
