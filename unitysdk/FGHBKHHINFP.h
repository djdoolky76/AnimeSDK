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

#define FGHBKHHINFP_AANELLNCHKM_OFFSET UNITYSDK_OFFSET(0x16681700)
#define FGHBKHHINFP_ABJNCBDLOJG_OFFSET UNITYSDK_OFFSET(0x1667FFB0)
#define FGHBKHHINFP_ADOBFJMCJLI_OFFSET UNITYSDK_OFFSET(0x16681C10)
#define FGHBKHHINFP_ALNOLBECODD_OFFSET UNITYSDK_OFFSET(0x1667F7E0)
#define FGHBKHHINFP_AOPENFAMNCH_OFFSET UNITYSDK_OFFSET(0x16680160)
#define FGHBKHHINFP_BJFFDOJLPLN_OFFSET UNITYSDK_OFFSET(0x16681FC0)
#define FGHBKHHINFP_BNIGDHDOIFE_OFFSET UNITYSDK_OFFSET(0x16682890)
#define FGHBKHHINFP_BNPBJEIIMOE_OFFSET UNITYSDK_OFFSET(0x166822F0)
#define FGHBKHHINFP_CCTOR_OFFSET UNITYSDK_OFFSET(0x16682980)
#define FGHBKHHINFP_CLFFLLLOPFK_OFFSET UNITYSDK_OFFSET(0x1667F1B0)
#define FGHBKHHINFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1667E950)
#define FGHBKHHINFP_DCNDFDIOLCP_OFFSET UNITYSDK_OFFSET(0x166800E0)
#define FGHBKHHINFP_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x1667F380)
#define FGHBKHHINFP_DFHDKPPFOHE_OFFSET UNITYSDK_OFFSET(0x1667EF40)
#define FGHBKHHINFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1667EAE0)
#define FGHBKHHINFP_DKJFKEALFLG_OFFSET UNITYSDK_OFFSET(0x16681ED0)
#define FGHBKHHINFP_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x1667EE60)
#define FGHBKHHINFP_DODEEFGBNLD_OFFSET UNITYSDK_OFFSET(0x166817F0)
#define FGHBKHHINFP_FGHKPMLOBDA_OFFSET UNITYSDK_OFFSET(0x16681260)
#define FGHBKHHINFP_FLCNDJBDOLM_OFFSET UNITYSDK_OFFSET(0x16680370)
#define FGHBKHHINFP_FPICFDPKBKL_OFFSET UNITYSDK_OFFSET(0x16682770)
#define FGHBKHHINFP_GIMIOKNKOOG_OFFSET UNITYSDK_OFFSET(0x16681AD0)
#define FGHBKHHINFP_GNEOOIBPBFH_OFFSET UNITYSDK_OFFSET(0x166815F0)
#define FGHBKHHINFP_GOJMOKHLFJK_OFFSET UNITYSDK_OFFSET(0x1667EF90)
#define FGHBKHHINFP_HFHOAGPGPCF_OFFSET UNITYSDK_OFFSET(0x166811E0)
#define FGHBKHHINFP_HILEPCDMNFF_OFFSET UNITYSDK_OFFSET(0x16681A40)
#define FGHBKHHINFP_IBDAKEELEMN_OFFSET UNITYSDK_OFFSET(0x1667FEE0)
#define FGHBKHHINFP_IKCAGAJCING_OFFSET UNITYSDK_OFFSET(0x16681BC0)
#define FGHBKHHINFP_INKIOOBOGJF_OFFSET UNITYSDK_OFFSET(0x1667F400)
#define FGHBKHHINFP_JAKPIJMFHEB_OFFSET UNITYSDK_OFFSET(0x166806B0)
#define FGHBKHHINFP_JCEAOJILCFJ_OFFSET UNITYSDK_OFFSET(0x1667F8D0)
#define FGHBKHHINFP_JDEEMCJNHFF_OFFSET UNITYSDK_OFFSET(0x16681540)
#define FGHBKHHINFP_JJOHPNFFCEG_OFFSET UNITYSDK_OFFSET(0x1667FAE0)
#define FGHBKHHINFP_KDBCPBBOIFA_OFFSET UNITYSDK_OFFSET(0x16680960)
#define FGHBKHHINFP_KDHFFADEMDN_OFFSET UNITYSDK_OFFSET(0x16682970)
#define FGHBKHHINFP_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x1667EED0)
#define FGHBKHHINFP_LEFNHNHCJNK_OFFSET UNITYSDK_OFFSET(0x16682900)
#define FGHBKHHINFP_LGOGFIPHAAD_OFFSET UNITYSDK_OFFSET(0x16680730)
#define FGHBKHHINFP_LJODLONJEOC_OFFSET UNITYSDK_OFFSET(0x166827D0)
#define FGHBKHHINFP_MGNOBJNMBED_OFFSET UNITYSDK_OFFSET(0x16680ED0)
#define FGHBKHHINFP_MKGGCEACFJH_OFFSET UNITYSDK_OFFSET(0x1667FDA0)
#define FGHBKHHINFP_NMMMPIBJKBM_OFFSET UNITYSDK_OFFSET(0x16680250)
#define FGHBKHHINFP_OCBKNNNFINH_OFFSET UNITYSDK_OFFSET(0x1667F200)
#define FGHBKHHINFP_OFKAOLPFOPC_OFFSET UNITYSDK_OFFSET(0x1667F120)
#define FGHBKHHINFP_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x1667EDE0)
#define FGHBKHHINFP_ONKMIPDMEPC_OFFSET UNITYSDK_OFFSET(0x1667F600)
#define FGHBKHHINFP_PDLJKNDGFGP_OFFSET UNITYSDK_OFFSET(0x1667F2A0)
#define FGHBKHHINFP_PDMHPMHEJJO_OFFSET UNITYSDK_OFFSET(0x16681670)
#define FGHBKHHINFP_POKDCEMAJLB_OFFSET UNITYSDK_OFFSET(0x16681120)

inline static constexpr unsigned int FGHBKHHINFP_TypeDefinitionIndex = 71115;

	class FGHBKHHINFP : public ::System::Object
	{
	public:
		::RPG::Client::MonoCityTrain* DAJBMOLOMCM; // 0x10
		::System::String* LLPIMMJKHPP; // 0x18
		::UnityEngine::GameObject* IMAEIABEALM; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* LLPGGNMPLGG; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* NEMJAFALHIE; // 0x30
		::UnityEngine::BoxCollider* DNMCEMOEIPL; // 0x38
		::RPG::GameCore::ConfigCityTrain* OIMIBHGODOB; // 0x40
		::System::String* NJCPCENOBOM; // 0x48
		::UnityEngine::GameObject* MIPHDALEONG; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::ObjectInstantiateRequest*>* AJGGGLMIAGP; // 0x58
		::BansheeGz::BGSpline::Components::BGCcMath* BNNLFDDGHHA; // 0x60
		::RPG::GameCore::LodTemplate* OPBAHDCJCGA; // 0x68
		::BansheeGz::BGSpline::Curve::BGCurve* MPEHPIEBCEL; // 0x70
		::System::Single HJAOFMNOJIG; // 0x78
		::System::Single FFDIBDPNOLP; // 0x7C
		::System::Single ONBJBPMGGJN; // 0x80
		::System::Single OFGFDJBKBAO; // 0x84
		::System::Single HHBLNIKLOEH; // 0x88
		::System::Single DJCODABCGIJ; // 0x8C
		::System::Single JAKFLDHPDGD; // 0x90
		::System::Int32 IIJFDEMJECE; // 0x94
		::System::Int32 HGMKIECNDNG; // 0x98
		::FGHBKHHINFP_StopReason LPDJMPCOIAC; // 0x9C
		::System::Boolean MHCEEDIDFOE; // 0xA0
		::System::Boolean KEKIJFPNIGK; // 0xA1
		::System::Boolean IBNKINLMJCE; // 0xA2
		::System::Boolean JICPJJMAGIL; // 0xA3
		::System::Single LBOAINDMOGM; // 0xA4
		::System::Single KPCHMBHELBE; // 0xA8
		::System::Int32 EGIDDJHIOBK; // 0xAC
		::System::Single FJLGEJNOCIN; // 0xB0
		::System::Single IGOAKAEKCPJ; // 0xB4
		::System::Single MFKKONHPEAL; // 0xB8
		::System::Single NEDBKGOLFPM; // 0xBC
		::FGHBKHHINFP_TravelState MDBEEJOPDEF; // 0xC0
		::System::Single BGKPMPJJMDA; // 0xC4
		::System::Single NPPHEDDHJCO; // 0xC8
		::System::Single NBBLJJABFPI; // 0xCC
		::System::Single IDJNBEMGEID; // 0xD0
		::System::Single FKCIBFBHGIL; // 0xD4
		::System::Single BFGEAKMHCMB; // 0xD8
		::System::Boolean DFDCMIJNPCJ; // 0xDC
		::System::Boolean PDKPDFHKEID; // 0xDD
		::System::Boolean MDEMEIIFKNA; // 0xDE
		::System::Boolean FIKMGFKPNBH; // 0xDF
		::System::Single JGLHCCKAEKC; // 0xE0
		::RPG::GameCore::EntityLodTemplateName OFDBCCKEJNC; // 0xE4
		static ::RPG::Client::RPGProfilerMarker** StaticGet_AGDADAPFPBE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FGHBKHHINFP")->GetStaticField(0x59D80);
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
