#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ACBFNEKJDNP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCasterToTargetConfig; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define HEDEMCGDCMD_CTOR_OFFSET UNITYSDK_OFFSET(0x15C41740)
#define HEDEMCGDCMD_FIOBFGIGDGA_OFFSET UNITYSDK_OFFSET(0x15C3E890)
#define HEDEMCGDCMD_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x15C3F620)
#define HEDEMCGDCMD_GIAPNPFFBFC_OFFSET UNITYSDK_OFFSET(0x15C41590)
#define HEDEMCGDCMD_INIT_OFFSET UNITYSDK_OFFSET(0x15C3E740)
#define HEDEMCGDCMD_MCAEIGBDBEC_OFFSET UNITYSDK_OFFSET(0x15C3F660)
#define HEDEMCGDCMD_PLDAJIKABKG_OFFSET UNITYSDK_OFFSET(0x15C413E0)
#define HEDEMCGDCMD_REFRESH_OFFSET UNITYSDK_OFFSET(0x15C3F5E0)
#define HEDEMCGDCMD_RESET_OFFSET UNITYSDK_OFFSET(0x15C3E7E0)

inline static constexpr unsigned int HEDEMCGDCMD_TypeDefinitionIndex = 69593;

	class HEDEMCGDCMD : public ::System::Object
	{
	public:
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x10
		::ACBFNEKJDNP* LEOGIKABIGF; // 0x18
		::RPG::Client::CameraFightStateCasterToTargetConfig* MAFIONBKPIE; // 0x20
		::UnityEngine::Vector3 OEGAAMGHNCP; // 0x28
		::System::Nullable_1<::UnityEngine::Vector3> HAKKPBCKEOM; // 0x34
		::System::Byte _padding0[0x8];
		::System::Nullable_1<::UnityEngine::Vector3> OCBKABJKEHG; // 0x44
		::System::Byte _padding1[0x8];
		::UnityEngine::Vector3 EBJIPOAJLBG; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDEMCGDCMD_CTOR_OFFSET))(this);
		}

		::System::Void Init(::ACBFNEKJDNP* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ACBFNEKJDNP*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + HEDEMCGDCMD_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDEMCGDCMD_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDEMCGDCMD_REFRESH_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
		{
			return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDEMCGDCMD_GETFIGHTSTATECONFIG_OFFSET))(this);
		}

		::System::Void FIOBFGIGDGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDEMCGDCMD_FIOBFGIGDGA_OFFSET))(this);
		}

		::System::Void MCAEIGBDBEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDEMCGDCMD_MCAEIGBDBEC_OFFSET))(this);
		}

		::UnityEngine::Vector3 PLDAJIKABKG(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDEMCGDCMD_PLDAJIKABKG_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GIAPNPFFBFC(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDEMCGDCMD_GIAPNPFFBFC_OFFSET))(this, a1, a2, a3);
		}

	};
