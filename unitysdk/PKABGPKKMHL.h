#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDMONJOAKHD.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APLEMBNFLAA;
class ENLBPLPOGMF;
class HPKACEPPPCA;
class JGPMFKDECMN;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
class OIDDJJLHGKO;
class PKABGPKKMHL_FPOIPMGLHBF;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace RPG::Client::OpenWorld { template <typename T> class CellStruct_1; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define PKABGPKKMHL_ADDIPNHAIFG_OFFSET UNITYSDK_OFFSET(0xC2A1DF0)
#define PKABGPKKMHL_APHBCNILECE_OFFSET UNITYSDK_OFFSET(0xC29ECB0)
#define PKABGPKKMHL_BGBPEMJCGLH_OFFSET UNITYSDK_OFFSET(0xC29F560)
#define PKABGPKKMHL_CCTOR_OFFSET UNITYSDK_OFFSET(0xC2A21E0)
#define PKABGPKKMHL_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0xC2A2030)
#define PKABGPKKMHL_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0xC2A1D30)
#define PKABGPKKMHL_CTOR_OFFSET UNITYSDK_OFFSET(0xC29D640)
#define PKABGPKKMHL_DABJHNNAOMK_OFFSET UNITYSDK_OFFSET(0xC29EB80)
#define PKABGPKKMHL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC29DA00)
#define PKABGPKKMHL_EBBDALJMBNL_1_OFFSET UNITYSDK_OFFSET(0xC29DD20)
#define PKABGPKKMHL_EBBDALJMBNL_OFFSET UNITYSDK_OFFSET(0xC29DC00)
#define PKABGPKKMHL_FNFGAAAMJOC_OFFSET UNITYSDK_OFFSET(0xC29F290)
#define PKABGPKKMHL_GPFLDHMJMMK_OFFSET UNITYSDK_OFFSET(0xC2A0F10)
#define PKABGPKKMHL_IIGEFJJHHPK_OFFSET UNITYSDK_OFFSET(0xC2A2140)
#define PKABGPKKMHL_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0xC2A1A90)
#define PKABGPKKMHL_NLFBLPMNCJF_OFFSET UNITYSDK_OFFSET(0xC29E440)
#define PKABGPKKMHL_OJGKFPAAFAG_OFFSET UNITYSDK_OFFSET(0xC2A06F0)
#define PKABGPKKMHL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC29FB60)
#define PKABGPKKMHL_PDJMBAKPFOL_OFFSET UNITYSDK_OFFSET(0xC2A0800)
#define PKABGPKKMHL_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0xC2A1C90)
#define PKABGPKKMHL_SOLVECALCULATESTREAMINGTASK_OFFSET UNITYSDK_OFFSET(0xC2A1130)
#define PKABGPKKMHL__BNEEDCHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0xC2A0FF0)
#define PKABGPKKMHL__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0xC2A15F0)

inline static constexpr unsigned int PKABGPKKMHL_TypeDefinitionIndex = 73851;

	class PKABGPKKMHL : public ::GDMONJOAKHD
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* KIHCPNIAIPO; // 0x170
		::JGPMFKDECMN* CMPEGHAGBDC; // 0x178
		::PKABGPKKMHL_FPOIPMGLHBF* JBFHLLICIFK; // 0x180
		::PKABGPKKMHL_FPOIPMGLHBF* ADBOANJGCCK; // 0x188
		::RPG::Client::OpenWorld::CellStruct_1<::RPG::Client::OpenWorld::StreamingItemData*>* HGDDMHIPHIB; // 0x190
		::PKABGPKKMHL_FPOIPMGLHBF* GKPGMBLHBCF; // 0x198
		::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>*>* ECICLILIDJJ; // 0x1A0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* KBLOKGOGPPK; // 0x1A8
		::System::Boolean FGBEDKCJMNB; // 0x1B0
		static ::RPG::Client::RPGProfilerMarker** StaticGet_JGKEEJCCBCO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "PKABGPKKMHL")->GetStaticField(0x6FEC0);
		}

		::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::LJFHKAJPFNE* a2, ::KLEFGGIHGMI* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::LJFHKAJPFNE*, ::KLEFGGIHGMI*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PKABGPKKMHL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKABGPKKMHL_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKABGPKKMHL_DISPOSE_OFFSET))(this);
		}

		::System::Void EBBDALJMBNL(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + PKABGPKKMHL_EBBDALJMBNL_OFFSET))(this, a1);
		}

		::System::Void EBBDALJMBNL_1(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PKABGPKKMHL_EBBDALJMBNL_1_OFFSET))(this, a1, a2);
		}

		::System::Single NLFBLPMNCJF(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PKABGPKKMHL_NLFBLPMNCJF_OFFSET))(this, a1, a2);
		}

		::System::Void DABJHNNAOMK(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + PKABGPKKMHL_DABJHNNAOMK_OFFSET))(this, a1, a2);
		}

		::System::Void APHBCNILECE(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + PKABGPKKMHL_APHBCNILECE_OFFSET))(this, a1);
		}

		::System::Boolean FNFGAAAMJOC(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + PKABGPKKMHL_FNFGAAAMJOC_OFFSET))(this, a1);
		}

		::System::Boolean BGBPEMJCGLH(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + PKABGPKKMHL_BGBPEMJCGLH_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKABGPKKMHL_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Int32 OJGKFPAAFAG(::APLEMBNFLAA* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::PVOID, ::APLEMBNFLAA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PKABGPKKMHL_OJGKFPAAFAG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 PDJMBAKPFOL(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::APLEMBNFLAA* a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::APLEMBNFLAA*, ::System::Boolean))((::PBYTE)hIl2Cpp + PKABGPKKMHL_PDJMBAKPFOL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GPFLDHMJMMK(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PKABGPKKMHL_GPFLDHMJMMK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SolveCalculateStreamingTask(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PKABGPKKMHL_SOLVECALCULATESTREAMINGTASK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _SolveInstanceLodCalc(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::HPKACEPPPCA* a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PKABGPKKMHL__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean LNGKNPJIOML(::ENLBPLPOGMF* a1, ::System::Boolean a2, ::OIDDJJLHGKO* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENLBPLPOGMF*, ::System::Boolean, ::OIDDJJLHGKO*))((::PBYTE)hIl2Cpp + PKABGPKKMHL_LNGKNPJIOML_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + PKABGPKKMHL_QUADTREEOP_OFFSET))(this, a1);
		}

		::System::Void CheckStreaming(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PKABGPKKMHL_CHECKSTREAMING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* ADDIPNHAIFG(::UnityEngine::Rect a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + PKABGPKKMHL_ADDIPNHAIFG_OFFSET))(this, a1);
		}

		::System::Boolean _bNeedCheckStreaming(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + PKABGPKKMHL__BNEEDCHECKSTREAMING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PKABGPKKMHL_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IIGEFJJHHPK(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + PKABGPKKMHL_IIGEFJJHHPK_OFFSET))(this, a1, a2, a3);
		}

	};
