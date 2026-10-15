#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMJAFIDKDKK.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ICOHAPENNHF_Triangle.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HNGIHOODNMB;
class MHHBDDMJOII;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define ICOHAPENNHF_AFKPNJPLKPF_OFFSET UNITYSDK_OFFSET(0x15E5FC40)
#define ICOHAPENNHF_BHADFNMAPJN_OFFSET UNITYSDK_OFFSET(0x15E61EE0)
#define ICOHAPENNHF_BKINLPDNOKD_OFFSET UNITYSDK_OFFSET(0x15E61D50)
#define ICOHAPENNHF_CTOR_OFFSET UNITYSDK_OFFSET(0x15E5D540)
#define ICOHAPENNHF_DGFFLHHAENC_OFFSET UNITYSDK_OFFSET(0x15E5EFD0)
#define ICOHAPENNHF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E5EAE0)
#define ICOHAPENNHF_DJMCIGPDCPL_OFFSET UNITYSDK_OFFSET(0x15E60210)
#define ICOHAPENNHF_EKCEFLPJOKF_OFFSET UNITYSDK_OFFSET(0x15E5F610)
#define ICOHAPENNHF_FCMKHIPNDPG_OFFSET UNITYSDK_OFFSET(0x15E5FC30)
#define ICOHAPENNHF_FJOCLMDBABC_OFFSET UNITYSDK_OFFSET(0x15E5EBC0)
#define ICOHAPENNHF_GET_INTERSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x15E5FBD0)
#define ICOHAPENNHF_GFKGDBEINDI_OFFSET UNITYSDK_OFFSET(0x15E61510)
#define ICOHAPENNHF_GPNGHALJHBI_OFFSET UNITYSDK_OFFSET(0x15E5FBE0)
#define ICOHAPENNHF_HPGBGGAGCFM_OFFSET UNITYSDK_OFFSET(0x15E5F190)
#define ICOHAPENNHF_IEBPBAJHJPJ_OFFSET UNITYSDK_OFFSET(0x15E5EC00)
#define ICOHAPENNHF_IJNFPNLFFJL_OFFSET UNITYSDK_OFFSET(0x15E603D0)
#define ICOHAPENNHF_LEDNOCODFFK_OFFSET UNITYSDK_OFFSET(0x15E5E9F0)
#define ICOHAPENNHF_MCFAOEFPICH_OFFSET UNITYSDK_OFFSET(0x15E62030)
#define ICOHAPENNHF_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x15E5FB90)
#define ICOHAPENNHF_NIEGAPIHJMP_OFFSET UNITYSDK_OFFSET(0x15E5F0E0)
#define ICOHAPENNHF_NJKHJOBHPKN_OFFSET UNITYSDK_OFFSET(0x15E61460)
#define ICOHAPENNHF_OCGODJJLOCE_OFFSET UNITYSDK_OFFSET(0x15E60660)
#define ICOHAPENNHF_OCOEOKLDKKP_OFFSET UNITYSDK_OFFSET(0x15E61190)
#define ICOHAPENNHF_OKEDPEOFBGG_OFFSET UNITYSDK_OFFSET(0x15E612F0)
#define ICOHAPENNHF_POGOCDOLLIO_OFFSET UNITYSDK_OFFSET(0x15E61BB0)

inline static constexpr unsigned int ICOHAPENNHF_TypeDefinitionIndex = 69326;

	class ICOHAPENNHF : public ::System::Object
	{
	public:
		::MHHBDDMJOII* LGEGKIKIPOB; // 0x10
		::RPG::Client::TwoKeyDictionary_3<::JOGBIBJLPJB, ::JOGBIBJLPJB, ::HNGIHOODNMB*>* JMMGEMMJBPJ; // 0x18
		::Il2CppArray<::System::Object*>* HGMEDGBODGE; // 0x20
		::RPG::GameCore::LevelPedestrianV2IntersectionInfo* PDOOAAGJNPF; // 0x28
		::UnityEngine::GameObject* PNCHNENFMPK; // 0x30
		::IMJAFIDKDKK DICDJJOJKGF; // 0x38
		::System::Int32 _IntersectionIndex_k__BackingField; // 0x78
		::System::Void _ctor(::MHHBDDMJOII* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MHHBDDMJOII*, ::RPG::GameCore::LevelPedestrianV2IntersectionInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ICOHAPENNHF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOHAPENNHF_DISPOSE_OFFSET))(this);
		}

		::System::Void FJOCLMDBABC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOHAPENNHF_FJOCLMDBABC_OFFSET))(this);
		}

		::System::Void IEBPBAJHJPJ(::JOGBIBJLPJB a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + ICOHAPENNHF_IEBPBAJHJPJ_OFFSET))(this, a1);
		}

		::System::Boolean DGFFLHHAENC(::JOGBIBJLPJB a1, ::JOGBIBJLPJB a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOGBIBJLPJB, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + ICOHAPENNHF_DGFFLHHAENC_OFFSET))(this, a1, a2);
		}

		::System::Boolean NIEGAPIHJMP(::JOGBIBJLPJB a1, ::JOGBIBJLPJB a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOGBIBJLPJB, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + ICOHAPENNHF_NIEGAPIHJMP_OFFSET))(this, a1, a2);
		}

		::JOGBIBJLPJB HPGBGGAGCFM(::JOGBIBJLPJB a1)
		{
			return ((::JOGBIBJLPJB(*)(::PVOID, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + ICOHAPENNHF_HPGBGGAGCFM_OFFSET))(this, a1);
		}

		::System::Void EKCEFLPJOKF(::JOGBIBJLPJB a1, ::System::Collections::Generic::IList_1<::JOGBIBJLPJB>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::JOGBIBJLPJB, ::System::Collections::Generic::IList_1<::JOGBIBJLPJB>*, ::System::Int32))((::PBYTE)hIl2Cpp + ICOHAPENNHF_EKCEFLPJOKF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOHAPENNHF_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Int32 get_IntersectionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOHAPENNHF_GET_INTERSECTIONINDEX_OFFSET))(this);
		}

		::System::Int32 GPNGHALJHBI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOHAPENNHF_GPNGHALJHBI_OFFSET))(this);
		}

		::UnityEngine::Vector3 LEDNOCODFFK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOHAPENNHF_LEDNOCODFFK_OFFSET))(this);
		}

		::RPG::Client::EPedestrianV2MotionState FCMKHIPNDPG()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOHAPENNHF_FCMKHIPNDPG_OFFSET))(this);
		}

		static ::System::Boolean AFKPNJPLKPF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ICOHAPENNHF_AFKPNJPLKPF_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Vector3 DJMCIGPDCPL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ICOHAPENNHF_DJMCIGPDCPL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IJNFPNLFFJL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Double a7)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Double))((::PBYTE)hIl2Cpp + ICOHAPENNHF_IJNFPNLFFJL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean OCGODJJLOCE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Double a7)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Double))((::PBYTE)hIl2Cpp + ICOHAPENNHF_OCGODJJLOCE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean OCOEOKLDKKP(::ICOHAPENNHF_Triangle a1)
		{
			return ((::System::Boolean(*)(::ICOHAPENNHF_Triangle))((::PBYTE)hIl2Cpp + ICOHAPENNHF_OCOEOKLDKKP_OFFSET))(a1);
		}

		static ::System::Boolean OKEDPEOFBGG(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + ICOHAPENNHF_OKEDPEOFBGG_OFFSET))(a1);
		}

		static ::ICOHAPENNHF_Triangle NJKHJOBHPKN(::ICOHAPENNHF_Triangle a1, ::System::Boolean a2)
		{
			return ((::ICOHAPENNHF_Triangle(*)(::ICOHAPENNHF_Triangle, ::System::Boolean))((::PBYTE)hIl2Cpp + ICOHAPENNHF_NJKHJOBHPKN_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>* GFKGDBEINDI(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + ICOHAPENNHF_GFKGDBEINDI_OFFSET))(a1, a2);
		}

		static ::System::Void BHADFNMAPJN(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + ICOHAPENNHF_BHADFNMAPJN_OFFSET))(a1);
		}

		static ::System::Boolean POGOCDOLLIO(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ICOHAPENNHF_POGOCDOLLIO_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect MCFAOEFPICH(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::UnityEngine::Rect(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + ICOHAPENNHF_MCFAOEFPICH_OFFSET))(a1);
		}

		static ::System::Boolean BKINLPDNOKD(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + ICOHAPENNHF_BKINLPDNOKD_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

	};
