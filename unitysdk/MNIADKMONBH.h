#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ICOHAPENNHF;
class LAJCPEFEOPN;
class MHHBDDMJOII;
namespace RPG::GameCore { class LevelPedestrianV2RoadInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MNIADKMONBH_ANHHKHBIFKE_OFFSET UNITYSDK_OFFSET(0xBA0A9F0)
#define MNIADKMONBH_AODAMNILNOO_OFFSET UNITYSDK_OFFSET(0xBA0AB80)
#define MNIADKMONBH_APJBKEEPAND_OFFSET UNITYSDK_OFFSET(0xBA0C660)
#define MNIADKMONBH_BDCKBBILIEB_OFFSET UNITYSDK_OFFSET(0xBA0AE60)
#define MNIADKMONBH_BHOJKJPAGOB_OFFSET UNITYSDK_OFFSET(0xBA0A960)
#define MNIADKMONBH_BJIKKBBDLPG_OFFSET UNITYSDK_OFFSET(0xBA0A5B0)
#define MNIADKMONBH_CICDLCFDPEL_OFFSET UNITYSDK_OFFSET(0xBA0A750)
#define MNIADKMONBH_CLLJAGMGABN_OFFSET UNITYSDK_OFFSET(0xBA0BD30)
#define MNIADKMONBH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA099A0)
#define MNIADKMONBH_DCHIANKGOKF_OFFSET UNITYSDK_OFFSET(0xBA0AA80)
#define MNIADKMONBH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA0A530)
#define MNIADKMONBH_DNLKCCLOEAF_OFFSET UNITYSDK_OFFSET(0xBA0AAF0)
#define MNIADKMONBH_EEGOJDNKOOP_OFFSET UNITYSDK_OFFSET(0xBA0C120)
#define MNIADKMONBH_EGMNDPJDDHI_OFFSET UNITYSDK_OFFSET(0xBA0C5E0)
#define MNIADKMONBH_FNPKJECOMON_OFFSET UNITYSDK_OFFSET(0xBA0B4E0)
#define MNIADKMONBH_GET_ENDCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0xBA0C700)
#define MNIADKMONBH_GET_HASINVISIBLESEGMENT_OFFSET UNITYSDK_OFFSET(0xBA0C8A0)
#define MNIADKMONBH_GET_PEDESTRIANMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xBA0C730)
#define MNIADKMONBH_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0xBA0C5B0)
#define MNIADKMONBH_GET_POINTENDINDEX_OFFSET UNITYSDK_OFFSET(0xBA0C5D0)
#define MNIADKMONBH_GET_POINTSTARTINDEX_OFFSET UNITYSDK_OFFSET(0xBA0C5C0)
#define MNIADKMONBH_GET_ROADINDEX_OFFSET UNITYSDK_OFFSET(0xBA0C5A0)
#define MNIADKMONBH_GET_STARTCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0xBA0C6E0)
#define MNIADKMONBH_GMCOPDBFDDO_OFFSET UNITYSDK_OFFSET(0xBA0B470)
#define MNIADKMONBH_IGJEKNLHGHF_OFFSET UNITYSDK_OFFSET(0xBA0C7A0)
#define MNIADKMONBH_KPFJOOMJBOO_OFFSET UNITYSDK_OFFSET(0xBA0B280)
#define MNIADKMONBH_LLMAJLEMIDM_OFFSET UNITYSDK_OFFSET(0xBA0B3E0)
#define MNIADKMONBH_LNBCDOBGKKA_OFFSET UNITYSDK_OFFSET(0xBA0AD80)
#define MNIADKMONBH_LNLFOJLNKCE_OFFSET UNITYSDK_OFFSET(0xBA0A7B0)
#define MNIADKMONBH_MCJAGKFEBLF_OFFSET UNITYSDK_OFFSET(0xBA0C750)
#define MNIADKMONBH_MGJCHIFGPOJ_OFFSET UNITYSDK_OFFSET(0xBA0B9D0)
#define MNIADKMONBH_MIADLDHDGBG_OFFSET UNITYSDK_OFFSET(0xBA0C540)
#define MNIADKMONBH_MKIHFFBBPDE_OFFSET UNITYSDK_OFFSET(0xBA0A8D0)
#define MNIADKMONBH_MLIBMAADNFC_OFFSET UNITYSDK_OFFSET(0xBA0B710)
#define MNIADKMONBH_NFOCMIGDHJA_OFFSET UNITYSDK_OFFSET(0xBA0C4E0)
#define MNIADKMONBH_OJJBEOHNFCP_OFFSET UNITYSDK_OFFSET(0xBA0B8B0)
#define MNIADKMONBH_OKMDAGAADBA_OFFSET UNITYSDK_OFFSET(0xBA0A840)
#define MNIADKMONBH_OPEDLPPLAGG_OFFSET UNITYSDK_OFFSET(0xBA0AC70)
#define MNIADKMONBH_PANLKGIFJEG_OFFSET UNITYSDK_OFFSET(0xBA0B2E0)
#define MNIADKMONBH_PGFIMHMFFIG_OFFSET UNITYSDK_OFFSET(0xBA0BCE0)
#define MNIADKMONBH_PLOGFHDCFJB_OFFSET UNITYSDK_OFFSET(0xBA0C720)
#define MNIADKMONBH_SET_ENDCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0xBA0C710)
#define MNIADKMONBH_SET_PEDESTRIANMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xBA0C740)
#define MNIADKMONBH_SET_STARTCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0xBA0C6F0)

inline static constexpr unsigned int MNIADKMONBH_TypeDefinitionIndex = 69304;

	class MNIADKMONBH : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelPedestrianV2RoadInfo* CEDDIHHEGJA; // 0x10
		::Il2CppArray<::System::Object*>* NCJPIAILBAO; // 0x18
		::System::Collections::Generic::HashSet_1<::LAJCPEFEOPN*>* ECBHMEGFNPK; // 0x20
		::UnityEngine::GameObject* LEHHGHAONFO; // 0x28
		::MHHBDDMJOII* LGEGKIKIPOB; // 0x30
		::ICOHAPENNHF* _StartConnectIntersection_k__BackingField; // 0x38
		::ICOHAPENNHF* _EndConnectIntersection_k__BackingField; // 0x40
		::System::Boolean _HasInvisibleSegment_k__BackingField; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 _PointStartIndex_k__BackingField; // 0x4C
		::System::Int32 _PedestrianMaxCount_k__BackingField; // 0x50
		::System::Int32 _PointCount_k__BackingField; // 0x54
		::System::Int32 _PointEndIndex_k__BackingField; // 0x58
		::System::Int32 _RoadIndex_k__BackingField; // 0x5C
		// static const ::System::Object BGDJCHBKLMC; // 0x0
		// static const ::System::Object DEGMBDNDNAI; // 0x0
		::System::Void _ctor(::MHHBDDMJOII* a1, ::RPG::GameCore::LevelPedestrianV2RoadInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MHHBDDMJOII*, ::RPG::GameCore::LevelPedestrianV2RoadInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MNIADKMONBH_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIADKMONBH_DISPOSE_OFFSET))(this);
		}

		::System::Single BJIKKBBDLPG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIADKMONBH_BJIKKBBDLPG_OFFSET))(this);
		}

		::System::Boolean CICDLCFDPEL(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNIADKMONBH_CICDLCFDPEL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LNLFOJLNKCE(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNIADKMONBH_LNLFOJLNKCE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 OKMDAGAADBA(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNIADKMONBH_OKMDAGAADBA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 MKIHFFBBPDE(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNIADKMONBH_MKIHFFBBPDE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BHOJKJPAGOB(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNIADKMONBH_BHOJKJPAGOB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ANHHKHBIFKE(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNIADKMONBH_ANHHKHBIFKE_OFFSET))(this, a1);
		}

		::System::Single DCHIANKGOKF(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNIADKMONBH_DCHIANKGOKF_OFFSET))(this, a1);
		}

		::System::Single DNLKCCLOEAF(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNIADKMONBH_DNLKCCLOEAF_OFFSET))(this, a1);
		}

		::System::Single AODAMNILNOO(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNIADKMONBH_AODAMNILNOO_OFFSET))(this, a1);
		}

		::System::Single OPEDLPPLAGG(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MNIADKMONBH_OPEDLPPLAGG_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 LNBCDOBGKKA(::System::Int32 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MNIADKMONBH_LNBCDOBGKKA_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 BDCKBBILIEB(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MNIADKMONBH_BDCKBBILIEB_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Quaternion PANLKGIFJEG(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MNIADKMONBH_PANLKGIFJEG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LLMAJLEMIDM(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + MNIADKMONBH_LLMAJLEMIDM_OFFSET))(this, a1);
		}

		::System::Void GMCOPDBFDDO(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + MNIADKMONBH_GMCOPDBFDDO_OFFSET))(this, a1);
		}

		::System::Void FNPKJECOMON(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MNIADKMONBH_FNPKJECOMON_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 MLIBMAADNFC(::JOGBIBJLPJB a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::JOGBIBJLPJB, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MNIADKMONBH_MLIBMAADNFC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 OJJBEOHNFCP(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MNIADKMONBH_OJJBEOHNFCP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 MGJCHIFGPOJ(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MNIADKMONBH_MGJCHIFGPOJ_OFFSET))(this, a1, a2);
		}

		::System::Int32 PGFIMHMFFIG(::System::Boolean a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNIADKMONBH_PGFIMHMFFIG_OFFSET))(this, a1);
		}

		::System::Int32 CLLJAGMGABN(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MNIADKMONBH_CLLJAGMGABN_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 EEGOJDNKOOP(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MNIADKMONBH_EEGOJDNKOOP_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 NFOCMIGDHJA(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MNIADKMONBH_NFOCMIGDHJA_OFFSET))(this, a1, a2);
		}

		::System::Int32 KPFJOOMJBOO(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MNIADKMONBH_KPFJOOMJBOO_OFFSET))(this, a1, a2);
		}

		::ICOHAPENNHF* MIADLDHDGBG(::System::Boolean a1)
		{
			return ((::ICOHAPENNHF*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNIADKMONBH_MIADLDHDGBG_OFFSET))(this, a1);
		}

		::System::Int32 get_RoadIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIADKMONBH_GET_ROADINDEX_OFFSET))(this);
		}

		::System::Int32 get_PointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIADKMONBH_GET_POINTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_PointStartIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIADKMONBH_GET_POINTSTARTINDEX_OFFSET))(this);
		}

		::System::Int32 get_PointEndIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIADKMONBH_GET_POINTENDINDEX_OFFSET))(this);
		}

		::UnityEngine::Vector3 EGMNDPJDDHI()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIADKMONBH_EGMNDPJDDHI_OFFSET))(this);
		}

		::UnityEngine::Vector3 APJBKEEPAND()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIADKMONBH_APJBKEEPAND_OFFSET))(this);
		}

		::ICOHAPENNHF* get_StartConnectIntersection()
		{
			return ((::ICOHAPENNHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIADKMONBH_GET_STARTCONNECTINTERSECTION_OFFSET))(this);
		}

		::System::Void set_StartConnectIntersection(::ICOHAPENNHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICOHAPENNHF*))((::PBYTE)hIl2Cpp + MNIADKMONBH_SET_STARTCONNECTINTERSECTION_OFFSET))(this, a1);
		}

		::ICOHAPENNHF* get_EndConnectIntersection()
		{
			return ((::ICOHAPENNHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIADKMONBH_GET_ENDCONNECTINTERSECTION_OFFSET))(this);
		}

		::System::Void set_EndConnectIntersection(::ICOHAPENNHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICOHAPENNHF*))((::PBYTE)hIl2Cpp + MNIADKMONBH_SET_ENDCONNECTINTERSECTION_OFFSET))(this, a1);
		}

		::MHHBDDMJOII* PLOGFHDCFJB()
		{
			return ((::MHHBDDMJOII*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIADKMONBH_PLOGFHDCFJB_OFFSET))(this);
		}

		::System::Int32 get_PedestrianMaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIADKMONBH_GET_PEDESTRIANMAXCOUNT_OFFSET))(this);
		}

		::System::Void set_PedestrianMaxCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNIADKMONBH_SET_PEDESTRIANMAXCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 MCJAGKFEBLF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIADKMONBH_MCJAGKFEBLF_OFFSET))(this);
		}

		::System::Single IGJEKNLHGHF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIADKMONBH_IGJEKNLHGHF_OFFSET))(this);
		}

		::System::Boolean get_HasInvisibleSegment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIADKMONBH_GET_HASINVISIBLESEGMENT_OFFSET))(this);
		}

	};
