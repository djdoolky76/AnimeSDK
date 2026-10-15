#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DBLMKONGKGL;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class CurveShakeConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ShakeDistanceAttenuation; }
namespace RPG::GameCore { class VCameraOverrideShakeV2; }
namespace RPG::GameCore { class VCameraShakeV2; }

#define KJCHLFOFENJ_AMBEHFAGMEE_OFFSET UNITYSDK_OFFSET(0xB438E60)
#define KJCHLFOFENJ_APCFFHBAGNC_OFFSET UNITYSDK_OFFSET(0xB438600)
#define KJCHLFOFENJ_BHJKIKBINOH_OFFSET UNITYSDK_OFFSET(0xB438F90)
#define KJCHLFOFENJ_BMBFCPNPMPH_OFFSET UNITYSDK_OFFSET(0xB439B90)
#define KJCHLFOFENJ_CIFPINJJAEA_OFFSET UNITYSDK_OFFSET(0xB439200)
#define KJCHLFOFENJ_CMADIALGELO_OFFSET UNITYSDK_OFFSET(0xB4390C0)
#define KJCHLFOFENJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB4371D0)
#define KJCHLFOFENJ_FGMHAGJOAEJ_OFFSET UNITYSDK_OFFSET(0xB438BB0)
#define KJCHLFOFENJ_FNOHHMFHJPN_OFFSET UNITYSDK_OFFSET(0xB438970)
#define KJCHLFOFENJ_GET_ISUSEFULLPERIOD_OFFSET UNITYSDK_OFFSET(0xB439B70)
#define KJCHLFOFENJ_GET_OVERRIDESHAKECONFIG_OFFSET UNITYSDK_OFFSET(0xB439B30)
#define KJCHLFOFENJ_GET_OVERRIDESHAKESCALE_OFFSET UNITYSDK_OFFSET(0xB439B10)
#define KJCHLFOFENJ_GET_SHAKECONFIG_OFFSET UNITYSDK_OFFSET(0xB439AB0)
#define KJCHLFOFENJ_GET_SHAKEMAXRANGE_OFFSET UNITYSDK_OFFSET(0xB439AF0)
#define KJCHLFOFENJ_GET_SHAKESOURCESCALE_OFFSET UNITYSDK_OFFSET(0xB439B50)
#define KJCHLFOFENJ_GET_TOBEREMOVE_OFFSET UNITYSDK_OFFSET(0xB439AD0)
#define KJCHLFOFENJ_GHMDACLBDHL_OFFSET UNITYSDK_OFFSET(0xB437680)
#define KJCHLFOFENJ_GLGBOACOEFI_OFFSET UNITYSDK_OFFSET(0xB439770)
#define KJCHLFOFENJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB4394F0)
#define KJCHLFOFENJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB4378D0)
#define KJCHLFOFENJ_JLEMAGIHAIA_OFFSET UNITYSDK_OFFSET(0xB437D10)
#define KJCHLFOFENJ_LBHPBHAFLIP_OFFSET UNITYSDK_OFFSET(0xB437DA0)
#define KJCHLFOFENJ_LBINHKAILOH_OFFSET UNITYSDK_OFFSET(0xB437800)
#define KJCHLFOFENJ_LMPHIHHFPJC_OFFSET UNITYSDK_OFFSET(0xB437E30)
#define KJCHLFOFENJ_MBLMJJAPJPP_OFFSET UNITYSDK_OFFSET(0xB439120)
#define KJCHLFOFENJ_NADKNCJOBEN_OFFSET UNITYSDK_OFFSET(0xB438D30)
#define KJCHLFOFENJ_NCCLKBJPPJA_OFFSET UNITYSDK_OFFSET(0xB437ED0)
#define KJCHLFOFENJ_NEPAJBOPPCD_OFFSET UNITYSDK_OFFSET(0xB438110)
#define KJCHLFOFENJ_NPIDHFMBIBO_OFFSET UNITYSDK_OFFSET(0xB437610)
#define KJCHLFOFENJ_NPKBLDAPIHE_OFFSET UNITYSDK_OFFSET(0xB439180)
#define KJCHLFOFENJ_OPOLCKJCNLD_OFFSET UNITYSDK_OFFSET(0xB4395B0)
#define KJCHLFOFENJ_PBCONFPIBIG_OFFSET UNITYSDK_OFFSET(0xB439650)
#define KJCHLFOFENJ_PLMDDDJAGDI_OFFSET UNITYSDK_OFFSET(0xB4373D0)
#define KJCHLFOFENJ_PLNBBGBECMO_OFFSET UNITYSDK_OFFSET(0xB439710)
#define KJCHLFOFENJ_SET_ISUSEFULLPERIOD_OFFSET UNITYSDK_OFFSET(0xB439B80)
#define KJCHLFOFENJ_SET_OVERRIDESHAKECONFIG_OFFSET UNITYSDK_OFFSET(0xB439B40)
#define KJCHLFOFENJ_SET_OVERRIDESHAKESCALE_OFFSET UNITYSDK_OFFSET(0xB439B20)
#define KJCHLFOFENJ_SET_SHAKECONFIG_OFFSET UNITYSDK_OFFSET(0xB439AC0)
#define KJCHLFOFENJ_SET_SHAKEMAXRANGE_OFFSET UNITYSDK_OFFSET(0xB439B00)
#define KJCHLFOFENJ_SET_SHAKESOURCESCALE_OFFSET UNITYSDK_OFFSET(0xB439B60)
#define KJCHLFOFENJ_SET_TOBEREMOVE_OFFSET UNITYSDK_OFFSET(0xB439AE0)

inline static constexpr unsigned int KJCHLFOFENJ_TypeDefinitionIndex = 69644;

	class KJCHLFOFENJ : public ::System::Object
	{
	public:
		::RPG::GameCore::VCameraShakeV2* _ShakeConfig_k__BackingField; // 0x10
		::RPG::Client::CameraBlendCurve* HBIDCFJAHPB; // 0x18
		::RPG::GameCore::GameEntity* EICFPOKFIMM; // 0x20
		::RPG::GameCore::VCameraOverrideShakeV2* _OverrideShakeConfig_k__BackingField; // 0x28
		::RPG::Client::CameraBlendCurve* MNBFKPLCCCH; // 0x30
		::Il2CppArray<::DBLMKONGKGL*>* ICLACMCEFBO; // 0x38
		::RPG::Client::CameraBlendCurve* MEBLLOLHJOL; // 0x40
		::RPG::GameCore::ShakeDistanceAttenuation* BIDKIGEIHBB; // 0x48
		::Il2CppArray<::DBLMKONGKGL*>* OJFKMHHGCGP; // 0x50
		::UnityEngine::Vector3 PANJENHNOKN; // 0x58
		::UnityEngine::Vector3 NIOKLIHGCOP; // 0x64
		::System::Single MMOCIIJHFHL; // 0x70
		::System::Boolean _TobeRemove_k__BackingField; // 0x74
		::System::Boolean BDMKAJMHCEM; // 0x75
		::System::Boolean _IsUseFullPeriod_k__BackingField; // 0x76
		::System::Byte _padding0[0x1];
		::System::Single _OverrideShakeScale_k__BackingField; // 0x78
		::System::Single _ShakeMaxRange_k__BackingField; // 0x7C
		::UnityEngine::Vector3 MFMOADOCDHA; // 0x80
		::System::Single EIEBOOGADEA; // 0x8C
		::System::Single CJPNPGHNFFA; // 0x90
		::System::Single LILDLLBELEE; // 0x94
		::UnityEngine::Vector3 FPADGNAAMJA; // 0x98
		::System::Single ANIOMBLBDLB; // 0xA4
		::UnityEngine::Vector3 DDFFIKOEMKE; // 0xA8
		::System::Single LDIFFNOPNKO; // 0xB4
		::System::Single PJJLEJDPNHI; // 0xB8
		::System::Single _ShakeSourceScale_k__BackingField; // 0xBC
		::System::Single OBCNPJBHCOM; // 0xC0
		::System::Single NCJHOFNLKDD; // 0xC4
		::System::Single BKFEKHJGLMD; // 0xC8
		// static const ::System::Object FBNLGOEEHKI; // 0x0
		::System::Void _ctor(::RPG::GameCore::VCameraShakeV2* a1, ::RPG::GameCore::VCameraOverrideShakeV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*, ::RPG::GameCore::VCameraOverrideShakeV2*))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GHMDACLBDHL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_GHMDACLBDHL_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean LMPHIHHFPJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_LMPHIHHFPJC_OFFSET))(this);
		}

		::UnityEngine::Vector3 NCCLKBJPPJA(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_NCCLKBJPPJA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 APCFFHBAGNC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_APCFFHBAGNC_OFFSET))(this);
		}

		::UnityEngine::Vector3 FNOHHMFHJPN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_FNOHHMFHJPN_OFFSET))(this);
		}

		::UnityEngine::Vector3 NADKNCJOBEN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_NADKNCJOBEN_OFFSET))(this);
		}

		::UnityEngine::Vector3 BHJKIKBINOH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_BHJKIKBINOH_OFFSET))(this);
		}

		::System::Single JLEMAGIHAIA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_JLEMAGIHAIA_OFFSET))(this);
		}

		::System::Single LBHPBHAFLIP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_LBHPBHAFLIP_OFFSET))(this);
		}

		::System::Boolean CMADIALGELO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_CMADIALGELO_OFFSET))(this);
		}

		::System::Boolean MBLMJJAPJPP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_MBLMJJAPJPP_OFFSET))(this);
		}

		::System::Void NPKBLDAPIHE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_NPKBLDAPIHE_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_HADOHLNHHGB_OFFSET))(this);
		}

		::UnityEngine::Vector3 NEPAJBOPPCD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_NEPAJBOPPCD_OFFSET))(this);
		}

		::System::Single PBCONFPIBIG(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_PBCONFPIBIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPIDHFMBIBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_NPIDHFMBIBO_OFFSET))(this);
		}

		::System::Void LBINHKAILOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_LBINHKAILOH_OFFSET))(this);
		}

		::System::Single CIFPINJJAEA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_CIFPINJJAEA_OFFSET))(this, a1);
		}

		::System::Single PLNBBGBECMO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_PLNBBGBECMO_OFFSET))(this);
		}

		::UnityEngine::Vector3 AMBEHFAGMEE(::Il2CppArray<::DBLMKONGKGL*>* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Il2CppArray<::DBLMKONGKGL*>*))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_AMBEHFAGMEE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GLGBOACOEFI(::DBLMKONGKGL* a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::DBLMKONGKGL*, ::System::Single))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_GLGBOACOEFI_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::DBLMKONGKGL*>* PLMDDDJAGDI(::Il2CppArray<::RPG::GameCore::CurveShakeConfig*>* a1)
		{
			return ((::Il2CppArray<::DBLMKONGKGL*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::CurveShakeConfig*>*))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_PLMDDDJAGDI_OFFSET))(this, a1);
		}

		::System::Void OPOLCKJCNLD(::Il2CppArray<::DBLMKONGKGL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::DBLMKONGKGL*>*))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_OPOLCKJCNLD_OFFSET))(this, a1);
		}

		::System::Single FGMHAGJOAEJ(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_FGMHAGJOAEJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::VCameraShakeV2* get_ShakeConfig()
		{
			return ((::RPG::GameCore::VCameraShakeV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_GET_SHAKECONFIG_OFFSET))(this);
		}

		::System::Void set_ShakeConfig(::RPG::GameCore::VCameraShakeV2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_SET_SHAKECONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_TobeRemove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_GET_TOBEREMOVE_OFFSET))(this);
		}

		::System::Void set_TobeRemove(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_SET_TOBEREMOVE_OFFSET))(this, a1);
		}

		::System::Single get_ShakeMaxRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_GET_SHAKEMAXRANGE_OFFSET))(this);
		}

		::System::Void set_ShakeMaxRange(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_SET_SHAKEMAXRANGE_OFFSET))(this, a1);
		}

		::System::Single get_OverrideShakeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_GET_OVERRIDESHAKESCALE_OFFSET))(this);
		}

		::System::Void set_OverrideShakeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_SET_OVERRIDESHAKESCALE_OFFSET))(this, a1);
		}

		::RPG::GameCore::VCameraOverrideShakeV2* get_OverrideShakeConfig()
		{
			return ((::RPG::GameCore::VCameraOverrideShakeV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_GET_OVERRIDESHAKECONFIG_OFFSET))(this);
		}

		::System::Void set_OverrideShakeConfig(::RPG::GameCore::VCameraOverrideShakeV2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraOverrideShakeV2*))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_SET_OVERRIDESHAKECONFIG_OFFSET))(this, a1);
		}

		::System::Single get_ShakeSourceScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_GET_SHAKESOURCESCALE_OFFSET))(this);
		}

		::System::Void set_ShakeSourceScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_SET_SHAKESOURCESCALE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUseFullPeriod()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_GET_ISUSEFULLPERIOD_OFFSET))(this);
		}

		::System::Void set_IsUseFullPeriod(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_SET_ISUSEFULLPERIOD_OFFSET))(this, a1);
		}

		::System::Void BMBFCPNPMPH(::RPG::GameCore::ShakeDistanceAttenuation* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ShakeDistanceAttenuation*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KJCHLFOFENJ_BMBFCPNPMPH_OFFSET))(this, a1, a2);
		}

	};
