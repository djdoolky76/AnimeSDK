#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class BNBOAMEBAOE;
class ECCKLFIHNOH;
class EKFMIDBJDIA;
class GELIALJDFBL;
class KDJNAAOFMMJ;
namespace RPG::Client { class TutorialSupportModule; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OnEventCallBack; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTutorial; }
namespace System { class Object; }
namespace System { class String; }

#define FBAOHOKMKDL_AGGMACCGEMM_OFFSET UNITYSDK_OFFSET(0x15692E10)
#define FBAOHOKMKDL_AIEBAFCKIMJ_OFFSET UNITYSDK_OFFSET(0x156927B0)
#define FBAOHOKMKDL_AMBHGMOJLJN_OFFSET UNITYSDK_OFFSET(0x15690FD0)
#define FBAOHOKMKDL_AOPFDLAACEE_OFFSET UNITYSDK_OFFSET(0x156906D0)
#define FBAOHOKMKDL_BFGJMLHFDDP_OFFSET UNITYSDK_OFFSET(0x1568ED70)
#define FBAOHOKMKDL_BMOCMPKOACC_OFFSET UNITYSDK_OFFSET(0x15693F30)
#define FBAOHOKMKDL_BPLOLOCGLPA_OFFSET UNITYSDK_OFFSET(0x1568F250)
#define FBAOHOKMKDL_CCHMMNEPCDN_OFFSET UNITYSDK_OFFSET(0x156936E0)
#define FBAOHOKMKDL_CFEMLLOABAA_OFFSET UNITYSDK_OFFSET(0x15692CE0)
#define FBAOHOKMKDL_CJCLPBLJGMG_OFFSET UNITYSDK_OFFSET(0x15693E50)
#define FBAOHOKMKDL_COMPHAGGDLE_OFFSET UNITYSDK_OFFSET(0x1568F8A0)
#define FBAOHOKMKDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1568E620)
#define FBAOHOKMKDL_DGAOEBBIMMK_OFFSET UNITYSDK_OFFSET(0x15693790)
#define FBAOHOKMKDL_DHGFNHMHGEO_OFFSET UNITYSDK_OFFSET(0x1568F960)
#define FBAOHOKMKDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1568E640)
#define FBAOHOKMKDL_DMEFELBLGPL_OFFSET UNITYSDK_OFFSET(0x1568EE30)
#define FBAOHOKMKDL_DPCHJCOFJKN_OFFSET UNITYSDK_OFFSET(0x15693D60)
#define FBAOHOKMKDL_DPEJKGAGLDH_OFFSET UNITYSDK_OFFSET(0x15691D40)
#define FBAOHOKMKDL_ECCKKEGAOJC_OFFSET UNITYSDK_OFFSET(0x156914F0)
#define FBAOHOKMKDL_EDFGKJECHCP_OFFSET UNITYSDK_OFFSET(0x1568ECF0)
#define FBAOHOKMKDL_EHGDDIOILDD_OFFSET UNITYSDK_OFFSET(0x1568EB10)
#define FBAOHOKMKDL_EHHEGJIIECM_OFFSET UNITYSDK_OFFSET(0x15692240)
#define FBAOHOKMKDL_EPHEDPODHPP_OFFSET UNITYSDK_OFFSET(0x1568FB50)
#define FBAOHOKMKDL_EPHKHDLGIDK_OFFSET UNITYSDK_OFFSET(0x15690230)
#define FBAOHOKMKDL_EPPFFICPNME_OFFSET UNITYSDK_OFFSET(0x15693250)
#define FBAOHOKMKDL_FBGHGOFHLAA_OFFSET UNITYSDK_OFFSET(0x156941A0)
#define FBAOHOKMKDL_FGKDJHDFPCD_OFFSET UNITYSDK_OFFSET(0x156940F0)
#define FBAOHOKMKDL_GEGJEEJNJCO_OFFSET UNITYSDK_OFFSET(0x15691B50)
#define FBAOHOKMKDL_GEJHCJFLNFN_OFFSET UNITYSDK_OFFSET(0x1568F100)
#define FBAOHOKMKDL_GONIIAFNLFK_OFFSET UNITYSDK_OFFSET(0x15691150)
#define FBAOHOKMKDL_HAOLDBDKAOK_OFFSET UNITYSDK_OFFSET(0x15694290)
#define FBAOHOKMKDL_HLPEEOAHIBL_OFFSET UNITYSDK_OFFSET(0x15690430)
#define FBAOHOKMKDL_HOALIIJKELE_OFFSET UNITYSDK_OFFSET(0x1568F4E0)
#define FBAOHOKMKDL_IAODJDMCKNE_OFFSET UNITYSDK_OFFSET(0x15693820)
#define FBAOHOKMKDL_ICBEPGBBIPC_OFFSET UNITYSDK_OFFSET(0x15692C90)
#define FBAOHOKMKDL_IEIKGDFFEEG_OFFSET UNITYSDK_OFFSET(0x15691AC0)
#define FBAOHOKMKDL_IKALPMNLIKJ_OFFSET UNITYSDK_OFFSET(0x156918D0)
#define FBAOHOKMKDL_ILHNHFEGNIJ_OFFSET UNITYSDK_OFFSET(0x15693B70)
#define FBAOHOKMKDL_IOOFKCDKKHB_OFFSET UNITYSDK_OFFSET(0x15692750)
#define FBAOHOKMKDL_IPGCAEGCNGC_OFFSET UNITYSDK_OFFSET(0x15691F70)
#define FBAOHOKMKDL_JACEKEIBEJC_OFFSET UNITYSDK_OFFSET(0x15691CB0)
#define FBAOHOKMKDL_JBHPKEBIMGL_OFFSET UNITYSDK_OFFSET(0x1568FD50)
#define FBAOHOKMKDL_JCDBFODJCDF_OFFSET UNITYSDK_OFFSET(0x156916B0)
#define FBAOHOKMKDL_JIJCDAEABJO_OFFSET UNITYSDK_OFFSET(0x1568F390)
#define FBAOHOKMKDL_JLAKIMNFBJB_OFFSET UNITYSDK_OFFSET(0x156908D0)
#define FBAOHOKMKDL_JLEABHKJGBH_OFFSET UNITYSDK_OFFSET(0x15693E00)
#define FBAOHOKMKDL_JNMBKAILMIN_OFFSET UNITYSDK_OFFSET(0x15690060)
#define FBAOHOKMKDL_JOJAMFCHABE_OFFSET UNITYSDK_OFFSET(0x15691020)
#define FBAOHOKMKDL_KCNMAIHHHDI_OFFSET UNITYSDK_OFFSET(0x1568F660)
#define FBAOHOKMKDL_KFJEKOJFHLN_OFFSET UNITYSDK_OFFSET(0x1568E6A0)
#define FBAOHOKMKDL_KHCHOOEKPJO_OFFSET UNITYSDK_OFFSET(0x15692AB0)
#define FBAOHOKMKDL_KMBBDIJPMBJ_OFFSET UNITYSDK_OFFSET(0x15692960)
#define FBAOHOKMKDL_KNNHEMBFFKM_OFFSET UNITYSDK_OFFSET(0x15692B10)
#define FBAOHOKMKDL_LAPIPEGAADB_OFFSET UNITYSDK_OFFSET(0x1568F5A0)
#define FBAOHOKMKDL_LFLLAFEBKFH_OFFSET UNITYSDK_OFFSET(0x15693AA0)
#define FBAOHOKMKDL_LLECNICOBHC_OFFSET UNITYSDK_OFFSET(0x156938C0)
#define FBAOHOKMKDL_LLMHOFOLMNL_OFFSET UNITYSDK_OFFSET(0x15693300)
#define FBAOHOKMKDL_NCEHKPMAFHJ_OFFSET UNITYSDK_OFFSET(0x156902F0)
#define FBAOHOKMKDL_NJCCBMBENJH_OFFSET UNITYSDK_OFFSET(0x1568FE90)
#define FBAOHOKMKDL_NJKJJOIJDAL_OFFSET UNITYSDK_OFFSET(0x15690570)
#define FBAOHOKMKDL_ODOAOAKOLFC_OFFSET UNITYSDK_OFFSET(0x15690BF0)
#define FBAOHOKMKDL_OGNCHPMIKNK_OFFSET UNITYSDK_OFFSET(0x15693510)
#define FBAOHOKMKDL_OIIHEGLGKHJ_OFFSET UNITYSDK_OFFSET(0x15693200)
#define FBAOHOKMKDL_OMMDFIIFCLL_OFFSET UNITYSDK_OFFSET(0x156911A0)
#define FBAOHOKMKDL_ONPDPJPPJKI_OFFSET UNITYSDK_OFFSET(0x15692A50)
#define FBAOHOKMKDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1568E800)
#define FBAOHOKMKDL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15690D30)
#define FBAOHOKMKDL_PGODCKAKBDD_OFFSET UNITYSDK_OFFSET(0x15690810)
#define FBAOHOKMKDL_PHKDFKNPLCN_OFFSET UNITYSDK_OFFSET(0x15690A10)
#define FBAOHOKMKDL_PKDMHKJNHFP_OFFSET UNITYSDK_OFFSET(0x1568FC10)
#define FBAOHOKMKDL_PKNEKNFCPOA_OFFSET UNITYSDK_OFFSET(0x156933D0)
#define FBAOHOKMKDL_TICK_OFFSET UNITYSDK_OFFSET(0x15690D80)

inline static constexpr unsigned int FBAOHOKMKDL_TypeDefinitionIndex = 58935;

	class FBAOHOKMKDL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitTutorial* OFKGLJOAMLD; // 0x18
		::ECCKLFIHNOH* KGKJDFGCAEH; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KDJNAAOFMMJ* NNFJKIPMAAI; // 0x30
		::GELIALJDFBL* JLMAKNFAEBH; // 0x38
		::System::Boolean JGDBAFDDOPL; // 0x40
		::System::Boolean POBCBCKMGCE; // 0x41
		::System::Byte _padding0[0x2];
		::System::UInt32 IHCPGAIAJBL; // 0x44
		::System::Single FLNOFGOBJLN; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTutorial* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTutorial*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_TICK_OFFSET))(this, a1);
		}

		::System::Void EDFGKJECHCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_EDFGKJECHCP_OFFSET))(this);
		}

		::System::Void DMEFELBLGPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_DMEFELBLGPL_OFFSET))(this);
		}

		::System::Void HOALIIJKELE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_HOALIIJKELE_OFFSET))(this);
		}

		::System::Void LAPIPEGAADB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_LAPIPEGAADB_OFFSET))(this);
		}

		::System::Void KCNMAIHHHDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_KCNMAIHHHDI_OFFSET))(this);
		}

		::System::Void COMPHAGGDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_COMPHAGGDLE_OFFSET))(this);
		}

		::System::Void DHGFNHMHGEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_DHGFNHMHGEO_OFFSET))(this);
		}

		::System::Void EPHEDPODHPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_EPHEDPODHPP_OFFSET))(this);
		}

		::System::Void PKDMHKJNHFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_PKDMHKJNHFP_OFFSET))(this);
		}

		::System::Void JBHPKEBIMGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_JBHPKEBIMGL_OFFSET))(this);
		}

		::System::Void JNMBKAILMIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_JNMBKAILMIN_OFFSET))(this);
		}

		::System::Void NJCCBMBENJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_NJCCBMBENJH_OFFSET))(this);
		}

		::System::Void EPHKHDLGIDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_EPHKHDLGIDK_OFFSET))(this);
		}

		::System::Void NCEHKPMAFHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_NCEHKPMAFHJ_OFFSET))(this);
		}

		::System::Void HLPEEOAHIBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_HLPEEOAHIBL_OFFSET))(this);
		}

		::System::Void NJKJJOIJDAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_NJKJJOIJDAL_OFFSET))(this);
		}

		::System::Void AOPFDLAACEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_AOPFDLAACEE_OFFSET))(this);
		}

		::System::Void PGODCKAKBDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_PGODCKAKBDD_OFFSET))(this);
		}

		::System::Void JLAKIMNFBJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_JLAKIMNFBJB_OFFSET))(this);
		}

		::System::Void GEJHCJFLNFN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_GEJHCJFLNFN_OFFSET))(this, a1);
		}

		::System::Void BPLOLOCGLPA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_BPLOLOCGLPA_OFFSET))(this, a1);
		}

		::System::Void JIJCDAEABJO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_JIJCDAEABJO_OFFSET))(this, a1);
		}

		::System::Void AMBHGMOJLJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_AMBHGMOJLJN_OFFSET))(this);
		}

		::System::Void OMMDFIIFCLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_OMMDFIIFCLL_OFFSET))(this);
		}

		::System::Void JOJAMFCHABE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_JOJAMFCHABE_OFFSET))(this);
		}

		::System::Void GONIIAFNLFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_GONIIAFNLFK_OFFSET))(this);
		}

		::System::Void ECCKKEGAOJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_ECCKKEGAOJC_OFFSET))(this);
		}

		::System::Void JCDBFODJCDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_JCDBFODJCDF_OFFSET))(this);
		}

		::System::Void ONPDPJPPJKI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_ONPDPJPPJKI_OFFSET))(this, a1);
		}

		::System::Void KHCHOOEKPJO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_KHCHOOEKPJO_OFFSET))(this, a1);
		}

		::System::Boolean IPGCAEGCNGC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_IPGCAEGCNGC_OFFSET))(this);
		}

		::System::Boolean EHHEGJIIECM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_EHHEGJIIECM_OFFSET))(this);
		}

		::System::Void ICBEPGBBIPC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_ICBEPGBBIPC_OFFSET))(this, a1);
		}

		::System::Void CFEMLLOABAA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_CFEMLLOABAA_OFFSET))(this, a1);
		}

		::System::Void AGGMACCGEMM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_AGGMACCGEMM_OFFSET))(this, a1);
		}

		::System::Void OIIHEGLGKHJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_OIIHEGLGKHJ_OFFSET))(this, a1);
		}

		::System::Void EPPFFICPNME(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_EPPFFICPNME_OFFSET))(this, a1);
		}

		::System::Void LLMHOFOLMNL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_LLMHOFOLMNL_OFFSET))(this, a1);
		}

		::System::Void PKNEKNFCPOA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_PKNEKNFCPOA_OFFSET))(this, a1);
		}

		::System::Void IKALPMNLIKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_IKALPMNLIKJ_OFFSET))(this);
		}

		::System::Void IEIKGDFFEEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_IEIKGDFFEEG_OFFSET))(this);
		}

		::System::Void OGNCHPMIKNK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_OGNCHPMIKNK_OFFSET))(this, a1);
		}

		::System::Void CCHMMNEPCDN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_CCHMMNEPCDN_OFFSET))(this, a1);
		}

		::System::Void PHKDFKNPLCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_PHKDFKNPLCN_OFFSET))(this);
		}

		::System::Void ODOAOAKOLFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_ODOAOAKOLFC_OFFSET))(this);
		}

		::System::Void DGAOEBBIMMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_DGAOEBBIMMK_OFFSET))(this, a1);
		}

		::System::Void IAODJDMCKNE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_IAODJDMCKNE_OFFSET))(this, a1);
		}

		::System::Void LLECNICOBHC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_LLECNICOBHC_OFFSET))(this, a1);
		}

		::System::Void LFLLAFEBKFH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_LFLLAFEBKFH_OFFSET))(this, a1);
		}

		::System::Void DPEJKGAGLDH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_DPEJKGAGLDH_OFFSET))(this, a1);
		}

		::System::Void ILHNHFEGNIJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_ILHNHFEGNIJ_OFFSET))(this, a1);
		}

		::System::Void DPCHJCOFJKN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_DPCHJCOFJKN_OFFSET))(this, a1);
		}

		::System::Void JLEABHKJGBH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_JLEABHKJGBH_OFFSET))(this, a1);
		}

		::System::Void CJCLPBLJGMG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_CJCLPBLJGMG_OFFSET))(this, a1);
		}

		::System::Void BMOCMPKOACC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_BMOCMPKOACC_OFFSET))(this, a1);
		}

		::System::Boolean AIEBAFCKIMJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_AIEBAFCKIMJ_OFFSET))(this, a1);
		}

		::System::Void EHGDDIOILDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_EHGDDIOILDD_OFFSET))(this);
		}

		::System::Void GEGJEEJNJCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_GEGJEEJNJCO_OFFSET))(this);
		}

		::System::Boolean KMBBDIJPMBJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_KMBBDIJPMBJ_OFFSET))(this, a1);
		}

		::System::Boolean KNNHEMBFFKM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_KNNHEMBFFKM_OFFSET))(this, a1);
		}

		::System::Void JACEKEIBEJC(::RPG::GameCore::EventType a1, ::System::UInt32 a2, ::RPG::GameCore::OnEventCallBack* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType, ::System::UInt32, ::RPG::GameCore::OnEventCallBack*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_JACEKEIBEJC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KFJEKOJFHLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_KFJEKOJFHLN_OFFSET))(this);
		}

		::System::Void FBGHGOFHLAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_FBGHGOFHLAA_OFFSET))(this);
		}

		::System::Void HAOLDBDKAOK(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_HAOLDBDKAOK_OFFSET))(this, a1);
		}

		::System::Void BFGJMLHFDDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_BFGJMLHFDDP_OFFSET))(this);
		}

		::System::Void FGKDJHDFPCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_FGKDJHDFPCD_OFFSET))(this);
		}

		::RPG::Client::TutorialSupportModule* IOOFKCDKKHB()
		{
			return ((::RPG::Client::TutorialSupportModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAOHOKMKDL_IOOFKCDKKHB_OFFSET))(this);
		}

	};
