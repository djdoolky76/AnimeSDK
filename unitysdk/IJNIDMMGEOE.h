#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ACBFNEKJDNP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateUseSkillPerformConfig; }

#define IJNIDMMGEOE_CTOR_OFFSET UNITYSDK_OFFSET(0x164717F0)
#define IJNIDMMGEOE_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x164717B0)
#define IJNIDMMGEOE_INIT_OFFSET UNITYSDK_OFFSET(0x1646FDD0)
#define IJNIDMMGEOE_MCAEIGBDBEC_OFFSET UNITYSDK_OFFSET(0x16470BE0)
#define IJNIDMMGEOE_REFRESH_OFFSET UNITYSDK_OFFSET(0x1646FF10)
#define IJNIDMMGEOE_RESET_OFFSET UNITYSDK_OFFSET(0x1646FE70)

	class IJNIDMMGEOE : public ::System::Object
	{
	public:
		::ACBFNEKJDNP* LEOGIKABIGF; // 0x10
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x18
		::RPG::Client::CameraFightStateUseSkillPerformConfig* MAFIONBKPIE; // 0x20
		::UnityEngine::Vector3 EBJIPOAJLBG; // 0x28
		::System::Boolean LBIALNNCLMH; // 0x34
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 OEGAAMGHNCP; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNIDMMGEOE_CTOR_OFFSET))(this);
		}

		::System::Void Init(::ACBFNEKJDNP* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ACBFNEKJDNP*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + IJNIDMMGEOE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNIDMMGEOE_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNIDMMGEOE_REFRESH_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
		{
			return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNIDMMGEOE_GETFIGHTSTATECONFIG_OFFSET))(this);
		}

		::System::Void MCAEIGBDBEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNIDMMGEOE_MCAEIGBDBEC_OFFSET))(this);
		}

	};
