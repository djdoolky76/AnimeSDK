#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/WaterWheelRotateStauts.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class WaterWheel; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Tuple_5; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define DDBHMHFPFJC_ACCCEKAMDBK_OFFSET UNITYSDK_OFFSET(0xE24FDC0)
#define DDBHMHFPFJC_CTOR_OFFSET UNITYSDK_OFFSET(0xE251D90)
#define DDBHMHFPFJC_DNNBOKEACJD_OFFSET UNITYSDK_OFFSET(0xE2515C0)
#define DDBHMHFPFJC_DOOPEBLLNCA_OFFSET UNITYSDK_OFFSET(0xE251900)
#define DDBHMHFPFJC_FNLCFDFKEMK_OFFSET UNITYSDK_OFFSET(0xE251A50)
#define DDBHMHFPFJC_GPHFFJINNOJ_OFFSET UNITYSDK_OFFSET(0xE251950)
#define DDBHMHFPFJC_JCMDNAEPJLN_OFFSET UNITYSDK_OFFSET(0xE250C80)
#define DDBHMHFPFJC_JJDFDCLEDDP_OFFSET UNITYSDK_OFFSET(0xE24FE50)
#define DDBHMHFPFJC_JMAJENEDLHA_OFFSET UNITYSDK_OFFSET(0xE250AC0)
#define DDBHMHFPFJC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE24FEF0)
#define DDBHMHFPFJC_LAPJCIBMPIH_OFFSET UNITYSDK_OFFSET(0xE251610)
#define DDBHMHFPFJC_MAMDDODKFGO_OFFSET UNITYSDK_OFFSET(0xE250300)
#define DDBHMHFPFJC_MGGFFDAELLO_OFFSET UNITYSDK_OFFSET(0xE250690)
#define DDBHMHFPFJC_NCHAFCEDIFF_OFFSET UNITYSDK_OFFSET(0xE2507A0)
#define DDBHMHFPFJC_NHPHEEACABI_OFFSET UNITYSDK_OFFSET(0xE250C30)
#define DDBHMHFPFJC_NNDJAJDJPCK_OFFSET UNITYSDK_OFFSET(0xE250370)
#define DDBHMHFPFJC_PAPOAOHJCJM_OFFSET UNITYSDK_OFFSET(0xE2500C0)
#define DDBHMHFPFJC_PFHLMKLGPOB_OFFSET UNITYSDK_OFFSET(0xE250820)
#define DDBHMHFPFJC_PIJMNADGBHN_OFFSET UNITYSDK_OFFSET(0xE250600)

inline static constexpr unsigned int DDBHMHFPFJC_TypeDefinitionIndex = 68811;

	class DDBHMHFPFJC : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* DBDHDKLKNON; // 0x18
		::System::Action* CIFOILLJFNF; // 0x20
		::RPG::Client::WaterWheel* PCPJHCMMONO; // 0x28
		::UnityEngine::Transform* PDGDCPLEPFC; // 0x30
		::UnityEngine::AnimationCurve* MHCKIGOEHEE; // 0x38
		::UnityEngine::AnimationCurve* CBEBGNOFBPG; // 0x40
		::System::Tuple_5<::System::Int32, ::System::Int32, ::System::Boolean, ::System::Action*, ::System::Single>* DMBHPECBAGD; // 0x48
		::System::Collections::Generic::List_1<::System::Single>* KHOODLICHPM; // 0x50
		::System::Single LMCBEIHGLDF; // 0x58
		::System::Single GIALPBGKLMB; // 0x5C
		::UnityEngine::Vector3 IKMAKJBOPKM; // 0x60
		::System::Boolean BIOAJMKDNCE; // 0x6C
		::System::Boolean DEDKKDFDDGI; // 0x6D
		::System::Byte _padding0[0x2];
		::System::Single FNGCGLNOLGM; // 0x70
		::System::Single BCGHNNBGMCM; // 0x74
		::RPG::Client::WaterWheelRotateStauts BNCNAEGEBCG; // 0x78
		::System::Single DKHHNGOLLPI; // 0x7C
		::System::Single CFLGENGHBBE; // 0x80
		::System::Single NPOCKEGCMJA; // 0x84
		::System::Single IMEJAFAFOMF; // 0x88
		::UnityEngine::Vector3 OFHEMBKMOOL; // 0x8C
		::System::Single KOKBOOHGHLH; // 0x98
		::System::Int32 DFLIBKCBMGN; // 0x9C
		::System::Single DGLGPLADDFB; // 0xA0
		::System::Single HNJNJAGCJIO; // 0xA4
		::System::Single KEGEEBMLAFH; // 0xA8
		::System::Int32 KLGEBLHOODJ; // 0xAC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_CTOR_OFFSET))(this);
		}

		::System::Void ACCCEKAMDBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_ACCCEKAMDBK_OFFSET))(this);
		}

		::System::Void JJDFDCLEDDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_JJDFDCLEDDP_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void PAPOAOHJCJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_PAPOAOHJCJM_OFFSET))(this);
		}

		::System::Void MAMDDODKFGO(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_MAMDDODKFGO_OFFSET))(this, a1);
		}

		::System::Void NNDJAJDJPCK(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Action* a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_NNDJAJDJPCK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void NCHAFCEDIFF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_NCHAFCEDIFF_OFFSET))(this, a1);
		}

		::System::Int32 PFHLMKLGPOB(::System::Int32 a1, ::System::Action* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_PFHLMKLGPOB_OFFSET))(this, a1, a2);
		}

		::System::Single JMAJENEDLHA(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_JMAJENEDLHA_OFFSET))(this, a1, a2);
		}

		::System::Void JCMDNAEPJLN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_JCMDNAEPJLN_OFFSET))(this, a1);
		}

		static ::System::Boolean GPHFFJINNOJ(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_GPHFFJINNOJ_OFFSET))(a1, a2, a3);
		}

		::System::Void LAPJCIBMPIH(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_LAPJCIBMPIH_OFFSET))(this, a1, a2);
		}

		::System::Void FNLCFDFKEMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_FNLCFDFKEMK_OFFSET))(this);
		}

		::System::Single DNNBOKEACJD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_DNNBOKEACJD_OFFSET))(this);
		}

		::System::Single MGGFFDAELLO(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_MGGFFDAELLO_OFFSET))(this, a1);
		}

		::System::Single DOOPEBLLNCA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_DOOPEBLLNCA_OFFSET))(this);
		}

		::System::Single PIJMNADGBHN(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_PIJMNADGBHN_OFFSET))(this, a1);
		}

		::System::Single NHPHEEACABI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBHMHFPFJC_NHPHEEACABI_OFFSET))(this);
		}

	};
