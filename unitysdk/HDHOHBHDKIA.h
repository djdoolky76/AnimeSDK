#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ACBFNEKJDNP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateSelectLightTeamEntityConfig; }

#define HDHOHBHDKIA_CTOR_OFFSET UNITYSDK_OFFSET(0x15C347C0)
#define HDHOHBHDKIA_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x15C34780)
#define HDHOHBHDKIA_INIT_OFFSET UNITYSDK_OFFSET(0x15C33D30)
#define HDHOHBHDKIA_REFRESH_OFFSET UNITYSDK_OFFSET(0x15C33E90)
#define HDHOHBHDKIA_RESET_OFFSET UNITYSDK_OFFSET(0x15C33DF0)

inline static constexpr unsigned int HDHOHBHDKIA_TypeDefinitionIndex = 69604;

	class HDHOHBHDKIA : public ::System::Object
	{
	public:
		::RPG::Client::CameraFightStateSelectLightTeamEntityConfig* MAFIONBKPIE; // 0x10
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x18
		::ACBFNEKJDNP* LEOGIKABIGF; // 0x20
		::System::Single JONIHNEBKCO; // 0x28
		::UnityEngine::Vector3 EPGIKHNGDEB; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHOHBHDKIA_CTOR_OFFSET))(this);
		}

		::System::Void Init(::ACBFNEKJDNP* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ACBFNEKJDNP*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + HDHOHBHDKIA_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHOHBHDKIA_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHOHBHDKIA_REFRESH_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
		{
			return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHOHBHDKIA_GETFIGHTSTATECONFIG_OFFSET))(this);
		}

	};
