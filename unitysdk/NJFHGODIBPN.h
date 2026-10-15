#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ECharacterNavSteerMode.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/CCBBMJPLKME.h"
#include "unitysdk/LLFLBBCHACG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ADKFPNMPIDD;
class NJFHGODIBPN;
class NJFHGODIBPN_BNDKBMLLKBO;
namespace RPG::Client { class SpeciallyRootMotionBakedConfig; }
namespace RPG::GameCore { class AdventureAIControllerConfig; }
namespace RPG::GameCore { class AdventureCharacterController; }

#define NJFHGODIBPN_BIBHPMDDEBM_OFFSET UNITYSDK_OFFSET(0xBC08610)
#define NJFHGODIBPN_BIPNKJPCJMN_OFFSET UNITYSDK_OFFSET(0xBC087B0)
#define NJFHGODIBPN_BPOCOHFIAOH_OFFSET UNITYSDK_OFFSET(0xBC08420)
#define NJFHGODIBPN_CDPKJHPNGOB_OFFSET UNITYSDK_OFFSET(0xBC08020)
#define NJFHGODIBPN_CTOR_OFFSET UNITYSDK_OFFSET(0xBC077E0)
#define NJFHGODIBPN_DEHGCMBOLMD_OFFSET UNITYSDK_OFFSET(0xBC08590)
#define NJFHGODIBPN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC07890)
#define NJFHGODIBPN_DPLDDKIPJOK_OFFSET UNITYSDK_OFFSET(0xBC08D30)
#define NJFHGODIBPN_EPCLBKJOJJO_OFFSET UNITYSDK_OFFSET(0xBC08580)
#define NJFHGODIBPN_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xBC08F60)
#define NJFHGODIBPN_GET_OWNERCONTROLLER_OFFSET UNITYSDK_OFFSET(0xBC08F70)
#define NJFHGODIBPN_HCPKGEBAICK_OFFSET UNITYSDK_OFFSET(0xBC07A30)
#define NJFHGODIBPN_HNEADNPJHEB_OFFSET UNITYSDK_OFFSET(0xBC07BF0)
#define NJFHGODIBPN_HOEJNDNDIOD_OFFSET UNITYSDK_OFFSET(0xBC08B40)
#define NJFHGODIBPN_IJOFIIFDGAO_OFFSET UNITYSDK_OFFSET(0xBC08380)
#define NJFHGODIBPN_JCNDEOGNCIN_OFFSET UNITYSDK_OFFSET(0xBC07D80)
#define NJFHGODIBPN_KFLODEMLPCI_OFFSET UNITYSDK_OFFSET(0xBC07FB0)
#define NJFHGODIBPN_LGOFOAGBGEO_OFFSET UNITYSDK_OFFSET(0xBC07750)
#define NJFHGODIBPN_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xBC077F0)
#define NJFHGODIBPN_MMJBKEFLCGE_OFFSET UNITYSDK_OFFSET(0xBC082D0)
#define NJFHGODIBPN_NIKGGCAKIEJ_OFFSET UNITYSDK_OFFSET(0xBC08960)
#define NJFHGODIBPN_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0xBC07AD0)
#define NJFHGODIBPN_PBDEPJAJOJB_OFFSET UNITYSDK_OFFSET(0xBC08210)
#define NJFHGODIBPN_PJFFJCNOLMK_OFFSET UNITYSDK_OFFSET(0xBC08090)
#define NJFHGODIBPN_SET_OWNERCONTROLLER_OFFSET UNITYSDK_OFFSET(0xBC08F80)
#define NJFHGODIBPN_TICK_OFFSET UNITYSDK_OFFSET(0xBC07910)

inline static constexpr unsigned int NJFHGODIBPN_TypeDefinitionIndex = 56990;

	class NJFHGODIBPN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::NJFHGODIBPN* KGKGJOFKHNE; // 0x18
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x20
		::NJFHGODIBPN* _OwnerController_k__BackingField; // 0x28
		::RPG::Client::SpeciallyRootMotionBakedConfig* PNGOALPMDDK; // 0x30
		::ADKFPNMPIDD* KLCPHDFLMEK; // 0x38
		::RPG::GameCore::AdventureAIControllerConfig* IGHAHBNLIJA; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_CTOR_OFFSET))(this);
		}

		::NJFHGODIBPN* LGOFOAGBGEO()
		{
			return ((::NJFHGODIBPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_LGOFOAGBGEO_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::AdventureAIControllerConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAIControllerConfig*))((::PBYTE)hIl2Cpp + NJFHGODIBPN_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJFHGODIBPN_TICK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NINDHOGICJD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_NINDHOGICJD_OFFSET))(this);
		}

		::UnityEngine::Quaternion HNEADNPJHEB()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_HNEADNPJHEB_OFFSET))(this);
		}

		::UnityEngine::Vector3 JCNDEOGNCIN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_JCNDEOGNCIN_OFFSET))(this);
		}

		::RPG::GameCore::ECharacterNavSteerMode KFLODEMLPCI(::RPG::GameCore::CharacterMotionFlag a1)
		{
			return ((::RPG::GameCore::ECharacterNavSteerMode(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + NJFHGODIBPN_KFLODEMLPCI_OFFSET))(this, a1);
		}

		::System::Boolean CDPKJHPNGOB(::RPG::GameCore::CharacterMotionFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + NJFHGODIBPN_CDPKJHPNGOB_OFFSET))(this, a1);
		}

		::System::Boolean PJFFJCNOLMK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NJFHGODIBPN_PJFFJCNOLMK_OFFSET))(this, a1);
		}

		::RPG::Client::SpeciallyRootMotionBakedConfig* PBDEPJAJOJB()
		{
			return ((::RPG::Client::SpeciallyRootMotionBakedConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_PBDEPJAJOJB_OFFSET))(this);
		}

		::System::Boolean MMJBKEFLCGE(::System::Single a1, ::RPG::GameCore::CharacterMotionFlag a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::GameCore::CharacterMotionFlag, ::System::Single))((::PBYTE)hIl2Cpp + NJFHGODIBPN_MMJBKEFLCGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IJOFIIFDGAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_IJOFIIFDGAO_OFFSET))(this);
		}

		::System::Void BPOCOHFIAOH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NJFHGODIBPN_BPOCOHFIAOH_OFFSET))(this, a1);
		}

		::System::Void DEHGCMBOLMD(::NJFHGODIBPN_BNDKBMLLKBO* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::NJFHGODIBPN_BNDKBMLLKBO*, ::System::Boolean))((::PBYTE)hIl2Cpp + NJFHGODIBPN_DEHGCMBOLMD_OFFSET))(this, a1, a2);
		}

		::NJFHGODIBPN_BNDKBMLLKBO* BIBHPMDDEBM(::LLFLBBCHACG a1)
		{
			return ((::NJFHGODIBPN_BNDKBMLLKBO*(*)(::PVOID, ::LLFLBBCHACG))((::PBYTE)hIl2Cpp + NJFHGODIBPN_BIBHPMDDEBM_OFFSET))(this, a1);
		}

		::NJFHGODIBPN_BNDKBMLLKBO* BIPNKJPCJMN(::LLFLBBCHACG a1, ::CCBBMJPLKME a2)
		{
			return ((::NJFHGODIBPN_BNDKBMLLKBO*(*)(::PVOID, ::LLFLBBCHACG, ::CCBBMJPLKME))((::PBYTE)hIl2Cpp + NJFHGODIBPN_BIPNKJPCJMN_OFFSET))(this, a1, a2);
		}

		::NJFHGODIBPN_BNDKBMLLKBO* NIKGGCAKIEJ()
		{
			return ((::NJFHGODIBPN_BNDKBMLLKBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_NIKGGCAKIEJ_OFFSET))(this);
		}

		::NJFHGODIBPN_BNDKBMLLKBO* HOEJNDNDIOD(::CCBBMJPLKME a1)
		{
			return ((::NJFHGODIBPN_BNDKBMLLKBO*(*)(::PVOID, ::CCBBMJPLKME))((::PBYTE)hIl2Cpp + NJFHGODIBPN_HOEJNDNDIOD_OFFSET))(this, a1);
		}

		::NJFHGODIBPN_BNDKBMLLKBO* DPLDDKIPJOK(::System::UInt32 a1, ::System::Boolean a2, ::System::Single a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::System::Nullable_1<::UnityEngine::Quaternion> a5)
		{
			return ((::NJFHGODIBPN_BNDKBMLLKBO*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + NJFHGODIBPN_DPLDDKIPJOK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HCPKGEBAICK(::ADKFPNMPIDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADKFPNMPIDD*))((::PBYTE)hIl2Cpp + NJFHGODIBPN_HCPKGEBAICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureAIControllerConfig* FMHKLHAKMKO()
		{
			return ((::RPG::GameCore::AdventureAIControllerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_FMHKLHAKMKO_OFFSET))(this);
		}

		::System::Boolean EPCLBKJOJJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_EPCLBKJOJJO_OFFSET))(this);
		}

		::NJFHGODIBPN* get_OwnerController()
		{
			return ((::NJFHGODIBPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFHGODIBPN_GET_OWNERCONTROLLER_OFFSET))(this);
		}

		::System::Void set_OwnerController(::NJFHGODIBPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJFHGODIBPN*))((::PBYTE)hIl2Cpp + NJFHGODIBPN_SET_OWNERCONTROLLER_OFFSET))(this, a1);
		}

	};
