#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDMONJOAKHD.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APLEMBNFLAA;
class ENLBPLPOGMF;
class HPKACEPPPCA;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
class MDGMEFEJHPL;
class OIDDJJLHGKO;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define GFHHOMONMKN_AGEIDNHECPA_OFFSET UNITYSDK_OFFSET(0x159ECA90)
#define GFHHOMONMKN_BGBPEMJCGLH_OFFSET UNITYSDK_OFFSET(0x159ED960)
#define GFHHOMONMKN_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x159EDFC0)
#define GFHHOMONMKN_CIJEHJFDGLO_OFFSET UNITYSDK_OFFSET(0x159EE1A0)
#define GFHHOMONMKN_CTOR_OFFSET UNITYSDK_OFFSET(0x159EC080)
#define GFHHOMONMKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159EC230)
#define GFHHOMONMKN_EIGBNOPMBGL_OFFSET UNITYSDK_OFFSET(0x159ED610)
#define GFHHOMONMKN_EJNDPCPFMBD_OFFSET UNITYSDK_OFFSET(0x159ECE90)
#define GFHHOMONMKN_FNFGAAAMJOC_OFFSET UNITYSDK_OFFSET(0x159EC700)
#define GFHHOMONMKN_GEKPBHICMHA_OFFSET UNITYSDK_OFFSET(0x159ED220)
#define GFHHOMONMKN_GPFLDHMJMMK_OFFSET UNITYSDK_OFFSET(0x159ED170)
#define GFHHOMONMKN_HENGFENIMHC_OFFSET UNITYSDK_OFFSET(0x159ECDD0)
#define GFHHOMONMKN_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x159EDE50)
#define GFHHOMONMKN_KEBEIGGJIPA_OFFSET UNITYSDK_OFFSET(0x159EDC90)
#define GFHHOMONMKN_KMDFOAPFHCD_OFFSET UNITYSDK_OFFSET(0x159EC340)
#define GFHHOMONMKN_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0x159EE2C0)
#define GFHHOMONMKN_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0x159ECEE0)
#define GFHHOMONMKN_NDGEHOADKLA_OFFSET UNITYSDK_OFFSET(0x159EE5E0)
#define GFHHOMONMKN_NMGHEIGJAJA_OFFSET UNITYSDK_OFFSET(0x159EE5D0)
#define GFHHOMONMKN_OBPKAIIPPOJ_OFFSET UNITYSDK_OFFSET(0x159ECB70)
#define GFHHOMONMKN_OCELGEGCHLH_OFFSET UNITYSDK_OFFSET(0x159ED7E0)
#define GFHHOMONMKN_OJGKFPAAFAG_OFFSET UNITYSDK_OFFSET(0x159ED850)
#define GFHHOMONMKN_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0x159ED790)
#define GFHHOMONMKN__BNEEDCHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x159EE080)
#define GFHHOMONMKN__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x159ED3C0)

inline static constexpr unsigned int GFHHOMONMKN_TypeDefinitionIndex = 73846;

	class GFHHOMONMKN : public ::GDMONJOAKHD
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* LKLMJDAKLJI; // 0x170
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>* LGGKMIELPIH; // 0x178
		::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::LJFHKAJPFNE* a2, ::KLEFGGIHGMI* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::LJFHKAJPFNE*, ::KLEFGGIHGMI*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GFHHOMONMKN_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFHHOMONMKN_DISPOSE_OFFSET))(this);
		}

		::System::Void KMDFOAPFHCD(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GFHHOMONMKN_KMDFOAPFHCD_OFFSET))(this, a1);
		}

		::System::Boolean FNFGAAAMJOC(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GFHHOMONMKN_FNFGAAAMJOC_OFFSET))(this, a1);
		}

		::System::Void AGEIDNHECPA(::HPKACEPPPCA* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + GFHHOMONMKN_AGEIDNHECPA_OFFSET))(this, a1, a2);
		}

		::System::Void OBPKAIIPPOJ(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GFHHOMONMKN_OBPKAIIPPOJ_OFFSET))(this, a1);
		}

		::System::Void HENGFENIMHC(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GFHHOMONMKN_HENGFENIMHC_OFFSET))(this, a1);
		}

		::System::Void EJNDPCPFMBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFHHOMONMKN_EJNDPCPFMBD_OFFSET))(this);
		}

		::System::Boolean LNGKNPJIOML(::ENLBPLPOGMF* a1, ::System::Boolean a2, ::OIDDJJLHGKO* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENLBPLPOGMF*, ::System::Boolean, ::OIDDJJLHGKO*))((::PBYTE)hIl2Cpp + GFHHOMONMKN_LNGKNPJIOML_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GPFLDHMJMMK(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + GFHHOMONMKN_GPFLDHMJMMK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GEKPBHICMHA(::APLEMBNFLAA* a1, ::System::Boolean a2, ::System::Single a3, ::OIDDJJLHGKO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::OIDDJJLHGKO*))((::PBYTE)hIl2Cpp + GFHHOMONMKN_GEKPBHICMHA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SolveInstanceLodCalc(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::HPKACEPPPCA* a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GFHHOMONMKN__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean EIGBNOPMBGL(::HPKACEPPPCA* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKACEPPPCA*, ::System::Int32))((::PBYTE)hIl2Cpp + GFHHOMONMKN_EIGBNOPMBGL_OFFSET))(this, a1, a2);
		}

		::System::Void QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + GFHHOMONMKN_QUADTREEOP_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* OCELGEGCHLH()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFHHOMONMKN_OCELGEGCHLH_OFFSET))(this);
		}

		::System::Int32 OJGKFPAAFAG(::APLEMBNFLAA* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::PVOID, ::APLEMBNFLAA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GFHHOMONMKN_OJGKFPAAFAG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean BGBPEMJCGLH(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + GFHHOMONMKN_BGBPEMJCGLH_OFFSET))(this, a1, a2);
		}

		::System::Boolean InActiveInstance(::HPKACEPPPCA* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKACEPPPCA*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GFHHOMONMKN_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CheckStreaming(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GFHHOMONMKN_CHECKSTREAMING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _bNeedCheckStreaming(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + GFHHOMONMKN__BNEEDCHECKSTREAMING_OFFSET))(this, a1, a2, a3);
		}

		::MDGMEFEJHPL* KEBEIGGJIPA(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::MDGMEFEJHPL*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GFHHOMONMKN_KEBEIGGJIPA_OFFSET))(this, a1);
		}

		::System::Void CIJEHJFDGLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFHHOMONMKN_CIJEHJFDGLO_OFFSET))(this);
		}

		::System::Void LKINOKFJPCL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFHHOMONMKN_LKINOKFJPCL_OFFSET))(this, a1);
		}

		::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>* NMGHEIGJAJA()
		{
			return ((::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFHHOMONMKN_NMGHEIGJAJA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>* NDGEHOADKLA()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFHHOMONMKN_NDGEHOADKLA_OFFSET))(this);
		}

	};
