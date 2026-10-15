#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDMNALCNPJE_EJumpMode.h"
#include "unitysdk/OJACCBLPEPG_EPauseReason.h"
#include "unitysdk/OJACCBLPEPG_EStationOpenState.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"
class CBABAAOHGHH;
class DIAGOMCGNPM;
class FNHHJAIOHGB;
class NNJOIHFDHML;
class OJACCBLPEPG;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TimeScaleStack; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJACCBLPEPG_ADGDILBOICG_OFFSET UNITYSDK_OFFSET(0xBEA9700)
#define OJACCBLPEPG_AHMHBLEFKLB_OFFSET UNITYSDK_OFFSET(0xBEA4D70)
#define OJACCBLPEPG_AKMIIIEFBML_OFFSET UNITYSDK_OFFSET(0xBEA4A60)
#define OJACCBLPEPG_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xBEA6790)
#define OJACCBLPEPG_CBALBELCFBH_OFFSET UNITYSDK_OFFSET(0xBEA4E40)
#define OJACCBLPEPG_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEA9890)
#define OJACCBLPEPG_CHIJJAGJCBP_OFFSET UNITYSDK_OFFSET(0xBEA5510)
#define OJACCBLPEPG_CLMHOOFJKLL_OFFSET UNITYSDK_OFFSET(0xBEA8DF0)
#define OJACCBLPEPG_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA51E0)
#define OJACCBLPEPG_DBFENBIMLBF_OFFSET UNITYSDK_OFFSET(0xBEA76A0)
#define OJACCBLPEPG_DCEPOBADPGE_OFFSET UNITYSDK_OFFSET(0xBEA4460)
#define OJACCBLPEPG_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xBEA7D30)
#define OJACCBLPEPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEA8270)
#define OJACCBLPEPG_DKMDDHAKNLH_OFFSET UNITYSDK_OFFSET(0xBEA5600)
#define OJACCBLPEPG_EANLMIKHCKG_OFFSET UNITYSDK_OFFSET(0xBEA96E0)
#define OJACCBLPEPG_FBAODODPDCI_OFFSET UNITYSDK_OFFSET(0xBEA7BF0)
#define OJACCBLPEPG_FGFEIEMJDAB_OFFSET UNITYSDK_OFFSET(0xBEA4840)
#define OJACCBLPEPG_FKIKEFOKKOG_OFFSET UNITYSDK_OFFSET(0xBEA7220)
#define OJACCBLPEPG_GGBFNFHNKKM_OFFSET UNITYSDK_OFFSET(0xBEA4720)
#define OJACCBLPEPG_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xBEA5000)
#define OJACCBLPEPG_GMDBICOBAKL_OFFSET UNITYSDK_OFFSET(0xBEA9790)
#define OJACCBLPEPG_HKGDJMJFMAJ_OFFSET UNITYSDK_OFFSET(0xBEA81F0)
#define OJACCBLPEPG_IGAJNAICMKH_OFFSET UNITYSDK_OFFSET(0xBEA45B0)
#define OJACCBLPEPG_IPEDJFJFAOM_OFFSET UNITYSDK_OFFSET(0xBEA4B90)
#define OJACCBLPEPG_JLEHMGKKEMF_OFFSET UNITYSDK_OFFSET(0xBEA8E40)
#define OJACCBLPEPG_KMAEIDNLGAI_OFFSET UNITYSDK_OFFSET(0xBEA78C0)
#define OJACCBLPEPG_LGCFDONPBJM_OFFSET UNITYSDK_OFFSET(0xBEA6AB0)
#define OJACCBLPEPG_LPPCJBHPMBG_OFFSET UNITYSDK_OFFSET(0xBEA6FE0)
#define OJACCBLPEPG_NEIOCBBLIJD_OFFSET UNITYSDK_OFFSET(0xBEA4680)
#define OJACCBLPEPG_NKECLAJKCDH_OFFSET UNITYSDK_OFFSET(0xBEA6D70)
#define OJACCBLPEPG_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBEA5660)
#define OJACCBLPEPG_OHKMFAPKCLH_OFFSET UNITYSDK_OFFSET(0xBEA9170)
#define OJACCBLPEPG_OOEIILMFCPA_OFFSET UNITYSDK_OFFSET(0xBEA69C0)
#define OJACCBLPEPG_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0xBEA5D80)
#define OJACCBLPEPG_PFLMAOFHGMO_OFFSET UNITYSDK_OFFSET(0xBEA7B20)
#define OJACCBLPEPG_PKKFMFKFJJD_OFFSET UNITYSDK_OFFSET(0xBEA4EE0)
#define OJACCBLPEPG_PKLAMDFAPJC_OFFSET UNITYSDK_OFFSET(0xBEA9810)
#define OJACCBLPEPG_PPIJFNFOBNE_OFFSET UNITYSDK_OFFSET(0xBEA9780)

inline static constexpr unsigned int OJACCBLPEPG_TypeDefinitionIndex = 59820;

	class OJACCBLPEPG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CBABAAOHGHH*>* CHFCKNCJEGG; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::CBABAAOHGHH*>* DFIAHFHGIHK; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>*>* AMJKFPKEBKB; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Action_1<::System::Object*>*>*>* NJNMJNEENGO; // 0x28
		::FNHHJAIOHGB* DELAMMACIIF; // 0x30
		::RPG::GameCore::TimeScaleStack* DDIALPLNALD; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::System::Boolean>*>* KEGMMPOKEMM; // 0x40
		::System::Collections::Generic::HashSet_1<::System::UInt32>* GEHLPFCKAAH; // 0x48
		::DIAGOMCGNPM* MGPGNIONBAF; // 0x50
		::NNJOIHFDHML* HPGMEABEAPL; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::System::Boolean>*>* JHKKBCNHJJB; // 0x60
		::RPG::Client::MapDef* KKKADHHBMLD; // 0x68
		::System::Boolean BIDEGKNNLCE; // 0x70
		::System::Boolean MHEAIOMEGCA; // 0x71
		::System::Byte _padding0[0x6];
		::RPG::Client::ReasonBool_1<::System::Object*> JFHCMNAEEBA; // 0x78
		static ::System::Object** StaticGet_GLPFJEMOHNP()
		{
			return (::System::Object**)UnitySDK::FromName("", "OJACCBLPEPG")->GetStaticField(0x54180);
		}

		static ::OJACCBLPEPG** StaticGet_EMLNOINPICJ()
		{
			return (::OJACCBLPEPG**)UnitySDK::FromName("", "OJACCBLPEPG")->GetStaticField(0x54188);
		}

		// static const ::System::Object AHPHBGKNHLD; // 0x0
		// static const ::System::Object LEFAOGJCPNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJACCBLPEPG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJACCBLPEPG_CCTOR_OFFSET))();
		}

		::System::Void DCEPOBADPGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJACCBLPEPG_DCEPOBADPGE_OFFSET))(this);
		}

		::System::Void IGAJNAICMKH(::System::String* a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + OJACCBLPEPG_IGAJNAICMKH_OFFSET))(this, a1, a2);
		}

		::System::Void NEIOCBBLIJD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OJACCBLPEPG_NEIOCBBLIJD_OFFSET))(this, a1);
		}

		::System::Void GGBFNFHNKKM(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OJACCBLPEPG_GGBFNFHNKKM_OFFSET))(this, a1, a2);
		}

		::System::Void FGFEIEMJDAB(::System::String* a1, ::System::Action_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OJACCBLPEPG_FGFEIEMJDAB_OFFSET))(this, a1, a2);
		}

		::System::Void AKMIIIEFBML(::System::String* a1, ::System::Action_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OJACCBLPEPG_AKMIIIEFBML_OFFSET))(this, a1, a2);
		}

		::System::Void IPEDJFJFAOM(::System::String* a1, ::OJACCBLPEPG_EStationOpenState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::OJACCBLPEPG_EStationOpenState))((::PBYTE)hIl2Cpp + OJACCBLPEPG_IPEDJFJFAOM_OFFSET))(this, a1, a2);
		}

		::System::Void AHMHBLEFKLB(::System::String* a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + OJACCBLPEPG_AHMHBLEFKLB_OFFSET))(this, a1, a2);
		}

		::System::Void CBALBELCFBH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OJACCBLPEPG_CBALBELCFBH_OFFSET))(this, a1);
		}

		::System::Void PKKFMFKFJJD(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OJACCBLPEPG_PKKFMFKFJJD_OFFSET))(this, a1, a2);
		}

		static ::OJACCBLPEPG* GGBLHEHJBDO()
		{
			return ((::OJACCBLPEPG*(*)())((::PBYTE)hIl2Cpp + OJACCBLPEPG_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void CHIJJAGJCBP(::System::Boolean a1, ::OJACCBLPEPG_EPauseReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::OJACCBLPEPG_EPauseReason))((::PBYTE)hIl2Cpp + OJACCBLPEPG_CHIJJAGJCBP_OFFSET))(this, a1, a2);
		}

		::System::Void DKMDDHAKNLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJACCBLPEPG_DKMDDHAKNLH_OFFSET))(this);
		}

		::System::Void PEECNCABGFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJACCBLPEPG_PEECNCABGFD_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OJACCBLPEPG_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void OOEIILMFCPA(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + OJACCBLPEPG_OOEIILMFCPA_OFFSET))(this, a1, a2);
		}

		::System::Void LPPCJBHPMBG(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + OJACCBLPEPG_LPPCJBHPMBG_OFFSET))(this, a1, a2);
		}

		::System::Void DBFENBIMLBF(::GDMNALCNPJE_EJumpMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDMNALCNPJE_EJumpMode))((::PBYTE)hIl2Cpp + OJACCBLPEPG_DBFENBIMLBF_OFFSET))(this, a1);
		}

		::System::Boolean KMAEIDNLGAI(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJACCBLPEPG_KMAEIDNLGAI_OFFSET))(this, a1);
		}

		::System::Void PFLMAOFHGMO(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + OJACCBLPEPG_PFLMAOFHGMO_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + OJACCBLPEPG_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OJACCBLPEPG_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJACCBLPEPG_DISPOSE_OFFSET))(this);
		}

		::System::Void LGCFDONPBJM(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + OJACCBLPEPG_LGCFDONPBJM_OFFSET))(this, a1, a2);
		}

		::System::Void FKIKEFOKKOG(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + OJACCBLPEPG_FKIKEFOKKOG_OFFSET))(this, a1, a2);
		}

		::System::Void CLMHOOFJKLL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJACCBLPEPG_CLMHOOFJKLL_OFFSET))(this, a1);
		}

		::System::Void FBAODODPDCI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJACCBLPEPG_FBAODODPDCI_OFFSET))(this, a1);
		}

		::System::Void JLEHMGKKEMF(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + OJACCBLPEPG_JLEHMGKKEMF_OFFSET))(this, a1);
		}

		::System::Void OHKMFAPKCLH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJACCBLPEPG_OHKMFAPKCLH_OFFSET))(this, a1);
		}

		::RPG::Client::IAssetOperation* NKECLAJKCDH(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + OJACCBLPEPG_NKECLAJKCDH_OFFSET))(this, a1, a2);
		}

		::System::Single EANLMIKHCKG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OJACCBLPEPG_EANLMIKHCKG_OFFSET))(this);
		}

		::System::Single HKGDJMJFMAJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OJACCBLPEPG_HKGDJMJFMAJ_OFFSET))(this);
		}

		::System::Single ADGDILBOICG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OJACCBLPEPG_ADGDILBOICG_OFFSET))(this);
		}

		::NNJOIHFDHML* PPIJFNFOBNE()
		{
			return ((::NNJOIHFDHML*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJACCBLPEPG_PPIJFNFOBNE_OFFSET))(this);
		}

		::FNHHJAIOHGB* GMDBICOBAKL()
		{
			return ((::FNHHJAIOHGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJACCBLPEPG_GMDBICOBAKL_OFFSET))(this);
		}

		::System::Single PKLAMDFAPJC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OJACCBLPEPG_PKLAMDFAPJC_OFFSET))(this);
		}

	};
