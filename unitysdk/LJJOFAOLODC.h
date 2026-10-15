#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AFOPMEOBPCM;
class BIHPEODCNAB;
class FMPCODLIOLG;
class JBHJMGCPBNN;
class JEIIMOFONFD;
class KOAOAKKCCPK;
class LJJOFAOLODC;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class MonoClickOutsideDetect; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define LJJOFAOLODC_ANBODBMLEKI_OFFSET UNITYSDK_OFFSET(0xB71B430)
#define LJJOFAOLODC_ANNJEGIOHGG_OFFSET UNITYSDK_OFFSET(0xB71AD50)
#define LJJOFAOLODC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB71C390)
#define LJJOFAOLODC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB71C510)
#define LJJOFAOLODC_BCDEMCEHMHK_OFFSET UNITYSDK_OFFSET(0xB71B1C0)
#define LJJOFAOLODC_BGPMFDHJBME_OFFSET UNITYSDK_OFFSET(0xB71ACE0)
#define LJJOFAOLODC_BOIBDNHMABO_OFFSET UNITYSDK_OFFSET(0xB71C000)
#define LJJOFAOLODC_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0xB71BDD0)
#define LJJOFAOLODC_CTOR_OFFSET UNITYSDK_OFFSET(0xB71C670)
#define LJJOFAOLODC_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB71ABF0)
#define LJJOFAOLODC_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB71AC90)
#define LJJOFAOLODC_FKNDGKKMMAF_OFFSET UNITYSDK_OFFSET(0xB71BCB0)
#define LJJOFAOLODC_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB71A3B0)
#define LJJOFAOLODC_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0xB71C0E0)
#define LJJOFAOLODC_HJMOEBGOCEP_OFFSET UNITYSDK_OFFSET(0xB71BF90)
#define LJJOFAOLODC_HKOLHPOMBCP_OFFSET UNITYSDK_OFFSET(0xB71AE40)
#define LJJOFAOLODC_KAELGIGOHKO_OFFSET UNITYSDK_OFFSET(0xB71B8B0)
#define LJJOFAOLODC_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0xB71B370)
#define LJJOFAOLODC_LCBADOLOBJH_OFFSET UNITYSDK_OFFSET(0xB71AEA0)
#define LJJOFAOLODC_MAGBOOCDBPJ_OFFSET UNITYSDK_OFFSET(0xB71BD70)
#define LJJOFAOLODC_MEMLOJDHOBC_OFFSET UNITYSDK_OFFSET(0xB71B2D0)
#define LJJOFAOLODC_MLOAKBJHKKK_OFFSET UNITYSDK_OFFSET(0xB71B790)
#define LJJOFAOLODC_MMFGPCHFDAO_OFFSET UNITYSDK_OFFSET(0xB71C260)
#define LJJOFAOLODC_NGFIEOCAEID_OFFSET UNITYSDK_OFFSET(0xB71BE90)
#define LJJOFAOLODC_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB71AAA0)
#define LJJOFAOLODC_NMIEAEACIIH_OFFSET UNITYSDK_OFFSET(0xB71BAD0)
#define LJJOFAOLODC_OEKNNMPPKGD_OFFSET UNITYSDK_OFFSET(0xB71B4C0)
#define LJJOFAOLODC_OEPPFACKDKI_OFFSET UNITYSDK_OFFSET(0xB71C1A0)
#define LJJOFAOLODC_OKNKJKJAIJG_OFFSET UNITYSDK_OFFSET(0xB71AF90)
#define LJJOFAOLODC_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0xB71B580)
#define LJJOFAOLODC_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB71A3C0)
#define LJJOFAOLODC__ONBIND_OFFSET UNITYSDK_OFFSET(0xB71A3D0)
#define LJJOFAOLODC__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB71AA50)
#define LJJOFAOLODC__ONTICK_OFFSET UNITYSDK_OFFSET(0xB71BB20)
#define LJJOFAOLODC___ONBIND_B__5_0_OFFSET UNITYSDK_OFFSET(0xB71C770)

inline static constexpr unsigned int LJJOFAOLODC_TypeDefinitionIndex = 72261;

	class LJJOFAOLODC : public ::FMPCODLIOLG
	{
	public:
		::AFOPMEOBPCM* EMEAEHDCJAF; // 0x60
		::UnityEngine::Transform* AHHGNBNNDDC; // 0x68
		::UnityEngine::Transform* JNOBFPEJPJL; // 0x70
		::RPG::Client::MonoClickOutsideDetect* AAFBCFCMAPI; // 0x78
		::UnityEngine::Animation* CKBJGHINKOE; // 0x80
		::System::Collections::Generic::Stack_1<::JBHJMGCPBNN*>* JOPILGIMBJM; // 0x88
		::System::Collections::Generic::Stack_1<::JBHJMGCPBNN*>* DDKLNFGEAIP; // 0x90
		::UnityEngine::UI::Button* PHMANKGJECM; // 0x98
		::UnityEngine::Transform* KNNGFIKIECO; // 0xA0
		::JEIIMOFONFD* AFNMELOGAND; // 0xA8
		::UnityEngine::RectTransform* DDACLPLHFKH; // 0xB0
		::UnityEngine::UI::Button* JDFGEHLFGKD; // 0xB8
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0xC0
		::UnityEngine::Animation* JMGIDLKMHDG; // 0xC8
		::RPG::UINavigation::UINavigationZoneManager* DJOAIHJIJKL; // 0xD0
		::RPG::Client::BattleGamePhase* NOHNKAIALPJ; // 0xD8
		::BIHPEODCNAB* PDLMOICFKFK; // 0xE0
		::System::Boolean KBBBFMBALGO; // 0xE8
		::System::Boolean NELLDNFMEOM; // 0xE9
		static ::LJJOFAOLODC** StaticGet__Instance_k__BackingField()
		{
			return (::LJJOFAOLODC**)UnitySDK::FromName("", "LJJOFAOLODC")->GetStaticField(0x26AE0);
		}

		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* KFGOLLPGJHG; // 0x0
		// static const ::System::String* KCIPGHEMDCA; // 0x0
		// static const ::System::String* GLLOBBILMHE; // 0x0
		// static const ::System::String* GFGMNJPCFHE; // 0x0
		// static const ::System::Object FINILKILDKP; // 0x0
		// static const ::System::Object FDABLDBLIPL; // 0x0
		// static const ::System::Object GIJLKHJMMEE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJOFAOLODC_CTOR_OFFSET))(this);
		}

		static ::LJJOFAOLODC* get_Instance()
		{
			return ((::LJJOFAOLODC*(*)())((::PBYTE)hIl2Cpp + LJJOFAOLODC_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::LJJOFAOLODC* a1)
		{
			return ((::System::Void(*)(::LJJOFAOLODC*))((::PBYTE)hIl2Cpp + LJJOFAOLODC_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJOFAOLODC__ONBIND_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJOFAOLODC__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJOFAOLODC_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + LJJOFAOLODC_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJOFAOLODC_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void ANNJEGIOHGG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJJOFAOLODC_ANNJEGIOHGG_OFFSET))(this, a1);
		}

		::System::Void LCBADOLOBJH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJJOFAOLODC_LCBADOLOBJH_OFFSET))(this, a1);
		}

		::System::Void BGPMFDHJBME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJOFAOLODC_BGPMFDHJBME_OFFSET))(this);
		}

		::JBHJMGCPBNN* OKNKJKJAIJG()
		{
			return ((::JBHJMGCPBNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJOFAOLODC_OKNKJKJAIJG_OFFSET))(this);
		}

		::System::Void BCDEMCEHMHK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJJOFAOLODC_BCDEMCEHMHK_OFFSET))(this, a1);
		}

		::System::Void MEMLOJDHOBC(::JBHJMGCPBNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBHJMGCPBNN*))((::PBYTE)hIl2Cpp + LJJOFAOLODC_MEMLOJDHOBC_OFFSET))(this, a1);
		}

		::System::Void KGDIPFNECJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LJJOFAOLODC_KGDIPFNECJH_OFFSET))(this, a1);
		}

		::System::Void ANBODBMLEKI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LJJOFAOLODC_ANBODBMLEKI_OFFSET))(this, a1);
		}

		::System::Void OEKNNMPPKGD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LJJOFAOLODC_OEKNNMPPKGD_OFFSET))(this, a1);
		}

		::System::Void PDPKAHJGCLM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + LJJOFAOLODC_PDPKAHJGCLM_OFFSET))(this, a1);
		}

		::System::Boolean MLOAKBJHKKK(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + LJJOFAOLODC_MLOAKBJHKKK_OFFSET))(this, a1);
		}

		::System::Void KAELGIGOHKO(::RPG::GameCore::AbilityCurrentShieldChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + LJJOFAOLODC_KAELGIGOHKO_OFFSET))(this, a1);
		}

		::System::Void NMIEAEACIIH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LJJOFAOLODC_NMIEAEACIIH_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LJJOFAOLODC__ONTICK_OFFSET))(this, a1);
		}

		::System::Void CAGIAMEFOLL(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + LJJOFAOLODC_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void HKOLHPOMBCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJOFAOLODC_HKOLHPOMBCP_OFFSET))(this);
		}

		::System::UInt32 NGFIEOCAEID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJOFAOLODC_NGFIEOCAEID_OFFSET))(this);
		}

		::System::Boolean FKNDGKKMMAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJOFAOLODC_FKNDGKKMMAF_OFFSET))(this);
		}

		::System::Boolean BOIBDNHMABO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJOFAOLODC_BOIBDNHMABO_OFFSET))(this);
		}

		::System::Boolean MAGBOOCDBPJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJOFAOLODC_MAGBOOCDBPJ_OFFSET))(this);
		}

		::System::Boolean HJMOEBGOCEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJOFAOLODC_HJMOEBGOCEP_OFFSET))(this);
		}

		::System::Void HDJHJFDNALE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJJOFAOLODC_HDJHJFDNALE_OFFSET))(this, a1);
		}

		::System::Void OEPPFACKDKI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJJOFAOLODC_OEPPFACKDKI_OFFSET))(this, a1);
		}

		::System::Void MMFGPCHFDAO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJJOFAOLODC_MMFGPCHFDAO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJOFAOLODC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJOFAOLODC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __OnBind_b__5_0(::FMPCODLIOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMPCODLIOLG*))((::PBYTE)hIl2Cpp + LJJOFAOLODC___ONBIND_B__5_0_OFFSET))(this, a1);
		}

	};
