#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAOIIOIGCOJ.h"
#include "unitysdk/GEEOPFIMJEM.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HPKACEPPPCA;
class JCPHHMANKBM;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
namespace RPG::Client { class SceneTransformAnim; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class DriftComponentData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NHMMDLHLCCP_ADGGFLLMEGB_OFFSET UNITYSDK_OFFSET(0xBBD2B40)
#define NHMMDLHLCCP_BFFOCNIGILL_OFFSET UNITYSDK_OFFSET(0xBBD10F0)
#define NHMMDLHLCCP_CCIEEBNABGF_OFFSET UNITYSDK_OFFSET(0xBBD26D0)
#define NHMMDLHLCCP_CMDBJFLEOGI_OFFSET UNITYSDK_OFFSET(0xBBD01A0)
#define NHMMDLHLCCP_CTOR_OFFSET UNITYSDK_OFFSET(0xBBCEF20)
#define NHMMDLHLCCP_DBEOAACLIMD_OFFSET UNITYSDK_OFFSET(0xBBD2550)
#define NHMMDLHLCCP_DNFGFHMNDEF_OFFSET UNITYSDK_OFFSET(0xBBD2310)
#define NHMMDLHLCCP_EHBAHFHJOOF_OFFSET UNITYSDK_OFFSET(0xBBD00E0)
#define NHMMDLHLCCP_FGCEKCPMFOI_OFFSET UNITYSDK_OFFSET(0xBBD0780)
#define NHMMDLHLCCP_FLLLGFDCGDB_OFFSET UNITYSDK_OFFSET(0xBBD14A0)
#define NHMMDLHLCCP_FOKKJBFIHGI_OFFSET UNITYSDK_OFFSET(0xBBD23D0)
#define NHMMDLHLCCP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBBCF7D0)
#define NHMMDLHLCCP_JKOGIMJNCBO_OFFSET UNITYSDK_OFFSET(0xBBD1160)
#define NHMMDLHLCCP_JLFHLJEGGIE_OFFSET UNITYSDK_OFFSET(0xBBD0950)
#define NHMMDLHLCCP_KGLIKPFIIFO_1_OFFSET UNITYSDK_OFFSET(0xBBD02C0)
#define NHMMDLHLCCP_KGLIKPFIIFO_OFFSET UNITYSDK_OFFSET(0xBBD0CA0)
#define NHMMDLHLCCP_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0xBBCFBD0)
#define NHMMDLHLCCP_MKAOKDHHIGL_OFFSET UNITYSDK_OFFSET(0xBBD0F30)
#define NHMMDLHLCCP_OBMOFHGPCNA_OFFSET UNITYSDK_OFFSET(0xBBD2250)
#define NHMMDLHLCCP_ODIPJDFOFDK_OFFSET UNITYSDK_OFFSET(0xBBD0AF0)
#define NHMMDLHLCCP_ODPNMANBFKN_OFFSET UNITYSDK_OFFSET(0xBBD27D0)
#define NHMMDLHLCCP_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBBD1500)
#define NHMMDLHLCCP_PPBLBACJILG_OFFSET UNITYSDK_OFFSET(0xBBD04F0)

inline static constexpr unsigned int NHMMDLHLCCP_TypeDefinitionIndex = 73782;

	class NHMMDLHLCCP : public ::PAOIIOIGCOJ
	{
	public:
		::System::Collections::Generic::Dictionary_2<::HPKACEPPPCA*, ::System::Int32>* LOCAPLHAKAH; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Transform*>* GKCDMJAOMHP; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::JCPHHMANKBM*>* ENANIFLNEPO; // 0x28
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::HPKACEPPPCA*>*>* DAJFELPBOGP; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* PEHPIFDHFNL; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* EMNAKHEHDPG; // 0x40
		::System::Collections::Generic::Dictionary_2<::KLEFGGIHGMI*, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*>* KJKIAFIIJJK; // 0x48
		::System::Collections::Generic::Dictionary_2<::HPKACEPPPCA*, ::System::Int32>* MHKHGLMNLAF; // 0x50
		::System::Single PGMIOKKLHIE; // 0x58
		::System::Void _ctor(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void LKINOKFJPCL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_LKINOKFJPCL_OFFSET))(this, a1);
		}

		::System::Void EHBAHFHJOOF(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::GameCore::DriftComponentData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::GameCore::DriftComponentData*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_EHBAHFHJOOF_OFFSET))(this, a1, a2);
		}

		::System::Void CMDBJFLEOGI(::KLEFGGIHGMI* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_CMDBJFLEOGI_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void PPBLBACJILG(::UnityEngine::Transform* a1, ::JCPHHMANKBM* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::JCPHHMANKBM*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_PPBLBACJILG_OFFSET))(a1, a2);
		}

		::System::Boolean FGCEKCPMFOI(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_FGCEKCPMFOI_OFFSET))(this, a1, a2);
		}

		static ::RPG::GameCore::DriftComponentData* JLFHLJEGGIE(::GEEOPFIMJEM a1, ::RPG::Client::SceneTransformAnim* a2)
		{
			return ((::RPG::GameCore::DriftComponentData*(*)(::GEEOPFIMJEM, ::RPG::Client::SceneTransformAnim*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_JLFHLJEGGIE_OFFSET))(a1, a2);
		}

		::System::Boolean ODIPJDFOFDK(::HPKACEPPPCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_ODIPJDFOFDK_OFFSET))(this, a1);
		}

		::System::Void KGLIKPFIIFO(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_KGLIKPFIIFO_OFFSET))(this, a1);
		}

		::System::Void KGLIKPFIIFO_1(::KLEFGGIHGMI* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_KGLIKPFIIFO_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MKAOKDHHIGL(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_MKAOKDHHIGL_OFFSET))(this, a1);
		}

		::System::Void BFFOCNIGILL(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_BFFOCNIGILL_OFFSET))(this, a1);
		}

		::System::Void JKOGIMJNCBO(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_JKOGIMJNCBO_OFFSET))(this, a1);
		}

		::System::Void FLLLGFDCGDB(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_FLLLGFDCGDB_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_PAGKOAEOLKA_OFFSET))(this);
		}

		static ::System::Void DNFGFHMNDEF(::System::Single a1, ::JCPHHMANKBM* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::System::Single, ::JCPHHMANKBM*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_DNFGFHMNDEF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FOKKJBFIHGI(::System::Single a1, ::JCPHHMANKBM* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::System::Single, ::JCPHHMANKBM*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_FOKKJBFIHGI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DBEOAACLIMD(::System::Single a1, ::JCPHHMANKBM* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::System::Single, ::JCPHHMANKBM*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_DBEOAACLIMD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OBMOFHGPCNA(::System::Single a1, ::JCPHHMANKBM* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::System::Single, ::JCPHHMANKBM*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_OBMOFHGPCNA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ODPNMANBFKN(::System::Single a1, ::JCPHHMANKBM* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::System::Single, ::JCPHHMANKBM*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_ODPNMANBFKN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ADGGFLLMEGB(::System::Single a1, ::JCPHHMANKBM* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::System::Single, ::JCPHHMANKBM*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_ADGGFLLMEGB_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 CCIEEBNABGF(::System::Single a1, ::System::Single a2, ::JCPHHMANKBM* a3, ::UnityEngine::Transform* a4)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single, ::JCPHHMANKBM*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NHMMDLHLCCP_CCIEEBNABGF_OFFSET))(a1, a2, a3, a4);
		}

	};
