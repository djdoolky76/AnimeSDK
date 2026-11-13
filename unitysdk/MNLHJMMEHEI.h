#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CIGEFGHOKPI;
class IHOMABBDNPN;
class MNLHJMMEHEI_BJKEBDNCLOP;
class MNLHJMMEHEI_NNKHNDEBHDA;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class TeamManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SummonUnitBlockBasedEffect; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNLHJMMEHEI_CAHPDAPICDP_OFFSET UNITYSDK_OFFSET(0x1B1FC960)
#define MNLHJMMEHEI_CEKAKIAPMJB_OFFSET UNITYSDK_OFFSET(0x1B1FC350)
#define MNLHJMMEHEI_CMOMAMJMOFH_OFFSET UNITYSDK_OFFSET(0x1B1F9B60)
#define MNLHJMMEHEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1FCE60)
#define MNLHJMMEHEI_DHPJHJBGNGJ_OFFSET UNITYSDK_OFFSET(0x1B1FC4E0)
#define MNLHJMMEHEI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B1F9740)
#define MNLHJMMEHEI_DNLAEBJELGM_OFFSET UNITYSDK_OFFSET(0x1B1FB2A0)
#define MNLHJMMEHEI_DOBLMDHOLEB_OFFSET UNITYSDK_OFFSET(0x1B1FC690)
#define MNLHJMMEHEI_ELLAECMKHII_OFFSET UNITYSDK_OFFSET(0x1B1FB010)
#define MNLHJMMEHEI_GHMIIBODCIG_OFFSET UNITYSDK_OFFSET(0x1B1FAB30)
#define MNLHJMMEHEI_GLHEPMMGFDN_OFFSET UNITYSDK_OFFSET(0x1B1FBEA0)
#define MNLHJMMEHEI_GPOPMBFOFCI_OFFSET UNITYSDK_OFFSET(0x1B1FA4F0)
#define MNLHJMMEHEI_HBAPDLBMEBF_OFFSET UNITYSDK_OFFSET(0x1B1FB860)
#define MNLHJMMEHEI_IKBPCFMENPD_OFFSET UNITYSDK_OFFSET(0x1B1F9A40)
#define MNLHJMMEHEI_JBHGOJOKKDO_OFFSET UNITYSDK_OFFSET(0x1B1FA5E0)
#define MNLHJMMEHEI_JOKLBJFEOAD_OFFSET UNITYSDK_OFFSET(0x1B1FA200)
#define MNLHJMMEHEI_KMNJFIMPBCA_OFFSET UNITYSDK_OFFSET(0x1B1FACD0)
#define MNLHJMMEHEI_LKGJGOGLMBO_OFFSET UNITYSDK_OFFSET(0x1B1FAE70)
#define MNLHJMMEHEI_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x1B1F9500)
#define MNLHJMMEHEI_NDLOEOFJPFB_OFFSET UNITYSDK_OFFSET(0x1B1FC5E0)
#define MNLHJMMEHEI_OLCKIJGPGKO_OFFSET UNITYSDK_OFFSET(0x1B1FCC10)
#define MNLHJMMEHEI_OMGMHCKAKOH_OFFSET UNITYSDK_OFFSET(0x1B1FA690)
#define MNLHJMMEHEI_OOEAMFPAKIH_OFFSET UNITYSDK_OFFSET(0x1B1FCA30)
#define MNLHJMMEHEI_TICK_OFFSET UNITYSDK_OFFSET(0x1B1F9C60)

inline static constexpr unsigned int MNLHJMMEHEI_TypeDefinitionIndex = 58226;

	class MNLHJMMEHEI : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* GIPIPNPCOFN; // 0x18
		::System::Collections::Generic::LinkedList_1<::System::Object*>* IBCEAHIDOON; // 0x20
		::MNLHJMMEHEI_BJKEBDNCLOP* HDMNKPBECHF; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* HNOPLPDFLHC; // 0x30
		::RPG::Client::TeamManager* MEIKAGJHOIE; // 0x38
		::MNLHJMMEHEI_NNKHNDEBHDA* KMINDOCHIKC; // 0x40
		::CIGEFGHOKPI* NHBLALBELIO; // 0x48
		::RPG::GameCore::SummonUnitBlockBasedEffect* BIPGJDOKJMF; // 0x50
		::IHOMABBDNPN* EPFCCJBCKDG; // 0x58
		::Il2CppArray<::UnityEngine::Vector3>* EOPDLKJJJNJ; // 0x60
		::UnityEngine::Vector3 HOOJPIALFLO; // 0x68
		::System::Boolean PPHOBNDCMHF; // 0x74
		::System::Boolean FMNEEONAMNO; // 0x75
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 CMIKCGMJKEM; // 0x78
		// static const ::System::Object PKFJNCIPFFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_TICK_OFFSET))(this, a1);
		}

		::System::Void GLHEPMMGFDN(::RPG::GameCore::SummonUnitBlockBasedEffect* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitBlockBasedEffect*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_GLHEPMMGFDN_OFFSET))(this, a1, a2);
		}

		::System::Void IKBPCFMENPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_IKBPCFMENPD_OFFSET))(this);
		}

		::RPG::PoolList_1<::UnityEngine::Vector3>* OMGMHCKAKOH(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::PoolList_1<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_OMGMHCKAKOH_OFFSET))(this, a1);
		}

		::MNLHJMMEHEI_NNKHNDEBHDA* LKGJGOGLMBO(::UnityEngine::Vector3 a1)
		{
			return ((::MNLHJMMEHEI_NNKHNDEBHDA*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_LKGJGOGLMBO_OFFSET))(this, a1);
		}

		::System::Void DNLAEBJELGM(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_DNLAEBJELGM_OFFSET))(this, a1);
		}

		::System::String* DOBLMDHOLEB(::MNLHJMMEHEI_NNKHNDEBHDA* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MNLHJMMEHEI_NNKHNDEBHDA*))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_DOBLMDHOLEB_OFFSET))(this, a1);
		}

		::System::Void NDLOEOFJPFB(::MNLHJMMEHEI_NNKHNDEBHDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNLHJMMEHEI_NNKHNDEBHDA*))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_NDLOEOFJPFB_OFFSET))(this, a1);
		}

		::System::Void CMOMAMJMOFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_CMOMAMJMOFH_OFFSET))(this);
		}

		::System::Boolean GHMIIBODCIG(::UnityEngine::Vector3 a1, ::MNLHJMMEHEI_NNKHNDEBHDA* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::MNLHJMMEHEI_NNKHNDEBHDA*))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_GHMIIBODCIG_OFFSET))(this, a1, a2);
		}

		::System::Boolean KMNJFIMPBCA(::UnityEngine::Vector3 a1, ::MNLHJMMEHEI_NNKHNDEBHDA* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::MNLHJMMEHEI_NNKHNDEBHDA*))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_KMNJFIMPBCA_OFFSET))(this, a1, a2);
		}

		::System::Boolean CEKAKIAPMJB(::UnityEngine::Vector3 a1, ::MNLHJMMEHEI_NNKHNDEBHDA* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::MNLHJMMEHEI_NNKHNDEBHDA*))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_CEKAKIAPMJB_OFFSET))(this, a1, a2);
		}

		::System::Boolean CAHPDAPICDP(::UnityEngine::Vector3 a1, ::MNLHJMMEHEI_NNKHNDEBHDA* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::MNLHJMMEHEI_NNKHNDEBHDA*))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_CAHPDAPICDP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* JBHGOJOKKDO()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_JBHGOJOKKDO_OFFSET))(this);
		}

		::System::Void OOEAMFPAKIH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_OOEAMFPAKIH_OFFSET))(this, a1);
		}

		::System::Boolean GPOPMBFOFCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_GPOPMBFOFCI_OFFSET))(this);
		}

		::System::Void DHPJHJBGNGJ(::MNLHJMMEHEI_NNKHNDEBHDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNLHJMMEHEI_NNKHNDEBHDA*))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_DHPJHJBGNGJ_OFFSET))(this, a1);
		}

		::System::Boolean JOKLBJFEOAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_JOKLBJFEOAD_OFFSET))(this);
		}

		::System::Void ELLAECMKHII(::RPG::PoolList_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_ELLAECMKHII_OFFSET))(this, a1);
		}

		::System::Void OLCKIJGPGKO(::MNLHJMMEHEI_NNKHNDEBHDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNLHJMMEHEI_NNKHNDEBHDA*))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_OLCKIJGPGKO_OFFSET))(this, a1);
		}

		::System::Void HBAPDLBMEBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_HBAPDLBMEBF_OFFSET))(this);
		}

	};
