#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLNCBOGAMFG_PlayerMotionUnreliableReason.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/MapRotationEnergyState.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BKCJLICDPMD;
class DLNCBOGAMFG_COMOEOCJNML;
class DLNCBOGAMFG_GJNPOMCKPNJ;
class FHEGNOPNICH;
class JLJPFFILKIO;
class KDMEFGANLKI;
class NPEHFAHLDNM;
namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class MapRotationEntityEffectConfig; }
namespace RPG::GameCore { class MapRotationGlobalConfig; }
namespace RPG::GameCore { class MapRotationTextConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DLNCBOGAMFG_ALMPINPIHEM_OFFSET UNITYSDK_OFFSET(0xF8B8F90)
#define DLNCBOGAMFG_BFLKDJBDHLO_OFFSET UNITYSDK_OFFSET(0xF8B41E0)
#define DLNCBOGAMFG_BOFAIMPEEJO_OFFSET UNITYSDK_OFFSET(0xF8B47D0)
#define DLNCBOGAMFG_CCNKBAIDKFN_OFFSET UNITYSDK_OFFSET(0xF8B3CB0)
#define DLNCBOGAMFG_CCTOR_OFFSET UNITYSDK_OFFSET(0xF8B9440)
#define DLNCBOGAMFG_CIFNOINMFJE_OFFSET UNITYSDK_OFFSET(0xF8B77C0)
#define DLNCBOGAMFG_CPHPOCMFEME_OFFSET UNITYSDK_OFFSET(0xF8B6960)
#define DLNCBOGAMFG_CTOR_OFFSET UNITYSDK_OFFSET(0xF8B9420)
#define DLNCBOGAMFG_DDIDAOCDFMP_OFFSET UNITYSDK_OFFSET(0xF8B8990)
#define DLNCBOGAMFG_DDLNNHPPANK_OFFSET UNITYSDK_OFFSET(0xF8B2F80)
#define DLNCBOGAMFG_DGMFEKMINMM_OFFSET UNITYSDK_OFFSET(0xF8B4C80)
#define DLNCBOGAMFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF8B3430)
#define DLNCBOGAMFG_EEENPKKHDJE_OFFSET UNITYSDK_OFFSET(0xF8B4B60)
#define DLNCBOGAMFG_EEICMMOGINN_OFFSET UNITYSDK_OFFSET(0xF8B76B0)
#define DLNCBOGAMFG_EGDMENEEIIN_OFFSET UNITYSDK_OFFSET(0xF8B3C00)
#define DLNCBOGAMFG_ELOIHAMPKLB_OFFSET UNITYSDK_OFFSET(0xF8B39C0)
#define DLNCBOGAMFG_FBLACKKANBM_OFFSET UNITYSDK_OFFSET(0xF8B4F00)
#define DLNCBOGAMFG_FIMFHCICJFN_OFFSET UNITYSDK_OFFSET(0xF8B73B0)
#define DLNCBOGAMFG_GBFOBMGGGGB_OFFSET UNITYSDK_OFFSET(0xF8B7360)
#define DLNCBOGAMFG_GET_CURRENTENERGY_OFFSET UNITYSDK_OFFSET(0xF8B9270)
#define DLNCBOGAMFG_GET_EMPTYCHARGERSET_OFFSET UNITYSDK_OFFSET(0xF8B9290)
#define DLNCBOGAMFG_GET_GLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xF8B93A0)
#define DLNCBOGAMFG_GET_LEAVEROTATABLEREGIONONENTERMAP_OFFSET UNITYSDK_OFFSET(0xF8B9380)
#define DLNCBOGAMFG_GET_MAXENERGY_OFFSET UNITYSDK_OFFSET(0xF8B9250)
#define DLNCBOGAMFG_GET_MONSTEREFFECTCONFIGS_OFFSET UNITYSDK_OFFSET(0xF8B93E0)
#define DLNCBOGAMFG_GET_NPCEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xF8B93C0)
#define DLNCBOGAMFG_GET_SPECIALNPCEFFECTCONFIGS_OFFSET UNITYSDK_OFFSET(0xF8B9400)
#define DLNCBOGAMFG_GET_USEDVOLUMEINFO_OFFSET UNITYSDK_OFFSET(0xF8B92B0)
#define DLNCBOGAMFG_GHEIGCGGOKJ_OFFSET UNITYSDK_OFFSET(0xF8B8F30)
#define DLNCBOGAMFG_GMGAJEGIFJJ_OFFSET UNITYSDK_OFFSET(0xF8B6F00)
#define DLNCBOGAMFG_HJHFBGGDCLP_OFFSET UNITYSDK_OFFSET(0xF8B9330)
#define DLNCBOGAMFG_HOAFIIGFLIE_OFFSET UNITYSDK_OFFSET(0xF8B4AC0)
#define DLNCBOGAMFG_HPFBPDOEHLI_OFFSET UNITYSDK_OFFSET(0xF8B5D10)
#define DLNCBOGAMFG_IBBLFIDBHJE_OFFSET UNITYSDK_OFFSET(0xF8B9040)
#define DLNCBOGAMFG_INIT_OFFSET UNITYSDK_OFFSET(0xF8B2CE0)
#define DLNCBOGAMFG_IPIBJHLCIIM_OFFSET UNITYSDK_OFFSET(0xF8B5C70)
#define DLNCBOGAMFG_JBKMIMBLODA_OFFSET UNITYSDK_OFFSET(0xF8B69F0)
#define DLNCBOGAMFG_JEPHJDLPDLO_OFFSET UNITYSDK_OFFSET(0xF8B3F40)
#define DLNCBOGAMFG_JPJMLGOLAMJ_OFFSET UNITYSDK_OFFSET(0xF8B42C0)
#define DLNCBOGAMFG_KEKKBJCMOMH_OFFSET UNITYSDK_OFFSET(0xF8B66E0)
#define DLNCBOGAMFG_KFOEGNAGOKF_OFFSET UNITYSDK_OFFSET(0xF8B7400)
#define DLNCBOGAMFG_KOOFDEIDGOO_OFFSET UNITYSDK_OFFSET(0xF8B8AA0)
#define DLNCBOGAMFG_KPCFJDJFDHL_OFFSET UNITYSDK_OFFSET(0xF8B4730)
#define DLNCBOGAMFG_LFMKADNIGHM_OFFSET UNITYSDK_OFFSET(0xF8B4860)
#define DLNCBOGAMFG_LNAPIAFFLBG_OFFSET UNITYSDK_OFFSET(0xF8B6C60)
#define DLNCBOGAMFG_LNJMEPDAMGK_OFFSET UNITYSDK_OFFSET(0xF8B92D0)
#define DLNCBOGAMFG_MCNKKNHFACI_OFFSET UNITYSDK_OFFSET(0xF8B7EF0)
#define DLNCBOGAMFG_MIGBPNGFHFH_OFFSET UNITYSDK_OFFSET(0xF8B7A30)
#define DLNCBOGAMFG_MKMOMFOOAGK_OFFSET UNITYSDK_OFFSET(0xF8B38C0)
#define DLNCBOGAMFG_NABJOLKHODO_OFFSET UNITYSDK_OFFSET(0xF8B7D80)
#define DLNCBOGAMFG_NKOMCMLIANF_OFFSET UNITYSDK_OFFSET(0xF8B35F0)
#define DLNCBOGAMFG_NOBHKKNDKGK_OFFSET UNITYSDK_OFFSET(0xF8B3050)
#define DLNCBOGAMFG_NODEDPINMHN_OFFSET UNITYSDK_OFFSET(0xF8B7B20)
#define DLNCBOGAMFG_OELGDLGMCEB_OFFSET UNITYSDK_OFFSET(0xF8B7AB0)
#define DLNCBOGAMFG_OFLOOFNPFFL_OFFSET UNITYSDK_OFFSET(0xF8B8D60)
#define DLNCBOGAMFG_OHNCBIEDDKG_OFFSET UNITYSDK_OFFSET(0xF8B3830)
#define DLNCBOGAMFG_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xF8B34F0)
#define DLNCBOGAMFG_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xF8B5FC0)
#define DLNCBOGAMFG_PANHIGKPNPD_OFFSET UNITYSDK_OFFSET(0xF8B3950)
#define DLNCBOGAMFG_PFCIFMCOONO_OFFSET UNITYSDK_OFFSET(0xF8B3660)
#define DLNCBOGAMFG_PGMKBLHAMCJ_OFFSET UNITYSDK_OFFSET(0xF8B5E10)
#define DLNCBOGAMFG_PJDIOMNGBKN_OFFSET UNITYSDK_OFFSET(0xF8B5B80)
#define DLNCBOGAMFG_SET_CURRENTENERGY_OFFSET UNITYSDK_OFFSET(0xF8B9280)
#define DLNCBOGAMFG_SET_EMPTYCHARGERSET_OFFSET UNITYSDK_OFFSET(0xF8B92A0)
#define DLNCBOGAMFG_SET_GLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xF8B93B0)
#define DLNCBOGAMFG_SET_LEAVEROTATABLEREGIONONENTERMAP_OFFSET UNITYSDK_OFFSET(0xF8B9390)
#define DLNCBOGAMFG_SET_MAXENERGY_OFFSET UNITYSDK_OFFSET(0xF8B9260)
#define DLNCBOGAMFG_SET_MONSTEREFFECTCONFIGS_OFFSET UNITYSDK_OFFSET(0xF8B93F0)
#define DLNCBOGAMFG_SET_NPCEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xF8B93D0)
#define DLNCBOGAMFG_SET_SPECIALNPCEFFECTCONFIGS_OFFSET UNITYSDK_OFFSET(0xF8B9410)
#define DLNCBOGAMFG_SET_USEDVOLUMEINFO_OFFSET UNITYSDK_OFFSET(0xF8B92C0)
#define DLNCBOGAMFG__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xF8B88F0)
#define DLNCBOGAMFG__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xF8B6020)

	class DLNCBOGAMFG : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::MapRotationEntityEffectConfig*>* _MonsterEffectConfigs_k__BackingField; // 0x10
		::RPG::Client::AchievementData* FKKABMHODDP; // 0x18
		::RPG::GameCore::MapRotationGlobalConfig* _GlobalConfig_k__BackingField; // 0x20
		::RPG::Client::AchievementData* JBPCLHHEIFA; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*>* _SpecialNpcEffectConfigs_k__BackingField; // 0x30
		::DLNCBOGAMFG_COMOEOCJNML* NFPGKGHMFGF; // 0x38
		::RPG::GameCore::MapRotationEntityEffectConfig* _NpcEffectConfig_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::UInt32>* NFDFFHELMDH; // 0x48
		::System::Collections::Generic::HashSet_1<::System::ValueTuple>* _EmptyChargerSet_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Single>* _UsedVolumeInfo_k__BackingField; // 0x58
		::System::Collections::Generic::HashSet_1<::System::ValueTuple>* NLOOAKCDFMI; // 0x60
		::RPG::Client::MapDef* DJKBENNBHNG; // 0x68
		::RPG::Client::AchievementData* LKNFGJELIPI; // 0x70
		::DLNCBOGAMFG_GJNPOMCKPNJ* PFFOHHPEJAJ; // 0x78
		::System::Int32 _MaxEnergy_k__BackingField; // 0x80
		::RPG::GameCore::MapRotationEnergyState LNOCABDAFHN; // 0x84
		::System::Boolean _LeaveRotatableRegionOnEnterMap_k__BackingField; // 0x88
		::System::Byte _padding0[0x3];
		::System::Int32 _CurrentEnergy_k__BackingField; // 0x8C
		static ::System::String** StaticGet_IHCCAHJHKCL()
		{
			return (::System::String**)UnitySDK::FromName("", "DLNCBOGAMFG")->GetStaticField(0x5C060);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLNCBOGAMFG_CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void NKOMCMLIANF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_NKOMCMLIANF_OFFSET))(this);
		}

		::System::Void OHNCBIEDDKG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_OHNCBIEDDKG_OFFSET))(this, a1);
		}

		::System::Void MKMOMFOOAGK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_MKMOMFOOAGK_OFFSET))(this, a1);
		}

		::System::Boolean PANHIGKPNPD(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_PANHIGKPNPD_OFFSET))(this, a1, a2);
		}

		::System::Void ELOIHAMPKLB(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_ELOIHAMPKLB_OFFSET))(this, a1, a2);
		}

		::System::Boolean BFLKDJBDHLO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_BFLKDJBDHLO_OFFSET))(this);
		}

		::System::Void JPJMLGOLAMJ(::System::UInt32 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_JPJMLGOLAMJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HOAFIIGFLIE(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_HOAFIIGFLIE_OFFSET))(this, a1, a2);
		}

		::System::Void EEENPKKHDJE(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_EEENPKKHDJE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DGMFEKMINMM(::System::Boolean a1, ::DLNCBOGAMFG_PlayerMotionUnreliableReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::DLNCBOGAMFG_PlayerMotionUnreliableReason))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_DGMFEKMINMM_OFFSET))(this, a1, a2);
		}

		::System::Void FBLACKKANBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_FBLACKKANBM_OFFSET))(this);
		}

		::System::Void HPFBPDOEHLI(::FHEGNOPNICH* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::FHEGNOPNICH*, ::System::Boolean))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_HPFBPDOEHLI_OFFSET))(this, a1, a2);
		}

		::System::Void PGMKBLHAMCJ(::System::Int32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_PGMKBLHAMCJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void KEKKBJCMOMH(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_KEKKBJCMOMH_OFFSET))(this, a1, a2);
		}

		::System::Void JBKMIMBLODA(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_JBKMIMBLODA_OFFSET))(this, a1, a2);
		}

		::System::Void LNAPIAFFLBG(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_LNAPIAFFLBG_OFFSET))(this, a1, a2);
		}

		::System::Void GMGAJEGIFJJ(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GMGAJEGIFJJ_OFFSET))(this, a1, a2);
		}

		::System::Void KFOEGNAGOKF(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_KFOEGNAGOKF_OFFSET))(this, a1, a2);
		}

		::System::Void EEICMMOGINN(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_EEICMMOGINN_OFFSET))(this, a1, a2);
		}

		::System::Void CIFNOINMFJE(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_CIFNOINMFJE_OFFSET))(this, a1, a2);
		}

		::System::Void MIGBPNGFHFH(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_MIGBPNGFHFH_OFFSET))(this, a1, a2);
		}

		::System::Void OELGDLGMCEB(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_OELGDLGMCEB_OFFSET))(this, a1, a2);
		}

		::System::Void NODEDPINMHN(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_NODEDPINMHN_OFFSET))(this, a1, a2);
		}

		::System::Void MCNKKNHFACI(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_MCNKKNHFACI_OFFSET))(this, a1, a2);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void DDIDAOCDFMP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_DDIDAOCDFMP_OFFSET))(this, a1);
		}

		::System::Void PFCIFMCOONO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_PFCIFMCOONO_OFFSET))(this);
		}

		::System::Void NOBHKKNDKGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_NOBHKKNDKGK_OFFSET))(this);
		}

		::System::Boolean CCNKBAIDKFN(::NPEHFAHLDNM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_CCNKBAIDKFN_OFFSET))(this, a1);
		}

		::System::Void OFLOOFNPFFL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::NPEHFAHLDNM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_OFLOOFNPFFL_OFFSET))(this, a1, a2, a3);
		}

		::KDMEFGANLKI* KPCFJDJFDHL(::UnityEngine::Vector3 a1)
		{
			return ((::KDMEFGANLKI*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_KPCFJDJFDHL_OFFSET))(this, a1);
		}

		::BKCJLICDPMD* BOFAIMPEEJO(::UnityEngine::Quaternion a1)
		{
			return ((::BKCJLICDPMD*(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_BOFAIMPEEJO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 IPIBJHLCIIM(::KDMEFGANLKI* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::KDMEFGANLKI*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_IPIBJHLCIIM_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion PJDIOMNGBKN(::BKCJLICDPMD* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::BKCJLICDPMD*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_PJDIOMNGBKN_OFFSET))(this, a1);
		}

		::System::Void CPHPOCMFEME(::JLJPFFILKIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLJPFFILKIO*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_CPHPOCMFEME_OFFSET))(this, a1);
		}

		::System::Void JEPHJDLPDLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_JEPHJDLPDLO_OFFSET))(this);
		}

		::System::Void KOOFDEIDGOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_KOOFDEIDGOO_OFFSET))(this);
		}

		::System::Void LFMKADNIGHM(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_LFMKADNIGHM_OFFSET))(this, a1, a2);
		}

		::System::Void IBBLFIDBHJE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_IBBLFIDBHJE_OFFSET))(this, a1);
		}

		::System::Void NABJOLKHODO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_NABJOLKHODO_OFFSET))(this, a1, a2);
		}

		::System::Boolean ALMPINPIHEM(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_ALMPINPIHEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MapRotationInfo* EGDMENEEIIN()
		{
			return ((::RPG::Client::MapRotationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_EGDMENEEIIN_OFFSET))(this);
		}

		::System::Int32 get_MaxEnergy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GET_MAXENERGY_OFFSET))(this);
		}

		::System::Void set_MaxEnergy(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_SET_MAXENERGY_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentEnergy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GET_CURRENTENERGY_OFFSET))(this);
		}

		::System::Void set_CurrentEnergy(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_SET_CURRENTENERGY_OFFSET))(this, a1);
		}

		::RPG::GameCore::MapRotationEnergyState GBFOBMGGGGB()
		{
			return ((::RPG::GameCore::MapRotationEnergyState(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GBFOBMGGGGB_OFFSET))(this);
		}

		::System::Void DDLNNHPPANK(::RPG::GameCore::MapRotationEnergyState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationEnergyState))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_DDLNNHPPANK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::ValueTuple>* get_EmptyChargerSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::ValueTuple>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GET_EMPTYCHARGERSET_OFFSET))(this);
		}

		::System::Void set_EmptyChargerSet(::System::Collections::Generic::HashSet_1<::System::ValueTuple>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::ValueTuple>*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_SET_EMPTYCHARGERSET_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Single>* get_UsedVolumeInfo()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GET_USEDVOLUMEINFO_OFFSET))(this);
		}

		::System::Void set_UsedVolumeInfo(::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Single>*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_SET_USEDVOLUMEINFO_OFFSET))(this, a1);
		}

		::System::Boolean GHEIGCGGOKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GHEIGCGGOKJ_OFFSET))(this);
		}

		::System::Boolean LNJMEPDAMGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_LNJMEPDAMGK_OFFSET))(this);
		}

		::System::Boolean HJHFBGGDCLP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_HJHFBGGDCLP_OFFSET))(this);
		}

		::System::Boolean get_LeaveRotatableRegionOnEnterMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GET_LEAVEROTATABLEREGIONONENTERMAP_OFFSET))(this);
		}

		::System::Void set_LeaveRotatableRegionOnEnterMap(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_SET_LEAVEROTATABLEREGIONONENTERMAP_OFFSET))(this, a1);
		}

		::RPG::GameCore::MapRotationGlobalConfig* get_GlobalConfig()
		{
			return ((::RPG::GameCore::MapRotationGlobalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GET_GLOBALCONFIG_OFFSET))(this);
		}

		::System::Void set_GlobalConfig(::RPG::GameCore::MapRotationGlobalConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationGlobalConfig*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_SET_GLOBALCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::MapRotationEntityEffectConfig* get_NpcEffectConfig()
		{
			return ((::RPG::GameCore::MapRotationEntityEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GET_NPCEFFECTCONFIG_OFFSET))(this);
		}

		::System::Void set_NpcEffectConfig(::RPG::GameCore::MapRotationEntityEffectConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationEntityEffectConfig*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_SET_NPCEFFECTCONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::MapRotationEntityEffectConfig*>* get_MonsterEffectConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::MapRotationEntityEffectConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GET_MONSTEREFFECTCONFIGS_OFFSET))(this);
		}

		::System::Void set_MonsterEffectConfigs(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::MapRotationEntityEffectConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterRank, ::RPG::GameCore::MapRotationEntityEffectConfig*>*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_SET_MONSTEREFFECTCONFIGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*>* get_SpecialNpcEffectConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_GET_SPECIALNPCEFFECTCONFIGS_OFFSET))(this);
		}

		::System::Void set_SpecialNpcEffectConfigs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*>*))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_SET_SPECIALNPCEFFECTCONFIGS_OFFSET))(this, a1);
		}

		::RPG::GameCore::MapRotationTextConfig* FIMFHCICJFN()
		{
			return ((::RPG::GameCore::MapRotationTextConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_FIMFHCICJFN_OFFSET))(this);
		}

	};
