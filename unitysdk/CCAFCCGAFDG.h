#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/RPG/Client/PoolGameObjectInstantiateStrategy.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GCAGGGBNBHP.h"
class AIBOPLOBAFN;
class AONFKEALCBK;
class BEAJIMEGNMH;
class BLOKEHHEMEJ;
class EJFKDHCJNBD;
class LFPJGOEOLNH;
namespace RPG::GameCore { class GameObjectPoolGroupSetting; }
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define CCAFCCGAFDG_ADJFIEOHHJB_OFFSET UNITYSDK_OFFSET(0xCE25980)
#define CCAFCCGAFDG_BGHCCCNENIA_OFFSET UNITYSDK_OFFSET(0xCE24160)
#define CCAFCCGAFDG_BKMMMJMJEIN_OFFSET UNITYSDK_OFFSET(0xCE25AE0)
#define CCAFCCGAFDG_CBLDKFHFINJ_OFFSET UNITYSDK_OFFSET(0xCE25920)
#define CCAFCCGAFDG_CEPJJKFLIHM_OFFSET UNITYSDK_OFFSET(0xCE24500)
#define CCAFCCGAFDG_CJMBECMOBAD_OFFSET UNITYSDK_OFFSET(0xCE25AC0)
#define CCAFCCGAFDG_CTOR_OFFSET UNITYSDK_OFFSET(0xCE25B20)
#define CCAFCCGAFDG_DBIKAOJEDHD_OFFSET UNITYSDK_OFFSET(0xCE24220)
#define CCAFCCGAFDG_DFJOEAIABMJ_OFFSET UNITYSDK_OFFSET(0xCE25AF0)
#define CCAFCCGAFDG_DGDAEIDLDNN_OFFSET UNITYSDK_OFFSET(0xCE259A0)
#define CCAFCCGAFDG_EBHNJMPEILL_OFFSET UNITYSDK_OFFSET(0xCE259B0)
#define CCAFCCGAFDG_EBLIFIJNBGC_OFFSET UNITYSDK_OFFSET(0xCE25090)
#define CCAFCCGAFDG_EDJGMILLLMH_OFFSET UNITYSDK_OFFSET(0xCE258D0)
#define CCAFCCGAFDG_EENEEPFJIAO_OFFSET UNITYSDK_OFFSET(0xCE258B0)
#define CCAFCCGAFDG_EJHNGJBAEID_OFFSET UNITYSDK_OFFSET(0xCE24470)
#define CCAFCCGAFDG_FLCDIJCHNEE_OFFSET UNITYSDK_OFFSET(0xCE25A00)
#define CCAFCCGAFDG_GET_FORBIDCACHE_OFFSET UNITYSDK_OFFSET(0xCE259E0)
#define CCAFCCGAFDG_GGHIFFDFAOK_OFFSET UNITYSDK_OFFSET(0xCE25220)
#define CCAFCCGAFDG_GGIIACJHCHN_OFFSET UNITYSDK_OFFSET(0xCE23D80)
#define CCAFCCGAFDG_GIHCCPLKJKG_OFFSET UNITYSDK_OFFSET(0xCE24330)
#define CCAFCCGAFDG_GMINLKOHMPB_OFFSET UNITYSDK_OFFSET(0xCE25AD0)
#define CCAFCCGAFDG_GNLLHBFOHLH_OFFSET UNITYSDK_OFFSET(0xCE23E00)
#define CCAFCCGAFDG_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xCE239B0)
#define CCAFCCGAFDG_HDKDNBHKKPP_OFFSET UNITYSDK_OFFSET(0xCE23D10)
#define CCAFCCGAFDG_HENKMFKOEKK_OFFSET UNITYSDK_OFFSET(0xCE245B0)
#define CCAFCCGAFDG_HMBDCLPJKOG_OFFSET UNITYSDK_OFFSET(0xCE24550)
#define CCAFCCGAFDG_ICCFGLIOMNK_OFFSET UNITYSDK_OFFSET(0xCE259C0)
#define CCAFCCGAFDG_IJPDHNBJJEK_OFFSET UNITYSDK_OFFSET(0xCE24060)
#define CCAFCCGAFDG_IKPIFPPPPIH_OFFSET UNITYSDK_OFFSET(0xCE25A10)
#define CCAFCCGAFDG_JDAKINOPPMO_OFFSET UNITYSDK_OFFSET(0xCE259D0)
#define CCAFCCGAFDG_JDNPPPMNMMM_OFFSET UNITYSDK_OFFSET(0xCE23FA0)
#define CCAFCCGAFDG_JFPLCEBPMOM_OFFSET UNITYSDK_OFFSET(0xCE258C0)
#define CCAFCCGAFDG_JKAHKJPAIME_OFFSET UNITYSDK_OFFSET(0xCE25B10)
#define CCAFCCGAFDG_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xCE23930)
#define CCAFCCGAFDG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCE24620)
#define CCAFCCGAFDG_KFGFADEEHIL_OFFSET UNITYSDK_OFFSET(0xCE24EA0)
#define CCAFCCGAFDG_KLMECHLJIMJ_OFFSET UNITYSDK_OFFSET(0xCE240F0)
#define CCAFCCGAFDG_KNBACLCLNON_OFFSET UNITYSDK_OFFSET(0xCE251B0)
#define CCAFCCGAFDG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCE23800)
#define CCAFCCGAFDG_LEHEEHLEONB_OFFSET UNITYSDK_OFFSET(0xCE25990)
#define CCAFCCGAFDG_LIPCOGHFBAP_OFFSET UNITYSDK_OFFSET(0xCE244C0)
#define CCAFCCGAFDG_MGPICNOBDEO_OFFSET UNITYSDK_OFFSET(0xCE25B00)
#define CCAFCCGAFDG_MMDLILNJJOL_OFFSET UNITYSDK_OFFSET(0xCE23AE0)
#define CCAFCCGAFDG_MPFKPJIAHHE_OFFSET UNITYSDK_OFFSET(0xCE23DF0)
#define CCAFCCGAFDG_MPMFFJJPKEB_OFFSET UNITYSDK_OFFSET(0xCE25AB0)
#define CCAFCCGAFDG_NIPJJLKGKDP_OFFSET UNITYSDK_OFFSET(0xCE245C0)
#define CCAFCCGAFDG_NMFGDMIOOCE_OFFSET UNITYSDK_OFFSET(0xCE24C90)
#define CCAFCCGAFDG_OCGDJAMBLFE_OFFSET UNITYSDK_OFFSET(0xCE23F40)
#define CCAFCCGAFDG_SET_FORBIDCACHE_OFFSET UNITYSDK_OFFSET(0xCE259F0)

inline static constexpr unsigned int CCAFCCGAFDG_TypeDefinitionIndex = 60665;

	class CCAFCCGAFDG : public ::System::Object
	{
	public:
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x10
		::LFPJGOEOLNH* IEGBIPMGBPA; // 0x18
		::Il2CppArray<::BLOKEHHEMEJ*>* AOIGFJGPGBH; // 0x20
		::RPG::GameCore::GameObjectPoolGroupSetting* PPLBAPIGMOF; // 0x28
		::System::String* AJPKDBHEABP; // 0x30
		::AIBOPLOBAFN* BNEHMPGKGNG; // 0x38
		::AIBOPLOBAFN* OLPAJFHHIFI; // 0x40
		::System::Collections::Generic::HashSet_1<::EJFKDHCJNBD*>* KCKEAKFFIDM; // 0x48
		::AONFKEALCBK* LFEOMNAMNPL; // 0x50
		::System::Predicate_1<::System::String*>* GNECDOKFAMG; // 0x58
		::AIBOPLOBAFN* CNGHACEOEOF; // 0x60
		::BEAJIMEGNMH* JAMIMBHKLKC; // 0x68
		::Il2CppArray<::BLOKEHHEMEJ*>* DONOJOICLFL; // 0x70
		::System::Int32 PNEDNGNAPBO; // 0x78
		::System::Int32 EBGGNNMDABN; // 0x7C
		::System::Int32 LFLPBNBBIBO; // 0x80
		::RPG::Client::CachedAssetLogicType CPJNLIBHCEI; // 0x84
		::RPG::Client::PoolGameObjectInstantiateStrategy JJOFIKOODCJ; // 0x88
		::System::Int32 HJJGKCMLBGN; // 0x8C
		::System::Int32 ECHAJMMKEJL; // 0x90
		::RPG::Client::GameObjectPoolUsage EBHCPAFNIIE; // 0x94
		::System::Single JNNALLJJKFK; // 0x98
		::System::Int32 GBJDOLGCDMF; // 0x9C
		::System::Boolean _ForbidCache_k__BackingField; // 0xA0
		::System::Boolean HAIIJABCNLE; // 0xA1
		::System::Byte _padding0[0x2];
		::System::Int32 IBBGCPOCEAL; // 0xA4
		::System::Int32 GMPKONIFMFK; // 0xA8
		::System::Int32 AJOPDHNKEPO; // 0xAC
		::System::Int32 IPAIBECBNJB; // 0xB0
		::System::UInt32 DHKMMOKELLF; // 0xB4
		::System::Boolean EFGFKJNBIGP; // 0xB8
		::System::Boolean BFHKGJDLLGH; // 0xB9
		::System::Boolean AOAFAPDIHEP; // 0xBA
		::System::Boolean DGNLMICFHGD; // 0xBB
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::LFPJGOEOLNH* a1, ::RPG::Client::GameObjectPoolUsage a2, ::System::String* a3, ::UnityEngine::Transform* a4, ::System::String* a5, ::System::Predicate_1<::System::String*>* a6, ::RPG::Client::PoolGameObjectInstantiateStrategy a7, ::RPG::Client::CachedAssetLogicType a8)
		{
			return ((::System::Void(*)(::PVOID, ::LFPJGOEOLNH*, ::RPG::Client::GameObjectPoolUsage, ::System::String*, ::UnityEngine::Transform*, ::System::String*, ::System::Predicate_1<::System::String*>*, ::RPG::Client::PoolGameObjectInstantiateStrategy, ::RPG::Client::CachedAssetLogicType))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void HCFINLKPIHL(::RPG::GameCore::GameObjectPoolGroupSetting* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameObjectPoolGroupSetting*, ::System::Boolean))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_HCFINLKPIHL_OFFSET))(this, a1, a2);
		}

		::System::Void MMDLILNJJOL(::RPG::GameCore::GameObjectPoolGroupSetting* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameObjectPoolGroupSetting*))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_MMDLILNJJOL_OFFSET))(this, a1);
		}

		::System::Boolean HDKDNBHKKPP(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_HDKDNBHKKPP_OFFSET))(this, a1);
		}

		::System::Void GGIIACJHCHN(::System::Boolean a1, ::AONFKEALCBK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::AONFKEALCBK*))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_GGIIACJHCHN_OFFSET))(this, a1, a2);
		}

		::AONFKEALCBK* MPFKPJIAHHE()
		{
			return ((::AONFKEALCBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_MPFKPJIAHHE_OFFSET))(this);
		}

		::System::Boolean GNLLHBFOHLH(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_GNLLHBFOHLH_OFFSET))(this, a1);
		}

		::System::Void OCGDJAMBLFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_OCGDJAMBLFE_OFFSET))(this);
		}

		::System::Void JDNPPPMNMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_JDNPPPMNMMM_OFFSET))(this);
		}

		::System::Void IJPDHNBJJEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_IJPDHNBJJEK_OFFSET))(this);
		}

		::System::Void KLMECHLJIMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_KLMECHLJIMJ_OFFSET))(this);
		}

		::System::Void BGHCCCNENIA(::AIBOPLOBAFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIBOPLOBAFN*))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_BGHCCCNENIA_OFFSET))(this, a1);
		}

		::System::Void DBIKAOJEDHD(::AIBOPLOBAFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIBOPLOBAFN*))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_DBIKAOJEDHD_OFFSET))(this, a1);
		}

		::System::Void GIHCCPLKJKG(::AIBOPLOBAFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIBOPLOBAFN*))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_GIHCCPLKJKG_OFFSET))(this, a1);
		}

		::System::Void EJHNGJBAEID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_EJHNGJBAEID_OFFSET))(this);
		}

		::System::Void LIPCOGHFBAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_LIPCOGHFBAP_OFFSET))(this);
		}

		::System::Void CEPJJKFLIHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_CEPJJKFLIHM_OFFSET))(this);
		}

		::System::Void HMBDCLPJKOG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_HMBDCLPJKOG_OFFSET))(this, a1);
		}

		::System::Void HENKMFKOEKK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_HENKMFKOEKK_OFFSET))(this, a1);
		}

		::System::Void NIPJJLKGKDP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_NIPJJLKGKDP_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void NMFGDMIOOCE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_NMFGDMIOOCE_OFFSET))(this, a1);
		}

		::System::Void KFGFADEEHIL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_KFGFADEEHIL_OFFSET))(this, a1);
		}

		::System::Void EBLIFIJNBGC(::EJFKDHCJNBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJFKDHCJNBD*))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_EBLIFIJNBGC_OFFSET))(this, a1);
		}

		::System::Void KNBACLCLNON(::EJFKDHCJNBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJFKDHCJNBD*))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_KNBACLCLNON_OFFSET))(this, a1);
		}

		::System::Boolean GGHIFFDFAOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_GGHIFFDFAOK_OFFSET))(this);
		}

		::System::Int32 EENEEPFJIAO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_EENEEPFJIAO_OFFSET))(this);
		}

		::System::Int32 JFPLCEBPMOM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_JFPLCEBPMOM_OFFSET))(this);
		}

		::System::Int32 EDJGMILLLMH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_EDJGMILLLMH_OFFSET))(this);
		}

		::System::Int32 CBLDKFHFINJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_CBLDKFHFINJ_OFFSET))(this);
		}

		::RPG::Client::GameObjectPoolUsage ADJFIEOHHJB()
		{
			return ((::RPG::Client::GameObjectPoolUsage(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_ADJFIEOHHJB_OFFSET))(this);
		}

		::RPG::Client::CachedAssetLogicType LEHEEHLEONB()
		{
			return ((::RPG::Client::CachedAssetLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_LEHEEHLEONB_OFFSET))(this);
		}

		::System::String* DGDAEIDLDNN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_DGDAEIDLDNN_OFFSET))(this);
		}

		::UnityEngine::Transform* EBHNJMPEILL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_EBHNJMPEILL_OFFSET))(this);
		}

		::RPG::Client::PoolGameObjectInstantiateStrategy ICCFGLIOMNK()
		{
			return ((::RPG::Client::PoolGameObjectInstantiateStrategy(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_ICCFGLIOMNK_OFFSET))(this);
		}

		::System::Void JDAKINOPPMO(::RPG::Client::PoolGameObjectInstantiateStrategy a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PoolGameObjectInstantiateStrategy))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_JDAKINOPPMO_OFFSET))(this, a1);
		}

		::System::Boolean get_ForbidCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_GET_FORBIDCACHE_OFFSET))(this);
		}

		::System::Void set_ForbidCache(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_SET_FORBIDCACHE_OFFSET))(this, a1);
		}

		::System::Boolean FLCDIJCHNEE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_FLCDIJCHNEE_OFFSET))(this);
		}

		::GCAGGGBNBHP IKPIFPPPPIH()
		{
			return ((::GCAGGGBNBHP(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_IKPIFPPPPIH_OFFSET))(this);
		}

		::System::Boolean MPMFFJJPKEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_MPMFFJJPKEB_OFFSET))(this);
		}

		::System::UInt32 CJMBECMOBAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_CJMBECMOBAD_OFFSET))(this);
		}

		::System::Boolean GMINLKOHMPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_GMINLKOHMPB_OFFSET))(this);
		}

		::System::Void BKMMMJMJEIN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_BKMMMJMJEIN_OFFSET))(this, a1);
		}

		::System::Int32 DFJOEAIABMJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_DFJOEAIABMJ_OFFSET))(this);
		}

		::AIBOPLOBAFN* MGPICNOBDEO()
		{
			return ((::AIBOPLOBAFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_MGPICNOBDEO_OFFSET))(this);
		}

		::System::Int32 JKAHKJPAIME()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAFCCGAFDG_JKAHKJPAIME_OFFSET))(this);
		}

	};
