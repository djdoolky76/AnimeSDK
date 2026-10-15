#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ACBFNEKJDNP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define EEJOCGFPBAA_CTOR_OFFSET UNITYSDK_OFFSET(0x13A31870)
#define EEJOCGFPBAA_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x13A31540)
#define EEJOCGFPBAA_INIT_OFFSET UNITYSDK_OFFSET(0x13A31580)
#define EEJOCGFPBAA_REFRESH_OFFSET UNITYSDK_OFFSET(0x13A315F0)
#define EEJOCGFPBAA_RESET_OFFSET UNITYSDK_OFFSET(0x13A31710)

	class EEJOCGFPBAA : public ::System::Object
	{
	public:
		::RPG::Client::CameraFightStateCommonConfig* MAFIONBKPIE; // 0x10
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x18
		::ACBFNEKJDNP* LEOGIKABIGF; // 0x20
		::UnityEngine::Vector3 JMHCLMJGDDL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJOCGFPBAA_CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
		{
			return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJOCGFPBAA_GETFIGHTSTATECONFIG_OFFSET))(this);
		}

		::System::Void Init(::ACBFNEKJDNP* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ACBFNEKJDNP*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + EEJOCGFPBAA_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJOCGFPBAA_REFRESH_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJOCGFPBAA_RESET_OFFSET))(this);
		}

	};
