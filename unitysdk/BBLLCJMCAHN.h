#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ACBFNEKJDNP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateDarkAttackConfig; }

#define BBLLCJMCAHN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E860E0)
#define BBLLCJMCAHN_DCAJEJAEIFH_OFFSET UNITYSDK_OFFSET(0x15E86020)
#define BBLLCJMCAHN_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x15E854F0)
#define BBLLCJMCAHN_GET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0x15E85560)
#define BBLLCJMCAHN_INIT_OFFSET UNITYSDK_OFFSET(0x15E84330)
#define BBLLCJMCAHN_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0x15E845C0)
#define BBLLCJMCAHN_MCAEIGBDBEC_OFFSET UNITYSDK_OFFSET(0x15E85580)
#define BBLLCJMCAHN_REFRESH_OFFSET UNITYSDK_OFFSET(0x15E84470)
#define BBLLCJMCAHN_RESET_OFFSET UNITYSDK_OFFSET(0x15E843D0)
#define BBLLCJMCAHN_SET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0x15E85570)

inline static constexpr unsigned int BBLLCJMCAHN_TypeDefinitionIndex = 69594;

	class BBLLCJMCAHN : public ::System::Object
	{
	public:
		::RPG::Client::CameraFightStateDarkAttackConfig* MAFIONBKPIE; // 0x10
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x18
		::RPG::Client::CameraFightStateDarkAttackConfig* _StateConfigWhenRangeAtk_k__BackingField; // 0x20
		::ACBFNEKJDNP* LEOGIKABIGF; // 0x28
		::System::Boolean CDNFOAPHINA; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 OEGAAMGHNCP; // 0x34
		::UnityEngine::Vector3 EBJIPOAJLBG; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLLCJMCAHN_CTOR_OFFSET))(this);
		}

		::System::Void Init(::ACBFNEKJDNP* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ACBFNEKJDNP*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + BBLLCJMCAHN_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLLCJMCAHN_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLLCJMCAHN_REFRESH_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
		{
			return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLLCJMCAHN_GETFIGHTSTATECONFIG_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateDarkAttackConfig* get_StateConfigWhenRangeAtk()
		{
			return ((::RPG::Client::CameraFightStateDarkAttackConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLLCJMCAHN_GET_STATECONFIGWHENRANGEATK_OFFSET))(this);
		}

		::System::Void set_StateConfigWhenRangeAtk(::RPG::Client::CameraFightStateDarkAttackConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFightStateDarkAttackConfig*))((::PBYTE)hIl2Cpp + BBLLCJMCAHN_SET_STATECONFIGWHENRANGEATK_OFFSET))(this, a1);
		}

		::System::Void JEJLPHKIHLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLLCJMCAHN_JEJLPHKIHLB_OFFSET))(this);
		}

		::System::Void MCAEIGBDBEC(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BBLLCJMCAHN_MCAEIGBDBEC_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 DCAJEJAEIFH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BBLLCJMCAHN_DCAJEJAEIFH_OFFSET))(this, a1, a2);
		}

	};
