#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSkillType.h"
#include "unitysdk/RPG/GameCore/ChenLingDamageType.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;
class LMFOOOLDECA;
class OMNJCDDMLHI;
class PMIEFBPDJEB;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDONFGBCKKA_BCPBJFMFALF_OFFSET UNITYSDK_OFFSET(0xC772B80)
#define CDONFGBCKKA_BOPHAKDCHGF_OFFSET UNITYSDK_OFFSET(0xC772600)
#define CDONFGBCKKA_CHMPKJDPGGC_OFFSET UNITYSDK_OFFSET(0xC7748C0)
#define CDONFGBCKKA_CPGOJBCLHKD_OFFSET UNITYSDK_OFFSET(0xC774C80)
#define CDONFGBCKKA_CTOR_OFFSET UNITYSDK_OFFSET(0xC76F7A0)
#define CDONFGBCKKA_DEMNAGMLDMB_OFFSET UNITYSDK_OFFSET(0xC774550)
#define CDONFGBCKKA_DJIOLIGLONA_OFFSET UNITYSDK_OFFSET(0xC773650)
#define CDONFGBCKKA_EJACPKEMJLL_OFFSET UNITYSDK_OFFSET(0xC7714D0)
#define CDONFGBCKKA_FAKINBLBACG_OFFSET UNITYSDK_OFFSET(0xC774FE0)
#define CDONFGBCKKA_FKKAPFOHKMP_OFFSET UNITYSDK_OFFSET(0xC773AA0)
#define CDONFGBCKKA_GCMLGMFCODO_OFFSET UNITYSDK_OFFSET(0xC773230)
#define CDONFGBCKKA_HMHINMDIDAK_OFFSET UNITYSDK_OFFSET(0xC773700)
#define CDONFGBCKKA_IIOLGCDBJOF_OFFSET UNITYSDK_OFFSET(0xC770DC0)
#define CDONFGBCKKA_JEJKCGLHNAF_OFFSET UNITYSDK_OFFSET(0xC775590)
#define CDONFGBCKKA_JELBMKEGPLG_OFFSET UNITYSDK_OFFSET(0xC76FD50)
#define CDONFGBCKKA_JIDAKKBMFFL_OFFSET UNITYSDK_OFFSET(0xC7703D0)
#define CDONFGBCKKA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC7706C0)
#define CDONFGBCKKA_JNHOKFELMKM_OFFSET UNITYSDK_OFFSET(0xC771F70)
#define CDONFGBCKKA_KCIGDEGFFLB_OFFSET UNITYSDK_OFFSET(0xC775340)
#define CDONFGBCKKA_MNDCJGALGCN_OFFSET UNITYSDK_OFFSET(0xC76F8C0)
#define CDONFGBCKKA_MOFJLOCJHJE_OFFSET UNITYSDK_OFFSET(0xC775E70)
#define CDONFGBCKKA_MPACAJLCDHN_OFFSET UNITYSDK_OFFSET(0xC774030)
#define CDONFGBCKKA_NOIMCGKAJGI_OFFSET UNITYSDK_OFFSET(0xC7708F0)
#define CDONFGBCKKA_OALBCCIJAHG_OFFSET UNITYSDK_OFFSET(0xC7719F0)
#define CDONFGBCKKA_OIDLBCNNCJL_OFFSET UNITYSDK_OFFSET(0xC770140)
#define CDONFGBCKKA_POOCGOLDOFE_OFFSET UNITYSDK_OFFSET(0xC775AF0)

	class CDONFGBCKKA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::PMIEFBPDJEB*>* EKLFMNCPFEF; // 0x10
		::LMFOOOLDECA* PDENFEFCAGN; // 0x18
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::PMIEFBPDJEB*>* JPHDKBPHEFJ; // 0x28
		static ::System::Int32* StaticGet_LIDAIIHGPIC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CDONFGBCKKA")->GetStaticField(0x5670);
		}

		::System::Void _ctor(::LMFOOOLDECA* a1, ::OMNJCDDMLHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMFOOOLDECA*, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MNDCJGALGCN(::System::UInt32 a1, ::System::String* a2, ::ALMFLCJCHKP* a3, ::RPG::Client::LittleGame::ChenLing::ChenLingSkillType a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::ALMFLCJCHKP*, ::RPG::Client::LittleGame::ChenLing::ChenLingSkillType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CDONFGBCKKA_MNDCJGALGCN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void JELBMKEGPLG(::System::UInt32 a1, ::System::String* a2, ::ALMFLCJCHKP* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::ALMFLCJCHKP*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDONFGBCKKA_JELBMKEGPLG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OIDLBCNNCJL(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_OIDLBCNNCJL_OFFSET))(this, a1);
		}

		::System::Boolean JIDAKKBMFFL(::ALMFLCJCHKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_JIDAKKBMFFL_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDONFGBCKKA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void NOIMCGKAJGI(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_NOIMCGKAJGI_OFFSET))(this, a1);
		}

		::System::Void IIOLGCDBJOF(::System::Int32 a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_IIOLGCDBJOF_OFFSET))(this, a1, a2);
		}

		::System::Void EJACPKEMJLL(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_EJACPKEMJLL_OFFSET))(this, a1, a2);
		}

		::System::Void OALBCCIJAHG(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_OALBCCIJAHG_OFFSET))(this, a1, a2);
		}

		::System::Void JNHOKFELMKM(::ALMFLCJCHKP* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::System::Int32))((::PBYTE)hIl2Cpp + CDONFGBCKKA_JNHOKFELMKM_OFFSET))(this, a1, a2);
		}

		::System::Void BOPHAKDCHGF(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_BOPHAKDCHGF_OFFSET))(this, a1, a2);
		}

		::System::Void BCPBJFMFALF(::ALMFLCJCHKP* a1, ::System::Collections::Generic::List_1<::ALMFLCJCHKP*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::System::Collections::Generic::List_1<::ALMFLCJCHKP*>*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_BCPBJFMFALF_OFFSET))(this, a1, a2);
		}

		::System::Void GCMLGMFCODO(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_GCMLGMFCODO_OFFSET))(this, a1);
		}

		::System::Void HMHINMDIDAK(::ALMFLCJCHKP* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::System::UInt32))((::PBYTE)hIl2Cpp + CDONFGBCKKA_HMHINMDIDAK_OFFSET))(this, a1, a2);
		}

		::System::Void FKKAPFOHKMP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDONFGBCKKA_FKKAPFOHKMP_OFFSET))(this, a1);
		}

		::System::Void MPACAJLCDHN(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_MPACAJLCDHN_OFFSET))(this, a1);
		}

		::System::Void DEMNAGMLDMB(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_DEMNAGMLDMB_OFFSET))(this, a1);
		}

		::System::Void CHMPKJDPGGC(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingDamageType a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingDamageType))((::PBYTE)hIl2Cpp + CDONFGBCKKA_CHMPKJDPGGC_OFFSET))(this, a1, a2);
		}

		::System::Void CPGOJBCLHKD(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_CPGOJBCLHKD_OFFSET))(this, a1);
		}

		::System::Void FAKINBLBACG(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_FAKINBLBACG_OFFSET))(this, a1);
		}

		::System::Void KCIGDEGFFLB(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_KCIGDEGFFLB_OFFSET))(this, a1);
		}

		::System::Void JEJKCGLHNAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDONFGBCKKA_JEJKCGLHNAF_OFFSET))(this);
		}

		::System::Void POOCGOLDOFE(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_POOCGOLDOFE_OFFSET))(this, a1);
		}

		::System::Boolean DJIOLIGLONA(::RPG::GameCore::BaseChenLingBattleValueGetter* a1, ::PMIEFBPDJEB* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleValueGetter*, ::PMIEFBPDJEB*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_DJIOLIGLONA_OFFSET))(this, a1, a2);
		}

		::System::Void MOFJLOCJHJE(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CDONFGBCKKA_MOFJLOCJHJE_OFFSET))(this, a1, a2);
		}

	};
