#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGHBKHHINFP_StopReason.h"
#include "unitysdk/FGHBKHHINFP_TravelState.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FGHBKHHINFP_INIEEEKLKEA;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MonoCityTrain; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ConfigCityTrain; }
namespace RPG::GameCore { class LodTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ObjectInstantiateRequest; }

#define FGHBKHHINFP_AANELLNCHKM_OFFSET UNITYSDK_OFFSET(0x15761000)
#define FGHBKHHINFP_ABJNCBDLOJG_OFFSET UNITYSDK_OFFSET(0x1575F8E0)
#define FGHBKHHINFP_ADOBFJMCJLI_OFFSET UNITYSDK_OFFSET(0x157614F0)
#define FGHBKHHINFP_ALNOLBECODD_OFFSET UNITYSDK_OFFSET(0x1575F110)
#define FGHBKHHINFP_AOPENFAMNCH_OFFSET UNITYSDK_OFFSET(0x1575FA80)
#define FGHBKHHINFP_BJFFDOJLPLN_OFFSET UNITYSDK_OFFSET(0x157618A0)
#define FGHBKHHINFP_BNIGDHDOIFE_OFFSET UNITYSDK_OFFSET(0x15762180)
#define FGHBKHHINFP_BNPBJEIIMOE_OFFSET UNITYSDK_OFFSET(0x15761BD0)
#define FGHBKHHINFP_CCTOR_OFFSET UNITYSDK_OFFSET(0x15762270)
#define FGHBKHHINFP_CLFFLLLOPFK_OFFSET UNITYSDK_OFFSET(0x1575EAF0)
#define FGHBKHHINFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1575E290)
#define FGHBKHHINFP_DCNDFDIOLCP_OFFSET UNITYSDK_OFFSET(0x1575FA00)
#define FGHBKHHINFP_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x1575ECC0)
#define FGHBKHHINFP_DFHDKPPFOHE_OFFSET UNITYSDK_OFFSET(0x1575E880)
#define FGHBKHHINFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1575E420)
#define FGHBKHHINFP_DKJFKEALFLG_OFFSET UNITYSDK_OFFSET(0x157617B0)
#define FGHBKHHINFP_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x1575E7A0)
#define FGHBKHHINFP_DODEEFGBNLD_OFFSET UNITYSDK_OFFSET(0x157610E0)
#define FGHBKHHINFP_FGHKPMLOBDA_OFFSET UNITYSDK_OFFSET(0x15760B70)
#define FGHBKHHINFP_FLCNDJBDOLM_OFFSET UNITYSDK_OFFSET(0x1575FC90)
#define FGHBKHHINFP_FPICFDPKBKL_OFFSET UNITYSDK_OFFSET(0x15762050)
#define FGHBKHHINFP_GIMIOKNKOOG_OFFSET UNITYSDK_OFFSET(0x157613B0)
#define FGHBKHHINFP_GNEOOIBPBFH_OFFSET UNITYSDK_OFFSET(0x15760EF0)
#define FGHBKHHINFP_GOJMOKHLFJK_OFFSET UNITYSDK_OFFSET(0x1575E8D0)
#define FGHBKHHINFP_HFHOAGPGPCF_OFFSET UNITYSDK_OFFSET(0x15760AF0)
#define FGHBKHHINFP_HILEPCDMNFF_OFFSET UNITYSDK_OFFSET(0x15761320)
#define FGHBKHHINFP_IBDAKEELEMN_OFFSET UNITYSDK_OFFSET(0x1575F810)
#define FGHBKHHINFP_IKCAGAJCING_OFFSET UNITYSDK_OFFSET(0x157614A0)
#define FGHBKHHINFP_INKIOOBOGJF_OFFSET UNITYSDK_OFFSET(0x1575ED40)
#define FGHBKHHINFP_JAKPIJMFHEB_OFFSET UNITYSDK_OFFSET(0x1575FFB0)
#define FGHBKHHINFP_JCEAOJILCFJ_OFFSET UNITYSDK_OFFSET(0x1575F200)
#define FGHBKHHINFP_JDEEMCJNHFF_OFFSET UNITYSDK_OFFSET(0x15760E50)
#define FGHBKHHINFP_JJOHPNFFCEG_OFFSET UNITYSDK_OFFSET(0x1575F410)
#define FGHBKHHINFP_KDBCPBBOIFA_OFFSET UNITYSDK_OFFSET(0x15760270)
#define FGHBKHHINFP_KDHFFADEMDN_OFFSET UNITYSDK_OFFSET(0x15762260)
#define FGHBKHHINFP_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x1575E810)
#define FGHBKHHINFP_LEFNHNHCJNK_OFFSET UNITYSDK_OFFSET(0x157621F0)
#define FGHBKHHINFP_LGOGFIPHAAD_OFFSET UNITYSDK_OFFSET(0x15760030)
#define FGHBKHHINFP_LJODLONJEOC_OFFSET UNITYSDK_OFFSET(0x157620B0)
#define FGHBKHHINFP_MGNOBJNMBED_OFFSET UNITYSDK_OFFSET(0x157607E0)
#define FGHBKHHINFP_MKGGCEACFJH_OFFSET UNITYSDK_OFFSET(0x1575F6D0)
#define FGHBKHHINFP_NMMMPIBJKBM_OFFSET UNITYSDK_OFFSET(0x1575FB70)
#define FGHBKHHINFP_OCBKNNNFINH_OFFSET UNITYSDK_OFFSET(0x1575EB40)
#define FGHBKHHINFP_OFKAOLPFOPC_OFFSET UNITYSDK_OFFSET(0x1575EA60)
#define FGHBKHHINFP_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x1575E720)
#define FGHBKHHINFP_ONKMIPDMEPC_OFFSET UNITYSDK_OFFSET(0x1575EF30)
#define FGHBKHHINFP_PDLJKNDGFGP_OFFSET UNITYSDK_OFFSET(0x1575EBE0)
#define FGHBKHHINFP_PDMHPMHEJJO_OFFSET UNITYSDK_OFFSET(0x15760F70)
#define FGHBKHHINFP_POKDCEMAJLB_OFFSET UNITYSDK_OFFSET(0x15760A30)

inline static constexpr unsigned int FGHBKHHINFP_TypeDefinitionIndex = 69162;

	class FGHBKHHINFP : public ::System::Object
	{
	public:
		::RPG::GameCore::ConfigCityTrain* OIMIBHGODOB; // 0x10
		::UnityEngine::GameObject* IMAEIABEALM; // 0x18
		::RPG::GameCore::LodTemplate* OPBAHDCJCGA; // 0x20
		::RPG::Client::MonoCityTrain* DAJBMOLOMCM; // 0x28
		::System::String* NJCPCENOBOM; // 0x30
		::BansheeGz::BGSpline::Curve::BGCurve* MPEHPIEBCEL; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* NEMJAFALHIE; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::ObjectInstantiateRequest*>* AJGGGLMIAGP; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* LLPGGNMPLGG; // 0x50
		::UnityEngine::BoxCollider* DNMCEMOEIPL; // 0x58
		::BansheeGz::BGSpline::Components::BGCcMath* BNNLFDDGHHA; // 0x60
		::System::String* LLPIMMJKHPP; // 0x68
		::UnityEngine::GameObject* MIPHDALEONG; // 0x70
		::FGHBKHHINFP_TravelState MDBEEJOPDEF; // 0x78
		::FGHBKHHINFP_StopReason LPDJMPCOIAC; // 0x7C
		::System::Single DJCODABCGIJ; // 0x80
		::System::Int32 EGIDDJHIOBK; // 0x84
		::System::Int32 IIJFDEMJECE; // 0x88
		::System::Single MFKKONHPEAL; // 0x8C
		::System::Single FJLGEJNOCIN; // 0x90
		::System::Boolean JICPJJMAGIL; // 0x94
		::System::Boolean FIKMGFKPNBH; // 0x95
		::System::Boolean MHCEEDIDFOE; // 0x96
		::System::Boolean PDKPDFHKEID; // 0x97
		::System::Single IGOAKAEKCPJ; // 0x98
		::System::Single FKCIBFBHGIL; // 0x9C
		::System::Single JGLHCCKAEKC; // 0xA0
		::System::Single FFDIBDPNOLP; // 0xA4
		::System::Single LBOAINDMOGM; // 0xA8
		::System::Single JAKFLDHPDGD; // 0xAC
		::System::Single BFGEAKMHCMB; // 0xB0
		::RPG::GameCore::EntityLodTemplateName OFDBCCKEJNC; // 0xB4
		::System::Int32 HGMKIECNDNG; // 0xB8
		::System::Single HJAOFMNOJIG; // 0xBC
		::System::Single ONBJBPMGGJN; // 0xC0
		::System::Single OFGFDJBKBAO; // 0xC4
		::System::Single KPCHMBHELBE; // 0xC8
		::System::Single NEDBKGOLFPM; // 0xCC
		::System::Single NPPHEDDHJCO; // 0xD0
		::System::Boolean DFDCMIJNPCJ; // 0xD4
		::System::Boolean MDEMEIIFKNA; // 0xD5
		::System::Boolean IBNKINLMJCE; // 0xD6
		::System::Boolean KEKIJFPNIGK; // 0xD7
		::System::Single IDJNBEMGEID; // 0xD8
		::System::Single BGKPMPJJMDA; // 0xDC
		::System::Single HHBLNIKLOEH; // 0xE0
		::System::Single NBBLJJABFPI; // 0xE4
		static ::RPG::Client::RPGProfilerMarker** StaticGet_AGDADAPFPBE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FGHBKHHINFP")->GetStaticField(0x66460);
		}

		// static const ::System::Object FNFEHNLHDJN; // 0x0
		// static const ::System::Object DGNGIDCMMNL; // 0x0
		// static const ::System::Object DFEEKDNFPKD; // 0x0
		// static const ::System::String* JGAPDEIJOLB; // 0x0
		// static const ::System::String* BJNFEMPCGBL; // 0x0
		// static const ::System::Object GDEOFMLHKCL; // 0x0
		// static const ::System::String* GOCFKILINEN; // 0x0
		::System::Void _ctor(::System::String* a1, ::RPG::GameCore::ConfigCityTrain* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::ConfigCityTrain*))((::PBYTE)hIl2Cpp + FGHBKHHINFP_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGHBKHHINFP_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_DISPOSE_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGHBKHHINFP_OHMHJFANEIF_OFFSET))(this, a1);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_KGJAMKFPOAB_OFFSET))(this);
		}

		::System::Void DFHDKPPFOHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_DFHDKPPFOHE_OFFSET))(this);
		}

		::System::Void OFKAOLPFOPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_OFKAOLPFOPC_OFFSET))(this);
		}

		::System::Void CLFFLLLOPFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_CLFFLLLOPFK_OFFSET))(this);
		}

		::System::Void OCBKNNNFINH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_OCBKNNNFINH_OFFSET))(this);
		}

		::System::Void PDLJKNDGFGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_PDLJKNDGFGP_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGHBKHHINFP_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void ONKMIPDMEPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_ONKMIPDMEPC_OFFSET))(this);
		}

		::System::Void INKIOOBOGJF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGHBKHHINFP_INKIOOBOGJF_OFFSET))(this, a1);
		}

		::System::Void MKGGCEACFJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_MKGGCEACFJH_OFFSET))(this);
		}

		::System::Void IBDAKEELEMN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGHBKHHINFP_IBDAKEELEMN_OFFSET))(this, a1);
		}

		::System::Void ABJNCBDLOJG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGHBKHHINFP_ABJNCBDLOJG_OFFSET))(this, a1);
		}

		::System::Void DCNDFDIOLCP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGHBKHHINFP_DCNDFDIOLCP_OFFSET))(this, a1);
		}

		::System::Void AOPENFAMNCH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGHBKHHINFP_AOPENFAMNCH_OFFSET))(this, a1);
		}

		::System::Void NMMMPIBJKBM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGHBKHHINFP_NMMMPIBJKBM_OFFSET))(this, a1);
		}

		::System::Void FLCNDJBDOLM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGHBKHHINFP_FLCNDJBDOLM_OFFSET))(this, a1);
		}

		::System::Void KDBCPBBOIFA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGHBKHHINFP_KDBCPBBOIFA_OFFSET))(this, a1);
		}

		::System::Void PDMHPMHEJJO(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FGHBKHHINFP_PDMHPMHEJJO_OFFSET))(this, a1, a2);
		}

		::System::Void DODEEFGBNLD(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FGHBKHHINFP_DODEEFGBNLD_OFFSET))(this, a1, a2);
		}

		::System::Void MGNOBJNMBED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_MGNOBJNMBED_OFFSET))(this);
		}

		::System::Void HILEPCDMNFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_HILEPCDMNFF_OFFSET))(this);
		}

		::System::Void AANELLNCHKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_AANELLNCHKM_OFFSET))(this);
		}

		::System::Void GNEOOIBPBFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_GNEOOIBPBFH_OFFSET))(this);
		}

		::System::Void JCEAOJILCFJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FGHBKHHINFP_JCEAOJILCFJ_OFFSET))(this, a1, a2);
		}

		::System::Void GOJMOKHLFJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_GOJMOKHLFJK_OFFSET))(this);
		}

		::System::Void IKCAGAJCING()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_IKCAGAJCING_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* GIMIOKNKOOG()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_GIMIOKNKOOG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* DKJFKEALFLG()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_DKJFKEALFLG_OFFSET))(this);
		}

		::System::Void BJFFDOJLPLN(::UnityEngine::GameObject* a1, ::RPG::Client::Promises::Promise* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + FGHBKHHINFP_BJFFDOJLPLN_OFFSET))(this, a1, a2);
		}

		::System::Void BNPBJEIIMOE(::UnityEngine::GameObject* a1, ::RPG::Client::Promises::Promise* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + FGHBKHHINFP_BNPBJEIIMOE_OFFSET))(this, a1, a2);
		}

		::System::Void ADOBFJMCJLI(::System::String* a1, ::FGHBKHHINFP_INIEEEKLKEA* a2, ::RPG::Client::Promises::Promise* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::FGHBKHHINFP_INIEEEKLKEA*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + FGHBKHHINFP_ADOBFJMCJLI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void POKDCEMAJLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_POKDCEMAJLB_OFFSET))(this);
		}

		::System::Void HFHOAGPGPCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_HFHOAGPGPCF_OFFSET))(this);
		}

		::System::Void JAKPIJMFHEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_JAKPIJMFHEB_OFFSET))(this);
		}

		::System::Boolean FGHKPMLOBDA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_FGHKPMLOBDA_OFFSET))(this);
		}

		::System::Void JDEEMCJNHFF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGHBKHHINFP_JDEEMCJNHFF_OFFSET))(this, a1);
		}

		::System::Void FPICFDPKBKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_FPICFDPKBKL_OFFSET))(this);
		}

		::System::Void LGOGFIPHAAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGHBKHHINFP_LGOGFIPHAAD_OFFSET))(this, a1);
		}

		::System::Void LJODLONJEOC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGHBKHHINFP_LJODLONJEOC_OFFSET))(this, a1);
		}

		::System::Void BNIGDHDOIFE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGHBKHHINFP_BNIGDHDOIFE_OFFSET))(this, a1);
		}

		::System::Void JJOHPNFFCEG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGHBKHHINFP_JJOHPNFFCEG_OFFSET))(this, a1);
		}

		::System::Int32 LEFNHNHCJNK(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGHBKHHINFP_LEFNHNHCJNK_OFFSET))(this, a1);
		}

		::System::Single KDHFFADEMDN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP_KDHFFADEMDN_OFFSET))(this);
		}

		::System::Void ALNOLBECODD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGHBKHHINFP_ALNOLBECODD_OFFSET))(this, a1);
		}

	};
