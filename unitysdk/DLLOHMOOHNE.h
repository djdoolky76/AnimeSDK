#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKFMIDBJDIA;
class LKKHHKCMLDN;
class NOCCOPGOIKK;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class GameObjectAudio; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCMonsterHintSoundConfig; }
namespace RPG::GameCore { class NPCSoundConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define DLLOHMOOHNE_AAFOEFBJHJC_OFFSET UNITYSDK_OFFSET(0xF8A8630)
#define DLLOHMOOHNE_AHGECJMEBBA_OFFSET UNITYSDK_OFFSET(0xF8AC7B0)
#define DLLOHMOOHNE_ALNKLKEJPPE_OFFSET UNITYSDK_OFFSET(0xF8AA6B0)
#define DLLOHMOOHNE_BCLOHMOBCHE_OFFSET UNITYSDK_OFFSET(0xF8AACC0)
#define DLLOHMOOHNE_BEFEJNHBIIL_OFFSET UNITYSDK_OFFSET(0xF8ACD40)
#define DLLOHMOOHNE_BGCIHDCMBNK_OFFSET UNITYSDK_OFFSET(0xF8AB4E0)
#define DLLOHMOOHNE_BIFOLOLMIMP_OFFSET UNITYSDK_OFFSET(0xF8A9D90)
#define DLLOHMOOHNE_BPAEPFOAJEN_OFFSET UNITYSDK_OFFSET(0xF8A84F0)
#define DLLOHMOOHNE_BPLEEHPIEHF_OFFSET UNITYSDK_OFFSET(0xF8A9970)
#define DLLOHMOOHNE_CCTOR_OFFSET UNITYSDK_OFFSET(0xF8ACD70)
#define DLLOHMOOHNE_CTOR_OFFSET UNITYSDK_OFFSET(0xF8A8030)
#define DLLOHMOOHNE_DADAMABCONI_OFFSET UNITYSDK_OFFSET(0xF8A9AE0)
#define DLLOHMOOHNE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF8A80D0)
#define DLLOHMOOHNE_DOJAMKJKLHA_OFFSET UNITYSDK_OFFSET(0xF8ACC40)
#define DLLOHMOOHNE_DOPMDIKDBAP_OFFSET UNITYSDK_OFFSET(0xF8A9040)
#define DLLOHMOOHNE_ECJNAMBLKLL_OFFSET UNITYSDK_OFFSET(0xF8AB5A0)
#define DLLOHMOOHNE_EDDKEECFPPE_OFFSET UNITYSDK_OFFSET(0xF8AB640)
#define DLLOHMOOHNE_EHCLBEHBFFP_OFFSET UNITYSDK_OFFSET(0xF8A8690)
#define DLLOHMOOHNE_FFBMPAKJBMA_OFFSET UNITYSDK_OFFSET(0xF8AA810)
#define DLLOHMOOHNE_FHADOJHKHDI_OFFSET UNITYSDK_OFFSET(0xF8AA4A0)
#define DLLOHMOOHNE_FKJEEBDPOJD_OFFSET UNITYSDK_OFFSET(0xF8A9760)
#define DLLOHMOOHNE_GEIPKGCMGDK_OFFSET UNITYSDK_OFFSET(0xF8AC760)
#define DLLOHMOOHNE_GET_WATERCOLOR_OFFSET UNITYSDK_OFFSET(0xF8ACD50)
#define DLLOHMOOHNE_GMOFGOHCADN_OFFSET UNITYSDK_OFFSET(0xF8AA460)
#define DLLOHMOOHNE_HCCNFGFALNG_OFFSET UNITYSDK_OFFSET(0xF8A85E0)
#define DLLOHMOOHNE_HMAFPIPIPOB_OFFSET UNITYSDK_OFFSET(0xF8AA850)
#define DLLOHMOOHNE_IIECOJOAPNC_OFFSET UNITYSDK_OFFSET(0xF8A9670)
#define DLLOHMOOHNE_IMLFCGIBCHA_OFFSET UNITYSDK_OFFSET(0xF8A9F00)
#define DLLOHMOOHNE_JDLIGIOHECO_OFFSET UNITYSDK_OFFSET(0xF8A8D10)
#define DLLOHMOOHNE_JHGMONIJGHK_OFFSET UNITYSDK_OFFSET(0xF8ACD20)
#define DLLOHMOOHNE_JKJEGJEKLBF_OFFSET UNITYSDK_OFFSET(0xF8AB5F0)
#define DLLOHMOOHNE_JMKBLIEDOBK_OFFSET UNITYSDK_OFFSET(0xF8AB770)
#define DLLOHMOOHNE_KKCPLHFPEFJ_OFFSET UNITYSDK_OFFSET(0xF8A8DE0)
#define DLLOHMOOHNE_LDBCHIOPPKL_OFFSET UNITYSDK_OFFSET(0xF8AC9B0)
#define DLLOHMOOHNE_LEEJNKIHHKN_OFFSET UNITYSDK_OFFSET(0xF8A8C50)
#define DLLOHMOOHNE_LGPMJMDCMLE_OFFSET UNITYSDK_OFFSET(0xF8A9F50)
#define DLLOHMOOHNE_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xF8A8930)
#define DLLOHMOOHNE_LMNLFACEPNC_OFFSET UNITYSDK_OFFSET(0xF8ACD30)
#define DLLOHMOOHNE_LOIPNPMGINC_OFFSET UNITYSDK_OFFSET(0xF8ACAB0)
#define DLLOHMOOHNE_MLGHABHGECM_OFFSET UNITYSDK_OFFSET(0xF8ABE90)
#define DLLOHMOOHNE_MPLFEMBEFJA_OFFSET UNITYSDK_OFFSET(0xF8AAD10)
#define DLLOHMOOHNE_NEKKKJJPJHN_OFFSET UNITYSDK_OFFSET(0xF8A8C00)
#define DLLOHMOOHNE_NGCGCBBBPNN_OFFSET UNITYSDK_OFFSET(0xF8A9180)
#define DLLOHMOOHNE_OEPPMPHOJPC_OFFSET UNITYSDK_OFFSET(0xF8AA2E0)
#define DLLOHMOOHNE_OGHBCBMIHEK_OFFSET UNITYSDK_OFFSET(0xF8ABBE0)
#define DLLOHMOOHNE_OIEIIHMHGNM_OFFSET UNITYSDK_OFFSET(0xF8AA610)
#define DLLOHMOOHNE_OJDDGHLKBDL_OFFSET UNITYSDK_OFFSET(0xF8A8360)
#define DLLOHMOOHNE_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xF8A9120)
#define DLLOHMOOHNE_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xF8A9910)
#define DLLOHMOOHNE_OPFKJDMNIHB_OFFSET UNITYSDK_OFFSET(0xF8A8F60)
#define DLLOHMOOHNE_PEONEOBEFBG_OFFSET UNITYSDK_OFFSET(0xF8ACCC0)
#define DLLOHMOOHNE_PKNPJKFNBNG_OFFSET UNITYSDK_OFFSET(0xF8AC470)
#define DLLOHMOOHNE_SET_WATERCOLOR_OFFSET UNITYSDK_OFFSET(0xF8ACD60)
#define DLLOHMOOHNE_TICK_OFFSET UNITYSDK_OFFSET(0xF8A9A20)

inline static constexpr unsigned int DLLOHMOOHNE_TypeDefinitionIndex = 57068;

	class DLLOHMOOHNE : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::NPCMonsterHintSoundConfig* JIBDIPLKCMN; // 0x18
		::RPG::GameCore::NPCSoundConfig* CFPOJLPMPCO; // 0x20
		::RPG::Client::AdventurePhase* HKDOPJJJALA; // 0x28
		::NOCCOPGOIKK* IHMCFAGIPFG; // 0x30
		::UnityEngine::Transform* KHKDECKBKAD; // 0x38
		::System::String* CAACACOCLEI; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* CHFEJGOMNFD; // 0x48
		::RPG::Client::GameObjectAudio* IBPBIPPHKGI; // 0x50
		::System::String* CIHFBKDBKMA; // 0x58
		::System::String* ONOJAMPKCBB; // 0x60
		::UnityEngine::Transform* NEHEJBBBIMB; // 0x68
		::System::Action* CDOOFLBOLNH; // 0x70
		::System::String* CADIBFBDBCB; // 0x78
		::UnityEngine::Collider* JGPLBJIJEGD; // 0x80
		::UnityEngine::Transform* FLFGHHJDMDP; // 0x88
		::System::Collections::Generic::List_1<::LKKHHKCMLDN*>* GKNCPFJCPMD; // 0x90
		::RPG::GameCore::AdventureCharacterController* KCIMJOOHMKC; // 0x98
		::UnityEngine::Vector3 JCBHPJEMKBA; // 0xA0
		::System::Single DJLJJMGABKH; // 0xAC
		::UnityEngine::Color _waterColor_k__BackingField; // 0xB0
		::System::Int32 HDJIJJGBCAC; // 0xC0
		::System::Boolean JNECJPADBHL; // 0xC4
		::System::Boolean ELAHKHACHJA; // 0xC5
		::System::Boolean JLBLDDLFIHB; // 0xC6
		::System::Boolean IAMCONEKFEG; // 0xC7
		::System::Boolean ENCKNGODENG; // 0xC8
		::System::Boolean OKBFIBGOBCK; // 0xC9
		::System::Boolean CMMLNONIMBP; // 0xCA
		::System::Boolean MEGDBHGAAJG; // 0xCB
		::System::Boolean HCLMAKDIPKP; // 0xCC
		::System::Byte _padding0[0x3];
		::System::Int32 BADIIFEHOGP; // 0xD0
		::RPG::GameCore::SurfaceType NONNMEEOPJF; // 0xD4
		::System::Int32 FBGBGMPOHIE; // 0xD8
		static ::System::String** StaticGet_BACMDDIOMIC()
		{
			return (::System::String**)UnitySDK::FromName("", "DLLOHMOOHNE")->GetStaticField(0x59B40);
		}

		static ::System::String** StaticGet_PPAPPPHPAAK()
		{
			return (::System::String**)UnitySDK::FromName("", "DLLOHMOOHNE")->GetStaticField(0x59B48);
		}

		static ::RPG::Client::MonoEffect** StaticGet_FGDODPLJGJI()
		{
			return (::RPG::Client::MonoEffect**)UnitySDK::FromName("", "DLLOHMOOHNE")->GetStaticField(0x59B50);
		}

		// static const ::System::Object EPAFNFAHKJC; // 0x0
		// static const ::System::Object BEMJEAHHNKM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLLOHMOOHNE_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_DISPOSE_OFFSET))(this);
		}

		::System::Void AAFOEFBJHJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_AAFOEFBJHJC_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_LMCEDCHJKFF_OFFSET))(this, a1, a2);
		}

		::System::Void NEKKKJJPJHN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_NEKKKJJPJHN_OFFSET))(this, a1);
		}

		::System::Void LEEJNKIHHKN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_LEEJNKIHHKN_OFFSET))(this, a1);
		}

		::System::Void KKCPLHFPEFJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_KKCPLHFPEFJ_OFFSET))(this, a1);
		}

		::System::Void OPFKJDMNIHB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_OPFKJDMNIHB_OFFSET))(this, a1);
		}

		::System::Void DOPMDIKDBAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_DOPMDIKDBAP_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_TICK_OFFSET))(this, a1);
		}

		::System::Void IMLFCGIBCHA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_IMLFCGIBCHA_OFFSET))(this, a1);
		}

		::System::Void LGPMJMDCMLE(::RPG::GameCore::NPCSoundConfig* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCSoundConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_LGPMJMDCMLE_OFFSET))(this, a1, a2);
		}

		::System::Void OEPPMPHOJPC(::RPG::GameCore::NPCMonsterHintSoundConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterHintSoundConfig*))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_OEPPMPHOJPC_OFFSET))(this, a1);
		}

		::RPG::GameCore::NPCSoundConfig* GMOFGOHCADN()
		{
			return ((::RPG::GameCore::NPCSoundConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_GMOFGOHCADN_OFFSET))(this);
		}

		::System::Void FHADOJHKHDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_FHADOJHKHDI_OFFSET))(this);
		}

		::System::Void EHCLBEHBFFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_EHCLBEHBFFP_OFFSET))(this);
		}

		::System::Void ALNKLKEJPPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_ALNKLKEJPPE_OFFSET))(this);
		}

		::System::Void FFBMPAKJBMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_FFBMPAKJBMA_OFFSET))(this);
		}

		::System::Void HMAFPIPIPOB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_HMAFPIPIPOB_OFFSET))(this, a1);
		}

		::System::Void JDLIGIOHECO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_JDLIGIOHECO_OFFSET))(this);
		}

		::System::Void OJDDGHLKBDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_OJDDGHLKBDL_OFFSET))(this);
		}

		::System::Void BCLOHMOBCHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_BCLOHMOBCHE_OFFSET))(this);
		}

		::System::Void MPLFEMBEFJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_MPLFEMBEFJA_OFFSET))(this);
		}

		::System::Void BGCIHDCMBNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_BGCIHDCMBNK_OFFSET))(this);
		}

		::System::Void ECJNAMBLKLL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_ECJNAMBLKLL_OFFSET))(this, a1);
		}

		::System::Void JKJEGJEKLBF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_JKJEGJEKLBF_OFFSET))(this, a1);
		}

		::System::Void EDDKEECFPPE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_EDDKEECFPPE_OFFSET))(this, a1);
		}

		::System::Void NGCGCBBBPNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_NGCGCBBBPNN_OFFSET))(this);
		}

		::System::Int32 MLGHABHGECM(::RPG::GameCore::SurfaceType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_MLGHABHGECM_OFFSET))(this, a1);
		}

		::RPG::GameCore::SurfaceType JMKBLIEDOBK()
		{
			return ((::RPG::GameCore::SurfaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_JMKBLIEDOBK_OFFSET))(this);
		}

		::System::Void PKNPJKFNBNG(::RPG::GameCore::SurfaceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_PKNPJKFNBNG_OFFSET))(this, a1);
		}

		::System::Void OGHBCBMIHEK(::RPG::GameCore::SurfaceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_OGHBCBMIHEK_OFFSET))(this, a1);
		}

		::System::Void OIEIIHMHGNM(::LKKHHKCMLDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKKHHKCMLDN*))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_OIEIIHMHGNM_OFFSET))(this, a1);
		}

		::System::Void AHGECJMEBBA(::LKKHHKCMLDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKKHHKCMLDN*))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_AHGECJMEBBA_OFFSET))(this, a1);
		}

		::System::Void GEIPKGCMGDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_GEIPKGCMGDK_OFFSET))(this);
		}

		::System::Void DADAMABCONI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_DADAMABCONI_OFFSET))(this);
		}

		::System::Void LDBCHIOPPKL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_LDBCHIOPPKL_OFFSET))(this, a1);
		}

		::System::Void BIFOLOLMIMP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_BIFOLOLMIMP_OFFSET))(this, a1);
		}

		::System::Void LOIPNPMGINC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_LOIPNPMGINC_OFFSET))(this);
		}

		::System::Void IIECOJOAPNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_IIECOJOAPNC_OFFSET))(this);
		}

		::System::Void BPAEPFOAJEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_BPAEPFOAJEN_OFFSET))(this);
		}

		::System::Void DOJAMKJKLHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_DOJAMKJKLHA_OFFSET))(this, a1);
		}

		::System::Void HCCNFGFALNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_HCCNFGFALNG_OFFSET))(this);
		}

		::System::String* PEONEOBEFBG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_PEONEOBEFBG_OFFSET))(this);
		}

		::System::Void FKJEEBDPOJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_FKJEEBDPOJD_OFFSET))(this);
		}

		::System::Void BPLEEHPIEHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_BPLEEHPIEHF_OFFSET))(this);
		}

		::RPG::GameCore::SurfaceType JHGMONIJGHK()
		{
			return ((::RPG::GameCore::SurfaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_JHGMONIJGHK_OFFSET))(this);
		}

		::System::String* LMNLFACEPNC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_LMNLFACEPNC_OFFSET))(this);
		}

		::RPG::GameCore::NPCMonsterHintSoundConfig* BEFEJNHBIIL()
		{
			return ((::RPG::GameCore::NPCMonsterHintSoundConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_BEFEJNHBIIL_OFFSET))(this);
		}

		::UnityEngine::Color get_waterColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_GET_WATERCOLOR_OFFSET))(this);
		}

		::System::Void set_waterColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DLLOHMOOHNE_SET_WATERCOLOR_OFFSET))(this, a1);
		}

	};
