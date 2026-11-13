#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePhaseContext.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginNodeType.h"
class CHBCJGDEBNA;
class LODAOADEKHE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHBKEOKCMOF_AJNBMKGDMCF_OFFSET UNITYSDK_OFFSET(0x18BC5FD0)
#define EHBKEOKCMOF_AMOKDEOGNGB_OFFSET UNITYSDK_OFFSET(0x18BC69E0)
#define EHBKEOKCMOF_BALCFCHCLOH_OFFSET UNITYSDK_OFFSET(0x18BC4EC0)
#define EHBKEOKCMOF_BHKJKCNIEFB_OFFSET UNITYSDK_OFFSET(0x18BC4140)
#define EHBKEOKCMOF_CTOR_OFFSET UNITYSDK_OFFSET(0x18BC2F90)
#define EHBKEOKCMOF_DGECLIODNLK_OFFSET UNITYSDK_OFFSET(0x18BC5CE0)
#define EHBKEOKCMOF_DGPAAHAAPIE_OFFSET UNITYSDK_OFFSET(0x18BC4FA0)
#define EHBKEOKCMOF_FDOOGFLBFJC_OFFSET UNITYSDK_OFFSET(0x18BC5950)
#define EHBKEOKCMOF_FEBKMOCOJLE_OFFSET UNITYSDK_OFFSET(0x18BC6DC0)
#define EHBKEOKCMOF_FFCICPKELHG_OFFSET UNITYSDK_OFFSET(0x18BC35B0)
#define EHBKEOKCMOF_FIAFICKAOOH_OFFSET UNITYSDK_OFFSET(0x18BC4B10)
#define EHBKEOKCMOF_FJKBOKALNAH_OFFSET UNITYSDK_OFFSET(0x18BC6B70)
#define EHBKEOKCMOF_FLALLOANNGF_OFFSET UNITYSDK_OFFSET(0x18BC4DB0)
#define EHBKEOKCMOF_FMABBKHLHAP_OFFSET UNITYSDK_OFFSET(0x18BC6700)
#define EHBKEOKCMOF_FPOEAHPBNDF_OFFSET UNITYSDK_OFFSET(0x18BC5050)
#define EHBKEOKCMOF_GET_ISAUTOLOGIN_OFFSET UNITYSDK_OFFSET(0x18BC6E90)
#define EHBKEOKCMOF_GET_ISFINISHSUBPACKAGEMISSION_OFFSET UNITYSDK_OFFSET(0x18BC6ED0)
#define EHBKEOKCMOF_GET_LOGINFAILEDCOUNT_OFFSET UNITYSDK_OFFSET(0x18BC6EB0)
#define EHBKEOKCMOF_GET_NEEDREINITSDK_OFFSET UNITYSDK_OFFSET(0x18BC6E70)
#define EHBKEOKCMOF_GET_TESTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18BC6EF0)
#define EHBKEOKCMOF_GET_TOTALLOGINFAILEDCOUNT_OFFSET UNITYSDK_OFFSET(0x18BC6F10)
#define EHBKEOKCMOF_HGIDBKFNAMC_OFFSET UNITYSDK_OFFSET(0x18BC6CA0)
#define EHBKEOKCMOF_HIIDGBHFHOI_OFFSET UNITYSDK_OFFSET(0x18BC4340)
#define EHBKEOKCMOF_HLPFDBDGPGP_OFFSET UNITYSDK_OFFSET(0x18BC4BC0)
#define EHBKEOKCMOF_INNGBCCINEA_OFFSET UNITYSDK_OFFSET(0x18BC34A0)
#define EHBKEOKCMOF_JNBHMGPAIFA_OFFSET UNITYSDK_OFFSET(0x18BC4990)
#define EHBKEOKCMOF_KCKPHPDAMEH_OFFSET UNITYSDK_OFFSET(0x18BC47C0)
#define EHBKEOKCMOF_KDDOAJJGKKL_OFFSET UNITYSDK_OFFSET(0x18BC60D0)
#define EHBKEOKCMOF_KEJNLBFDPLN_OFFSET UNITYSDK_OFFSET(0x18BC5130)
#define EHBKEOKCMOF_KFFJBANKFEG_OFFSET UNITYSDK_OFFSET(0x18BC62A0)
#define EHBKEOKCMOF_KKNLMEDPKDA_OFFSET UNITYSDK_OFFSET(0x18BC4860)
#define EHBKEOKCMOF_LGNPIGKKCPN_OFFSET UNITYSDK_OFFSET(0x18BC4410)
#define EHBKEOKCMOF_LPBMGBIFNKO_OFFSET UNITYSDK_OFFSET(0x18BC5F60)
#define EHBKEOKCMOF_MKDOHENEILF_OFFSET UNITYSDK_OFFSET(0x18BC6430)
#define EHBKEOKCMOF_MOJIHBBMIMP_OFFSET UNITYSDK_OFFSET(0x18BC45D0)
#define EHBKEOKCMOF_MPFNDNPFHHP_OFFSET UNITYSDK_OFFSET(0x18BC4A30)
#define EHBKEOKCMOF_NJKCKCIBKFO_OFFSET UNITYSDK_OFFSET(0x18BC6CE0)
#define EHBKEOKCMOF_NKHOLHDIDIC_OFFSET UNITYSDK_OFFSET(0x18BC5370)
#define EHBKEOKCMOF_OEMNKCDFDJI_OFFSET UNITYSDK_OFFSET(0x18BC42E0)
#define EHBKEOKCMOF_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x18BC6AA0)
#define EHBKEOKCMOF_ONINIT_OFFSET UNITYSDK_OFFSET(0x18BC36C0)
#define EHBKEOKCMOF_OOOIIFLKCMJ_OFFSET UNITYSDK_OFFSET(0x18BC5DC0)
#define EHBKEOKCMOF_PAKNHOGOEJG_OFFSET UNITYSDK_OFFSET(0x18BC5450)
#define EHBKEOKCMOF_PLFDFDBANAP_OFFSET UNITYSDK_OFFSET(0x18BC6C30)
#define EHBKEOKCMOF_SET_ISAUTOLOGIN_OFFSET UNITYSDK_OFFSET(0x18BC6EA0)
#define EHBKEOKCMOF_SET_ISFINISHSUBPACKAGEMISSION_OFFSET UNITYSDK_OFFSET(0x18BC6EE0)
#define EHBKEOKCMOF_SET_LOGINFAILEDCOUNT_OFFSET UNITYSDK_OFFSET(0x18BC6EC0)
#define EHBKEOKCMOF_SET_NEEDREINITSDK_OFFSET UNITYSDK_OFFSET(0x18BC6E80)
#define EHBKEOKCMOF_SET_TESTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18BC6F00)
#define EHBKEOKCMOF_SET_TOTALLOGINFAILEDCOUNT_OFFSET UNITYSDK_OFFSET(0x18BC6F20)

inline static constexpr unsigned int EHBKEOKCMOF_TypeDefinitionIndex = 62495;

	class EHBKEOKCMOF : public ::RPG::Client::BasePhaseContext
	{
	public:
		::RPG::Client::LuaUIController* BBFFPPPHKLF; // 0x40
		::CHBCJGDEBNA* EFEFDMFKMMK; // 0x48
		::LODAOADEKHE* HPDCIPKCIDL; // 0x50
		::RPG::Client::LuaUIController* IPJJAECPMIL; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::GamePhaseType>* LBPKGMDDLHF; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LoginNodeType, ::System::Boolean>* IJPEHMDODPP; // 0x68
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Action*>*>* FBOBOLNKNKK; // 0x70
		::System::Int32 _LoginFailedCount_k__BackingField; // 0x78
		::System::Boolean FCBAOGNEOKK; // 0x7C
		::System::Boolean JAIEHIGMGDO; // 0x7D
		::System::Boolean EIKJKPJAIPP; // 0x7E
		::System::Byte _padding0[0x1];
		::RPG::Client::GamePhaseType CLLGFMJDEJO; // 0x80
		::System::Boolean _TestAttribute_k__BackingField; // 0x84
		::System::Boolean _NeedReinitSDK_k__BackingField; // 0x85
		::System::Boolean _IsAutoLogin_k__BackingField; // 0x86
		::System::Boolean DJOCBPBHBJI; // 0x87
		static ::System::Boolean* StaticGet__IsFinishSubPackageMission_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EHBKEOKCMOF")->GetStaticField(0x3C00);
		}

		static ::System::Int32* StaticGet__TotalLoginFailedCount_k__BackingField()
		{
			return (::System::Int32*)UnitySDK::FromName("", "EHBKEOKCMOF")->GetStaticField(0x3C04);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_CTOR_OFFSET))(this);
		}

		::RPG::Client::UIController* INNGBCCINEA(::RPG::Client::Promises::Promise* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_INNGBCCINEA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* FFCICPKELHG(::RPG::Client::Promises::Promise* a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_FFCICPKELHG_OFFSET))(this, a1);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_ONINIT_OFFSET))(this);
		}

		::System::Void OEMNKCDFDJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_OEMNKCDFDJI_OFFSET))(this, a1);
		}

		::System::Void HIIDGBHFHOI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_HIIDGBHFHOI_OFFSET))(this, a1);
		}

		::System::Void LGNPIGKKCPN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_LGNPIGKKCPN_OFFSET))(this, a1);
		}

		::System::Void MOJIHBBMIMP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_MOJIHBBMIMP_OFFSET))(this, a1);
		}

		::System::Void KCKPHPDAMEH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_KCKPHPDAMEH_OFFSET))(this, a1);
		}

		::System::Void KKNLMEDPKDA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_KKNLMEDPKDA_OFFSET))(this, a1);
		}

		::System::Void JNBHMGPAIFA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_JNBHMGPAIFA_OFFSET))(this, a1);
		}

		::System::Void MPFNDNPFHHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_MPFNDNPFHHP_OFFSET))(this, a1);
		}

		::System::Void FIAFICKAOOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_FIAFICKAOOH_OFFSET))(this, a1);
		}

		::System::Void HLPFDBDGPGP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_HLPFDBDGPGP_OFFSET))(this, a1);
		}

		::System::Void FLALLOANNGF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_FLALLOANNGF_OFFSET))(this, a1);
		}

		::System::Void BALCFCHCLOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_BALCFCHCLOH_OFFSET))(this, a1);
		}

		::System::Void DGPAAHAAPIE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_DGPAAHAAPIE_OFFSET))(this, a1);
		}

		::System::Void FPOEAHPBNDF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_FPOEAHPBNDF_OFFSET))(this, a1);
		}

		::System::Void KEJNLBFDPLN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_KEJNLBFDPLN_OFFSET))(this, a1);
		}

		::System::Void NKHOLHDIDIC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_NKHOLHDIDIC_OFFSET))(this, a1);
		}

		::System::Void PAKNHOGOEJG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_PAKNHOGOEJG_OFFSET))(this, a1);
		}

		::System::Void FDOOGFLBFJC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_FDOOGFLBFJC_OFFSET))(this, a1);
		}

		::System::Void DGECLIODNLK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_DGECLIODNLK_OFFSET))(this, a1);
		}

		::System::Void OOOIIFLKCMJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_OOOIIFLKCMJ_OFFSET))(this, a1);
		}

		::System::Void LPBMGBIFNKO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_LPBMGBIFNKO_OFFSET))(this, a1);
		}

		::System::Void AJNBMKGDMCF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_AJNBMKGDMCF_OFFSET))(this, a1);
		}

		::System::Void KDDOAJJGKKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_KDDOAJJGKKL_OFFSET))(this, a1);
		}

		::System::Void KFFJBANKFEG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_KFFJBANKFEG_OFFSET))(this, a1);
		}

		::System::Void MKDOHENEILF(::RPG::Client::GamePhaseType a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType, ::System::Action*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_MKDOHENEILF_OFFSET))(this, a1, a2);
		}

		::System::Void FMABBKHLHAP(::RPG::Client::GamePhaseType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_FMABBKHLHAP_OFFSET))(this, a1);
		}

		::System::Void AMOKDEOGNGB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_AMOKDEOGNGB_OFFSET))(this, a1);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_ONDISPOSE_OFFSET))(this);
		}

		::System::Void FJKBOKALNAH(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_FJKBOKALNAH_OFFSET))(this, a1, a2);
		}

		::System::Boolean PLFDFDBANAP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_PLFDFDBANAP_OFFSET))(this);
		}

		::System::Boolean HGIDBKFNAMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_HGIDBKFNAMC_OFFSET))(this);
		}

		::System::Boolean NJKCKCIBKFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_NJKCKCIBKFO_OFFSET))(this);
		}

		::System::Boolean FEBKMOCOJLE(::RPG::Client::LoginNodeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LoginNodeType))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_FEBKMOCOJLE_OFFSET))(this, a1);
		}

		::System::Void BHKJKCNIEFB(::RPG::Client::LoginNodeType a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoginNodeType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_BHKJKCNIEFB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_NeedReinitSDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_GET_NEEDREINITSDK_OFFSET))(this);
		}

		::System::Void set_NeedReinitSDK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_SET_NEEDREINITSDK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAutoLogin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_GET_ISAUTOLOGIN_OFFSET))(this);
		}

		::System::Void set_IsAutoLogin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_SET_ISAUTOLOGIN_OFFSET))(this, a1);
		}

		::System::Int32 get_LoginFailedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_GET_LOGINFAILEDCOUNT_OFFSET))(this);
		}

		::System::Void set_LoginFailedCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_SET_LOGINFAILEDCOUNT_OFFSET))(this, a1);
		}

		static ::System::Boolean get_IsFinishSubPackageMission()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EHBKEOKCMOF_GET_ISFINISHSUBPACKAGEMISSION_OFFSET))();
		}

		static ::System::Void set_IsFinishSubPackageMission(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_SET_ISFINISHSUBPACKAGEMISSION_OFFSET))(a1);
		}

		::System::Boolean get_TestAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_GET_TESTATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_TestAttribute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_SET_TESTATTRIBUTE_OFFSET))(this, a1);
		}

		static ::System::Int32 get_TotalLoginFailedCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + EHBKEOKCMOF_GET_TOTALLOGINFAILEDCOUNT_OFFSET))();
		}

		static ::System::Void set_TotalLoginFailedCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + EHBKEOKCMOF_SET_TOTALLOGINFAILEDCOUNT_OFFSET))(a1);
		}

	};
