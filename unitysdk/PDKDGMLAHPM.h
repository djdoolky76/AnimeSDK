#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDOEDOEBFAJ;
class BEKKPBIKINI;
class DLGCDMBGIEB;
class EIFJNMDDNPF;
class FAHNFMCOJCH;
class GEPCOHMCAAJ;
class GOKHEKCHLEL;
class HFNMKEDPFJH;
class HLCAKAJLKGO;
class JMLOJKGMBMC;
class KCEJNBLDAFE;
class LAECPMJAIIK;
class MJEMCKGBIPN;
class NEAMMJICKGD;
class OGGELMMFPKP;
class OIHNBNHAINN;
class OMFFCGEINLF;
class PDKDGMLAHPM;
class PFELEGKDCBO;
class PFPPACPMFDJ;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameFlow; }
namespace RPG::Client::ChenLingBattle { class GridIndex; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PDKDGMLAHPM_BBFPGEOFDEG_OFFSET UNITYSDK_OFFSET(0xC0147D0)
#define PDKDGMLAHPM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC013500)
#define PDKDGMLAHPM_CKDIDIHLAEH_OFFSET UNITYSDK_OFFSET(0xC016910)
#define PDKDGMLAHPM_CTOR_OFFSET UNITYSDK_OFFSET(0xC013630)
#define PDKDGMLAHPM_DADPBGKOHGM_OFFSET UNITYSDK_OFFSET(0xC0154E0)
#define PDKDGMLAHPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC016540)
#define PDKDGMLAHPM_DKGPAAOPKLO_OFFSET UNITYSDK_OFFSET(0xC013EB0)
#define PDKDGMLAHPM_FIMKMBJAKOM_OFFSET UNITYSDK_OFFSET(0xC014A50)
#define PDKDGMLAHPM_FMCJMEBFEFJ_OFFSET UNITYSDK_OFFSET(0xC015C30)
#define PDKDGMLAHPM_FMHPCPOHMIH_OFFSET UNITYSDK_OFFSET(0xC0151C0)
#define PDKDGMLAHPM_HJDDEEPDGCJ_OFFSET UNITYSDK_OFFSET(0xC016440)
#define PDKDGMLAHPM_HKCIIFJLIPN_OFFSET UNITYSDK_OFFSET(0xC016340)
#define PDKDGMLAHPM_HNKKIPCIKKP_OFFSET UNITYSDK_OFFSET(0xC016110)
#define PDKDGMLAHPM_IAGHJAOFACP_OFFSET UNITYSDK_OFFSET(0xC015750)
#define PDKDGMLAHPM_ICJJANJFLFC_OFFSET UNITYSDK_OFFSET(0xC014F40)
#define PDKDGMLAHPM_IFHBAJABFJG_OFFSET UNITYSDK_OFFSET(0xC014CE0)
#define PDKDGMLAHPM_JKCEHALALCO_OFFSET UNITYSDK_OFFSET(0xC014520)
#define PDKDGMLAHPM_LMAEIDPEDAO_OFFSET UNITYSDK_OFFSET(0xC015420)
#define PDKDGMLAHPM_NMKKJPPLMBA_OFFSET UNITYSDK_OFFSET(0xC0137E0)
#define PDKDGMLAHPM_NNHDDOMLFIA_OFFSET UNITYSDK_OFFSET(0xC0159B0)
#define PDKDGMLAHPM_OAALGCBOPKH_OFFSET UNITYSDK_OFFSET(0xC013B60)
#define PDKDGMLAHPM_OBJFOEEJPJE_OFFSET UNITYSDK_OFFSET(0xC0136D0)
#define PDKDGMLAHPM_ODPFEHINNLI_OFFSET UNITYSDK_OFFSET(0xC014390)
#define PDKDGMLAHPM_ONODJBJPGAN_OFFSET UNITYSDK_OFFSET(0xC015E90)
#define PDKDGMLAHPM_PALKKMDLFHA_OFFSET UNITYSDK_OFFSET(0xC014110)
#define PDKDGMLAHPM_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC0165D0)

inline static constexpr unsigned int PDKDGMLAHPM_TypeDefinitionIndex = 76236;

	class PDKDGMLAHPM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::OIHNBNHAINN*>* DHOANEAPHOL; // 0x10
		::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow* BEGDKHKENMF; // 0x18
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow*))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_CTOR_OFFSET))(this, a1);
		}

		static ::PDKDGMLAHPM* BPLPBPMEODA(::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow* a1)
		{
			return ((::PDKDGMLAHPM*(*)(::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow*))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OBJFOEEJPJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_OBJFOEEJPJE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::BDOEDOEBFAJ*>* NMKKJPPLMBA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::BDOEDOEBFAJ*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_NMKKJPPLMBA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::BDOEDOEBFAJ*>* OAALGCBOPKH()
		{
			return ((::RPG::Client::Promises::IPromise_1<::BDOEDOEBFAJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_OAALGCBOPKH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::PFELEGKDCBO*>* DKGPAAOPKLO()
		{
			return ((::RPG::Client::Promises::IPromise_1<::PFELEGKDCBO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_DKGPAAOPKLO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::NEAMMJICKGD*>* PALKKMDLFHA(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::NEAMMJICKGD*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_PALKKMDLFHA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::KCEJNBLDAFE*>* ODPFEHINNLI(::RPG::Client::ChenLingBattle::GridIndex* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::KCEJNBLDAFE*>*(*)(::PVOID, ::RPG::Client::ChenLingBattle::GridIndex*))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_ODPFEHINNLI_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::LAECPMJAIIK*>* JKCEHALALCO(::System::UInt32 a1, ::RPG::Client::ChenLingBattle::GridIndex* a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::LAECPMJAIIK*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ChenLingBattle::GridIndex*))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_JKCEHALALCO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::GEPCOHMCAAJ*>* BBFPGEOFDEG(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::GEPCOHMCAAJ*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_BBFPGEOFDEG_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::DLGCDMBGIEB*>* FIMKMBJAKOM(::System::UInt32 a1, ::PFPPACPMFDJ* a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::DLGCDMBGIEB*>*(*)(::PVOID, ::System::UInt32, ::PFPPACPMFDJ*))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_FIMKMBJAKOM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::JMLOJKGMBMC*>* IFHBAJABFJG()
		{
			return ((::RPG::Client::Promises::IPromise_1<::JMLOJKGMBMC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_IFHBAJABFJG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::OMFFCGEINLF*>* ICJJANJFLFC(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::OMFFCGEINLF*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_ICJJANJFLFC_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::BEKKPBIKINI*>* FMHPCPOHMIH()
		{
			return ((::RPG::Client::Promises::IPromise_1<::BEKKPBIKINI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_FMHPCPOHMIH_OFFSET))(this);
		}

		::System::Void LMAEIDPEDAO(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_LMAEIDPEDAO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::HFNMKEDPFJH*>* DADPBGKOHGM(::System::Boolean a1, ::System::UInt32 a2, ::Il2CppArray<::OGGELMMFPKP*>* a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::RPG::Client::Promises::IPromise_1<::HFNMKEDPFJH*>*(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::Il2CppArray<::OGGELMMFPKP*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_DADPBGKOHGM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::Promises::IPromise_1<::FAHNFMCOJCH*>* IAGHJAOFACP()
		{
			return ((::RPG::Client::Promises::IPromise_1<::FAHNFMCOJCH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_IAGHJAOFACP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::HLCAKAJLKGO*>* NNHDDOMLFIA(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::HLCAKAJLKGO*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_NNHDDOMLFIA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::EIFJNMDDNPF*>* FMCJMEBFEFJ()
		{
			return ((::RPG::Client::Promises::IPromise_1<::EIFJNMDDNPF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_FMCJMEBFEFJ_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::MJEMCKGBIPN*>* ONODJBJPGAN(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::MJEMCKGBIPN*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_ONODJBJPGAN_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::GOKHEKCHLEL*>* HNKKIPCIKKP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::GOKHEKCHLEL*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_HNKKIPCIKKP_OFFSET))(this, a1, a2);
		}

		::System::Void HKCIIFJLIPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_HKCIIFJLIPN_OFFSET))(this, a1);
		}

		::System::Void HJDDEEPDGCJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_HJDDEEPDGCJ_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_DISPOSE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void CKDIDIHLAEH(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + PDKDGMLAHPM_CKDIDIHLAEH_OFFSET))(this, a1, a2);
		}

	};
