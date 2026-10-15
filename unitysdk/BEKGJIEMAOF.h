#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/MVector3.h"
class ACBFNEKJDNP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateSelectServantConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEKGJIEMAOF_CTOR_OFFSET UNITYSDK_OFFSET(0xB156510)
#define BEKGJIEMAOF_DJMFGAPMFBE_OFFSET UNITYSDK_OFFSET(0xB155EB0)
#define BEKGJIEMAOF_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0xB1564D0)
#define BEKGJIEMAOF_INIT_OFFSET UNITYSDK_OFFSET(0xB1557B0)
#define BEKGJIEMAOF_REFRESH_OFFSET UNITYSDK_OFFSET(0xB155900)
#define BEKGJIEMAOF_RESET_OFFSET UNITYSDK_OFFSET(0xB155860)

	class BEKGJIEMAOF : public ::System::Object
	{
	public:
		::RPG::Client::CameraFightStateSelectServantConfig* MAFIONBKPIE; // 0x10
		::ACBFNEKJDNP* LEOGIKABIGF; // 0x18
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x20
		::UnityEngine::Vector3 EPGIKHNGDEB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKGJIEMAOF_CTOR_OFFSET))(this);
		}

		::System::Void Init(::ACBFNEKJDNP* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ACBFNEKJDNP*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + BEKGJIEMAOF_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKGJIEMAOF_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKGJIEMAOF_REFRESH_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
		{
			return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKGJIEMAOF_GETFIGHTSTATECONFIG_OFFSET))(this);
		}

		::RPG::MVector3 DJMFGAPMFBE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BEKGJIEMAOF_DJMFGAPMFBE_OFFSET))(this, a1);
		}

	};
