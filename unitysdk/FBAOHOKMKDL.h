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

#define FBAOHOKMKDL_AGGMACCGEMM_OFFSET UNITYSDK_OFFSET(0x165A71A0)
#define FBAOHOKMKDL_AIEBAFCKIMJ_OFFSET UNITYSDK_OFFSET(0x165A6B40)
#define FBAOHOKMKDL_AMBHGMOJLJN_OFFSET UNITYSDK_OFFSET(0x165A5200)
#define FBAOHOKMKDL_AOPFDLAACEE_OFFSET UNITYSDK_OFFSET(0x165A4900)
#define FBAOHOKMKDL_BFGJMLHFDDP_OFFSET UNITYSDK_OFFSET(0x165A2FB0)
#define FBAOHOKMKDL_BMOCMPKOACC_OFFSET UNITYSDK_OFFSET(0x165A82D0)
#define FBAOHOKMKDL_BPLOLOCGLPA_OFFSET UNITYSDK_OFFSET(0x165A3480)
#define FBAOHOKMKDL_CCHMMNEPCDN_OFFSET UNITYSDK_OFFSET(0x165A7A70)
#define FBAOHOKMKDL_CFEMLLOABAA_OFFSET UNITYSDK_OFFSET(0x165A7070)
#define FBAOHOKMKDL_CJCLPBLJGMG_OFFSET UNITYSDK_OFFSET(0x165A81F0)
#define FBAOHOKMKDL_COMPHAGGDLE_OFFSET UNITYSDK_OFFSET(0x165A3AD0)
#define FBAOHOKMKDL_CTOR_OFFSET UNITYSDK_OFFSET(0x165A28C0)
#define FBAOHOKMKDL_DGAOEBBIMMK_OFFSET UNITYSDK_OFFSET(0x165A7B20)
#define FBAOHOKMKDL_DHGFNHMHGEO_OFFSET UNITYSDK_OFFSET(0x165A3B90)
#define FBAOHOKMKDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165A28E0)
#define FBAOHOKMKDL_DMEFELBLGPL_OFFSET UNITYSDK_OFFSET(0x165A3070)
#define FBAOHOKMKDL_DPCHJCOFJKN_OFFSET UNITYSDK_OFFSET(0x165A8100)
#define FBAOHOKMKDL_DPEJKGAGLDH_OFFSET UNITYSDK_OFFSET(0x165A5F70)
#define FBAOHOKMKDL_ECCKKEGAOJC_OFFSET UNITYSDK_OFFSET(0x165A5720)
#define FBAOHOKMKDL_EDFGKJECHCP_OFFSET UNITYSDK_OFFSET(0x165A2F30)
#define FBAOHOKMKDL_EHGDDIOILDD_OFFSET UNITYSDK_OFFSET(0x165A2DB0)
#define FBAOHOKMKDL_EHHEGJIIECM_OFFSET UNITYSDK_OFFSET(0x165A6610)
#define FBAOHOKMKDL_EPHEDPODHPP_OFFSET UNITYSDK_OFFSET(0x165A3D80)
#define FBAOHOKMKDL_EPHKHDLGIDK_OFFSET UNITYSDK_OFFSET(0x165A4460)
#define FBAOHOKMKDL_EPPFFICPNME_OFFSET UNITYSDK_OFFSET(0x165A75E0)
#define FBAOHOKMKDL_FBGHGOFHLAA_OFFSET UNITYSDK_OFFSET(0x165A8540)
#define FBAOHOKMKDL_FGKDJHDFPCD_OFFSET UNITYSDK_OFFSET(0x165A8490)
#define FBAOHOKMKDL_GEGJEEJNJCO_OFFSET UNITYSDK_OFFSET(0x165A5D80)
#define FBAOHOKMKDL_GEJHCJFLNFN_OFFSET UNITYSDK_OFFSET(0x165A3330)
#define FBAOHOKMKDL_GONIIAFNLFK_OFFSET UNITYSDK_OFFSET(0x165A5380)
#define FBAOHOKMKDL_HAOLDBDKAOK_OFFSET UNITYSDK_OFFSET(0x165A8600)
#define FBAOHOKMKDL_HLPEEOAHIBL_OFFSET UNITYSDK_OFFSET(0x165A4660)
#define FBAOHOKMKDL_HOALIIJKELE_OFFSET UNITYSDK_OFFSET(0x165A3710)
#define FBAOHOKMKDL_IAODJDMCKNE_OFFSET UNITYSDK_OFFSET(0x165A7BB0)
#define FBAOHOKMKDL_ICBEPGBBIPC_OFFSET UNITYSDK_OFFSET(0x165A7020)
#define FBAOHOKMKDL_IEIKGDFFEEG_OFFSET UNITYSDK_OFFSET(0x165A5CF0)
#define FBAOHOKMKDL_IKALPMNLIKJ_OFFSET UNITYSDK_OFFSET(0x165A5B00)
#define FBAOHOKMKDL_ILHNHFEGNIJ_OFFSET UNITYSDK_OFFSET(0x165A7F00)
#define FBAOHOKMKDL_IOOFKCDKKHB_OFFSET UNITYSDK_OFFSET(0x165A6AE0)
#define FBAOHOKMKDL_IPGCAEGCNGC_OFFSET UNITYSDK_OFFSET(0x165A61A0)
#define FBAOHOKMKDL_JACEKEIBEJC_OFFSET UNITYSDK_OFFSET(0x165A5EE0)
#define FBAOHOKMKDL_JBHPKEBIMGL_OFFSET UNITYSDK_OFFSET(0x165A3F80)
#define FBAOHOKMKDL_JCDBFODJCDF_OFFSET UNITYSDK_OFFSET(0x165A58E0)
#define FBAOHOKMKDL_JIJCDAEABJO_OFFSET UNITYSDK_OFFSET(0x165A35C0)
#define FBAOHOKMKDL_JLAKIMNFBJB_OFFSET UNITYSDK_OFFSET(0x165A4B00)
#define FBAOHOKMKDL_JLEABHKJGBH_OFFSET UNITYSDK_OFFSET(0x165A81A0)
#define FBAOHOKMKDL_JNMBKAILMIN_OFFSET UNITYSDK_OFFSET(0x165A4290)
#define FBAOHOKMKDL_JOJAMFCHABE_OFFSET UNITYSDK_OFFSET(0x165A5250)
#define FBAOHOKMKDL_KCNMAIHHHDI_OFFSET UNITYSDK_OFFSET(0x165A3890)
#define FBAOHOKMKDL_KFJEKOJFHLN_OFFSET UNITYSDK_OFFSET(0x165A2940)
#define FBAOHOKMKDL_KHCHOOEKPJO_OFFSET UNITYSDK_OFFSET(0x165A6E40)
#define FBAOHOKMKDL_KMBBDIJPMBJ_OFFSET UNITYSDK_OFFSET(0x165A6CF0)
#define FBAOHOKMKDL_KNNHEMBFFKM_OFFSET UNITYSDK_OFFSET(0x165A6EA0)
#define FBAOHOKMKDL_LAPIPEGAADB_OFFSET UNITYSDK_OFFSET(0x165A37D0)
#define FBAOHOKMKDL_LFLLAFEBKFH_OFFSET UNITYSDK_OFFSET(0x165A7E30)
#define FBAOHOKMKDL_LLECNICOBHC_OFFSET UNITYSDK_OFFSET(0x165A7C50)
#define FBAOHOKMKDL_LLMHOFOLMNL_OFFSET UNITYSDK_OFFSET(0x165A7690)
#define FBAOHOKMKDL_NCEHKPMAFHJ_OFFSET UNITYSDK_OFFSET(0x165A4520)
#define FBAOHOKMKDL_NJCCBMBENJH_OFFSET UNITYSDK_OFFSET(0x165A40C0)
#define FBAOHOKMKDL_NJKJJOIJDAL_OFFSET UNITYSDK_OFFSET(0x165A47A0)
#define FBAOHOKMKDL_ODOAOAKOLFC_OFFSET UNITYSDK_OFFSET(0x165A4E20)
#define FBAOHOKMKDL_OGNCHPMIKNK_OFFSET UNITYSDK_OFFSET(0x165A78A0)
#define FBAOHOKMKDL_OIIHEGLGKHJ_OFFSET UNITYSDK_OFFSET(0x165A7590)
#define FBAOHOKMKDL_OMMDFIIFCLL_OFFSET UNITYSDK_OFFSET(0x165A53D0)
#define FBAOHOKMKDL_ONPDPJPPJKI_OFFSET UNITYSDK_OFFSET(0x165A6DE0)
#define FBAOHOKMKDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165A2AA0)
#define FBAOHOKMKDL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x165A4F60)
#define FBAOHOKMKDL_PGODCKAKBDD_OFFSET UNITYSDK_OFFSET(0x165A4A40)
#define FBAOHOKMKDL_PHKDFKNPLCN_OFFSET UNITYSDK_OFFSET(0x165A4C40)
#define FBAOHOKMKDL_PKDMHKJNHFP_OFFSET UNITYSDK_OFFSET(0x165A3E40)
#define FBAOHOKMKDL_PKNEKNFCPOA_OFFSET UNITYSDK_OFFSET(0x165A7760)
#define FBAOHOKMKDL_TICK_OFFSET UNITYSDK_OFFSET(0x165A4FB0)

inline static constexpr unsigned int FBAOHOKMKDL_TypeDefinitionIndex = 60208;

	class FBAOHOKMKDL : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* JLMAKNFAEBH; // 0x18
		::ECCKLFIHNOH* KGKJDFGCAEH; // 0x20
		::RPG::GameCore::WaitTutorial* OFKGLJOAMLD; // 0x28
		::KDJNAAOFMMJ* NNFJKIPMAAI; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::Single FLNOFGOBJLN; // 0x40
		::System::Boolean POBCBCKMGCE; // 0x44
		::System::Boolean JGDBAFDDOPL; // 0x45
		::System::Byte _padding0[0x2];
		::System::UInt32 IHCPGAIAJBL; // 0x48
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
