#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class LevelAreaManager; }

#define CMLIOLLFLOC_BMMPDPGJPKM_OFFSET UNITYSDK_OFFSET(0x1B1A29C0)
#define CMLIOLLFLOC_BMNLKALFHDN_OFFSET UNITYSDK_OFFSET(0x1B1A2CC0)
#define CMLIOLLFLOC_BPNMABIFCAC_OFFSET UNITYSDK_OFFSET(0x1B1A2740)
#define CMLIOLLFLOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A31F0)
#define CMLIOLLFLOC_DALCAJNEHPK_OFFSET UNITYSDK_OFFSET(0x1B1A3080)
#define CMLIOLLFLOC_ECEGFBEAJHO_1_OFFSET UNITYSDK_OFFSET(0x1B1A2A30)
#define CMLIOLLFLOC_ECEGFBEAJHO_OFFSET UNITYSDK_OFFSET(0x1B1A2EE0)
#define CMLIOLLFLOC_GGIBLFOHHAE_OFFSET UNITYSDK_OFFSET(0x1B1A3010)
#define CMLIOLLFLOC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1B1A3190)
#define CMLIOLLFLOC_IPNDINHJMDN_OFFSET UNITYSDK_OFFSET(0x1B1A2E20)
#define CMLIOLLFLOC_JMHCFBNBAHL_OFFSET UNITYSDK_OFFSET(0x1B1A3110)
#define CMLIOLLFLOC_KGEHFCPMCNM_OFFSET UNITYSDK_OFFSET(0x1B1A2640)
#define CMLIOLLFLOC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B1A25E0)
#define CMLIOLLFLOC_OGEHJFNHJBD_OFFSET UNITYSDK_OFFSET(0x1B1A2F50)
#define CMLIOLLFLOC_PHAMPDPFEGP_OFFSET UNITYSDK_OFFSET(0x1B1A2C30)

inline static constexpr unsigned int CMLIOLLFLOC_TypeDefinitionIndex = 81537;

	class CMLIOLLFLOC : public ::System::Object
	{
	public:
		::RPG::GameCore::AnchorInfo* CMMAGFGDHIH; // 0x10
		::RPG::GameCore::LevelAreaManager* LAGDLLOKNNJ; // 0x18
		::System::Boolean LLPDOGJNKIM; // 0x20
		::System::Boolean BLICPINGNCL; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLIOLLFLOC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::LevelAreaManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaManager*))((::PBYTE)hIl2Cpp + CMLIOLLFLOC_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Boolean BPNMABIFCAC(::RPG::GameCore::AnchorInfo* a1, ::RPG::GameCore::VCameraBlendType a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AnchorInfo*, ::RPG::GameCore::VCameraBlendType, ::System::Single))((::PBYTE)hIl2Cpp + CMLIOLLFLOC_BPNMABIFCAC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PHAMPDPFEGP(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CMLIOLLFLOC_PHAMPDPFEGP_OFFSET))(this, a1);
		}

		::System::Void KGEHFCPMCNM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMLIOLLFLOC_KGEHFCPMCNM_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineVirtualCamera* GGIBLFOHHAE()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLIOLLFLOC_GGIBLFOHHAE_OFFSET))(this);
		}

		::System::Void DALCAJNEHPK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMLIOLLFLOC_DALCAJNEHPK_OFFSET))(this, a1);
		}

		::System::Void JMHCFBNBAHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLIOLLFLOC_JMHCFBNBAHL_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLIOLLFLOC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void ECEGFBEAJHO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMLIOLLFLOC_ECEGFBEAJHO_OFFSET))(this, a1);
		}

		::System::Void ECEGFBEAJHO_1(::RPG::GameCore::VCameraBlendType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraBlendType, ::System::Single))((::PBYTE)hIl2Cpp + CMLIOLLFLOC_ECEGFBEAJHO_1_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean BMMPDPGJPKM(::RPG::GameCore::VCameraBlendType a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::VCameraBlendType, ::System::Single))((::PBYTE)hIl2Cpp + CMLIOLLFLOC_BMMPDPGJPKM_OFFSET))(a1, a2);
		}

		static ::System::Void BMNLKALFHDN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CMLIOLLFLOC_BMNLKALFHDN_OFFSET))(a1);
		}

		::System::Boolean IPNDINHJMDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLIOLLFLOC_IPNDINHJMDN_OFFSET))(this);
		}

		::System::Void OGEHJFNHJBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLIOLLFLOC_OGEHJFNHJBD_OFFSET))(this);
		}

	};
