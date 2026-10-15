#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIEMCICGAEM_AddScoreStatus.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/RPG/GameCore/BattleTargetIconType.h"
#include "unitysdk/RPG/GameCore/ScoringShowType.h"
class BPPEMKKNJCJ;
class PGAJLOKKBKJ;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleScoringChangeParams; }
namespace RPG::GameCore { class BattleTargetChangeParams; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CIEMCICGAEM_ACEIENKDIAG_OFFSET UNITYSDK_OFFSET(0xCF6C350)
#define CIEMCICGAEM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCF6D640)
#define CIEMCICGAEM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCF6D960)
#define CIEMCICGAEM_BIKPOJENBNO_OFFSET UNITYSDK_OFFSET(0xCF6BFF0)
#define CIEMCICGAEM_BJHHJKNJGOM_OFFSET UNITYSDK_OFFSET(0xCF6C780)
#define CIEMCICGAEM_BOLHIJCDIOG_OFFSET UNITYSDK_OFFSET(0xCF6D2A0)
#define CIEMCICGAEM_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF6DC90)
#define CIEMCICGAEM_CLDGOKIHILL_OFFSET UNITYSDK_OFFSET(0xCF6BCE0)
#define CIEMCICGAEM_CTOR_OFFSET UNITYSDK_OFFSET(0xCF6DC40)
#define CIEMCICGAEM_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xCF6BF80)
#define CIEMCICGAEM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xCF6A480)
#define CIEMCICGAEM_ELJLODGEPHN_OFFSET UNITYSDK_OFFSET(0xCF6CAE0)
#define CIEMCICGAEM_FDGCKJGJMDD_OFFSET UNITYSDK_OFFSET(0xCF6D430)
#define CIEMCICGAEM_FOHDONOPDFK_OFFSET UNITYSDK_OFFSET(0xCF6D360)
#define CIEMCICGAEM_GBNGLKMGJPI_OFFSET UNITYSDK_OFFSET(0xCF6C9A0)
#define CIEMCICGAEM_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xCF6A270)
#define CIEMCICGAEM_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xCF6A290)
#define CIEMCICGAEM_GMCMIFMHCHJ_OFFSET UNITYSDK_OFFSET(0xCF6A810)
#define CIEMCICGAEM_HDNBPDAODOD_OFFSET UNITYSDK_OFFSET(0xCF6BE70)
#define CIEMCICGAEM_HHFDFLEPPNN_OFFSET UNITYSDK_OFFSET(0xCF6A650)
#define CIEMCICGAEM_ILDBHNDGCIJ_OFFSET UNITYSDK_OFFSET(0xCF6BA90)
#define CIEMCICGAEM_JBINKLJOPLA_OFFSET UNITYSDK_OFFSET(0xCF6C560)
#define CIEMCICGAEM_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xCF6B910)
#define CIEMCICGAEM_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0xCF6BC40)
#define CIEMCICGAEM_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0xCF6D1A0)
#define CIEMCICGAEM_LNIMAGOCIKD_OFFSET UNITYSDK_OFFSET(0xCF6C720)
#define CIEMCICGAEM_LPADLLEKOEE_OFFSET UNITYSDK_OFFSET(0xCF6C640)
#define CIEMCICGAEM_MBLKJMFPIEO_OFFSET UNITYSDK_OFFSET(0xCF6C5D0)
#define CIEMCICGAEM_NCMGCAEPEKE_OFFSET UNITYSDK_OFFSET(0xCF6C300)
#define CIEMCICGAEM_NDKINNDFKGN_OFFSET UNITYSDK_OFFSET(0xCF6CB30)
#define CIEMCICGAEM_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xCF6A2D0)
#define CIEMCICGAEM_NKAFFAJJKIE_OFFSET UNITYSDK_OFFSET(0xCF6B9C0)
#define CIEMCICGAEM_NOHNKOBPDDN_OFFSET UNITYSDK_OFFSET(0xCF69FE0)
#define CIEMCICGAEM_OGMJALJIKNO_OFFSET UNITYSDK_OFFSET(0xCF6A7A0)
#define CIEMCICGAEM_OJFKOKFENJD_OFFSET UNITYSDK_OFFSET(0xCF6D560)
#define CIEMCICGAEM_PGMJJIGNHCF_OFFSET UNITYSDK_OFFSET(0xCF6C050)
#define CIEMCICGAEM_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xCF6A280)
#define CIEMCICGAEM__ONBIND_OFFSET UNITYSDK_OFFSET(0xCF69CB0)
#define CIEMCICGAEM__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xCF6BC00)
#define CIEMCICGAEM__ONTICK_OFFSET UNITYSDK_OFFSET(0xCF6BA30)

inline static constexpr unsigned int CIEMCICGAEM_TypeDefinitionIndex = 71848;

	class CIEMCICGAEM : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* BAFAAEFEBPJ; // 0x60
		::UnityEngine::Transform* EGFJKKLANAA; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PGAJLOKKBKJ*>*>* BKKHCMPENHP; // 0x70
		::UnityEngine::Transform* KPOGKCIDOCN; // 0x78
		::UnityEngine::AnimationState* DFGNANDJMGI; // 0x80
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x88
		::UnityEngine::UI::Text* DCOMPNACGJO; // 0x90
		::UnityEngine::Transform* NBMAJJLINGG; // 0x98
		::RPG::GameCore::LevelDataComponent* OOGADIKBBBA; // 0xA0
		::RPG::GameCore::LevelUIComponent* PNHILAGAMDO; // 0xA8
		::UnityEngine::Transform* NLIEMAJLLNF; // 0xB0
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0xB8
		::UnityEngine::UI::Text* JOMIDDFEFDK; // 0xC0
		::UnityEngine::ParticleSystem* AFMEJBOIJPC; // 0xC8
		::Il2CppArray<::BPPEMKKNJCJ*>* ENAIOFCCCBJ; // 0xD0
		::UnityEngine::Transform* CDAPHEBDDLL; // 0xD8
		::UnityEngine::ParticleSystem* KAPMCJCAKOD; // 0xE0
		::System::Int32 BAHCMBAINBM; // 0xE8
		::System::Boolean EOCGLLBKHCF; // 0xEC
		::System::Boolean AKBPNMEFGAO; // 0xED
		::System::Byte _padding0[0x2];
		::System::Int32 PBLECKHOIHO; // 0xF0
		::System::Int32 _Index_k__BackingField; // 0xF4
		::System::Single OOIDHDNKAFP; // 0xF8
		::System::Int32 IHAHFIAFPMA; // 0xFC
		::CIEMCICGAEM_AddScoreStatus CFDBFEENMAM; // 0x100
		::RPG::GameCore::ScoringShowType IPBPELECDBK; // 0x104
		static ::RPG::GameCore::BattleScoringDisplayType* StaticGet_PGBDJCMFMLA()
		{
			return (::RPG::GameCore::BattleScoringDisplayType*)UnitySDK::FromName("", "CIEMCICGAEM")->GetStaticField(0xA090);
		}

		static ::RPG::Client::TextID* StaticGet_DNGJPMIKNJN()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "CIEMCICGAEM")->GetStaticField(0xA098);
		}

		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* LEELOIGGNGG; // 0x0
		// static const ::System::String* JJBPMPKGBOH; // 0x0
		// static const ::System::String* PHCCGDLIIEO; // 0x0
		// static const ::System::String* HLAKHLOBKND; // 0x0
		// static const ::System::String* MIJIMFJDMDF; // 0x0
		// static const ::System::Object NKIMAJCMKEE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIEMCICGAEM_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM__ONBIND_OFFSET))(this);
		}

		::System::Void NOHNKOBPDDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_NOHNKOBPDDN_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CIEMCICGAEM_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_GET_TRANS_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIEMCICGAEM_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIEMCICGAEM__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM__ONDISPOSE_OFFSET))(this);
		}

		::System::Void KGDIPFNECJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIEMCICGAEM_KGDIPFNECJH_OFFSET))(this, a1);
		}

		::System::Void CLDGOKIHILL(::RPG::GameCore::BattleScoringChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + CIEMCICGAEM_CLDGOKIHILL_OFFSET))(this, a1);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CIEMCICGAEM_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void BIKPOJENBNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_BIKPOJENBNO_OFFSET))(this);
		}

		::System::Void NCMGCAEPEKE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIEMCICGAEM_NCMGCAEPEKE_OFFSET))(this, a1);
		}

		::System::Void HHFDFLEPPNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_HHFDFLEPPNN_OFFSET))(this);
		}

		::System::Void JBINKLJOPLA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIEMCICGAEM_JBINKLJOPLA_OFFSET))(this, a1);
		}

		::System::Void ACEIENKDIAG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIEMCICGAEM_ACEIENKDIAG_OFFSET))(this, a1);
		}

		::System::Void HDNBPDAODOD(::RPG::GameCore::BattleScoringChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + CIEMCICGAEM_HDNBPDAODOD_OFFSET))(this, a1);
		}

		::System::Void MBLKJMFPIEO(::RPG::GameCore::ScoringShowType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScoringShowType))((::PBYTE)hIl2Cpp + CIEMCICGAEM_MBLKJMFPIEO_OFFSET))(this, a1);
		}

		::System::Void PGMJJIGNHCF(::CIEMCICGAEM_AddScoreStatus a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::CIEMCICGAEM_AddScoreStatus, ::System::Boolean))((::PBYTE)hIl2Cpp + CIEMCICGAEM_PGMJJIGNHCF_OFFSET))(this, a1, a2);
		}

		::System::Void LNIMAGOCIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_LNIMAGOCIKD_OFFSET))(this);
		}

		::System::Void LPADLLEKOEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_LPADLLEKOEE_OFFSET))(this);
		}

		::System::Void ILDBHNDGCIJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIEMCICGAEM_ILDBHNDGCIJ_OFFSET))(this, a1);
		}

		::System::Void NKAFFAJJKIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_NKAFFAJJKIE_OFFSET))(this);
		}

		::System::Void OGMJALJIKNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_OGMJALJIKNO_OFFSET))(this);
		}

		::System::Void GMCMIFMHCHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_GMCMIFMHCHJ_OFFSET))(this);
		}

		::PGAJLOKKBKJ* GBNGLKMGJPI(::RPG::GameCore::BattleTargetIconType a1)
		{
			return ((::PGAJLOKKBKJ*(*)(::PVOID, ::RPG::GameCore::BattleTargetIconType))((::PBYTE)hIl2Cpp + CIEMCICGAEM_GBNGLKMGJPI_OFFSET))(this, a1);
		}

		::System::Void ELJLODGEPHN(::RPG::GameCore::BattleTargetChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CIEMCICGAEM_ELJLODGEPHN_OFFSET))(this, a1);
		}

		::System::Void NDKINNDFKGN(::RPG::GameCore::BattleTargetChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CIEMCICGAEM_NDKINNDFKGN_OFFSET))(this, a1);
		}

		::RPG::Client::TextID BJHHJKNJGOM()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_BJHHJKNJGOM_OFFSET))(this);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIEMCICGAEM_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void BOLHIJCDIOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIEMCICGAEM_BOLHIJCDIOG_OFFSET))(this, a1);
		}

		::System::Void FOHDONOPDFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIEMCICGAEM_FOHDONOPDFK_OFFSET))(this, a1);
		}

		::System::Void FDGCKJGJMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIEMCICGAEM_FDGCKJGJMDD_OFFSET))(this, a1);
		}

		::System::Void OJFKOKFENJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIEMCICGAEM_OJFKOKFENJD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEMCICGAEM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
