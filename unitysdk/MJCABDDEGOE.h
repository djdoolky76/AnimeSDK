#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJCABDDEGOE_Direction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BNLKJLFCLOI;
class FFHBEGEGBJM;
class INAOBHBBMLA;
class MJCABDDEGOE;
class MJCABDDEGOE_ECLGEDENJDJ;
class MJCABDDEGOE_KCIGIFCDEBI;
class PCCJOIJACIJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJCABDDEGOE_AMFPCDAOBLB_OFFSET UNITYSDK_OFFSET(0x1A3A1400)
#define MJCABDDEGOE_BIGPENMGPNP_OFFSET UNITYSDK_OFFSET(0x1A3A0350)
#define MJCABDDEGOE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1A39F0E0)
#define MJCABDDEGOE_CLBFFJIJPJJ_OFFSET UNITYSDK_OFFSET(0x1A3A2730)
#define MJCABDDEGOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A39F160)
#define MJCABDDEGOE_DPHPFJAICPI_OFFSET UNITYSDK_OFFSET(0x1A39FB20)
#define MJCABDDEGOE_EDIEHCFLFLE_OFFSET UNITYSDK_OFFSET(0x1A3A1C80)
#define MJCABDDEGOE_EMDHOKJCKPK_OFFSET UNITYSDK_OFFSET(0x1A3A1160)
#define MJCABDDEGOE_EOKPGKPEBGO_OFFSET UNITYSDK_OFFSET(0x1A3A0A90)
#define MJCABDDEGOE_FIIPELDGKOO_OFFSET UNITYSDK_OFFSET(0x1A3A1200)
#define MJCABDDEGOE_HBDNLDINMHI_OFFSET UNITYSDK_OFFSET(0x1A3A0110)
#define MJCABDDEGOE_IAJFIAEELMP_OFFSET UNITYSDK_OFFSET(0x1A3A2590)
#define MJCABDDEGOE_JCPMFFIPHAB_OFFSET UNITYSDK_OFFSET(0x1A3A0040)
#define MJCABDDEGOE_JLOJBCMKGJP_OFFSET UNITYSDK_OFFSET(0x1A3A3230)
#define MJCABDDEGOE_JOGLBJHPONA_OFFSET UNITYSDK_OFFSET(0x1A3A2FD0)
#define MJCABDDEGOE_KIPJJADBNAE_OFFSET UNITYSDK_OFFSET(0x1A39F320)
#define MJCABDDEGOE_KNFBFJONDDJ_OFFSET UNITYSDK_OFFSET(0x1A39FA40)
#define MJCABDDEGOE_MPELKPAEEIB_OFFSET UNITYSDK_OFFSET(0x1A39F3C0)
#define MJCABDDEGOE_OCCPDDJMOED_OFFSET UNITYSDK_OFFSET(0x1A39F370)
#define MJCABDDEGOE_ODBFGCABKEJ_OFFSET UNITYSDK_OFFSET(0x1A39F250)
#define MJCABDDEGOE_OFGAOAMIIDA_OFFSET UNITYSDK_OFFSET(0x1A39F410)
#define MJCABDDEGOE_OKMDIEBCLBG_OFFSET UNITYSDK_OFFSET(0x1A3A0260)
#define MJCABDDEGOE_PFCAKGNPNMF_OFFSET UNITYSDK_OFFSET(0x1A39F640)
#define MJCABDDEGOE_PGOMOIBANED_OFFSET UNITYSDK_OFFSET(0x1A3A0830)
#define MJCABDDEGOE_PKLLMBIKJAA_OFFSET UNITYSDK_OFFSET(0x1A39F740)

inline static constexpr unsigned int MJCABDDEGOE_TypeDefinitionIndex = 63769;

	class MJCABDDEGOE : public ::System::Object
	{
	public:
		::FFHBEGEGBJM* OOOLIIKDANG; // 0x10
		::MJCABDDEGOE_KCIGIFCDEBI* DHMNJLPJMLM; // 0x18
		::INAOBHBBMLA* MIPINHPEIIB; // 0x20
		::PCCJOIJACIJ* KNAGCKOGGPB; // 0x28
		::BNLKJLFCLOI* PJBGKDHJBDA; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* ALNDALJBGLB; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* GKAFNOINMPE; // 0x40
		::System::Boolean AHLPMMAMHHO; // 0x48
		// static const ::System::Object NDIEGAHEFKF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCABDDEGOE_CTOR_OFFSET))(this);
		}

		static ::MJCABDDEGOE* BPLPBPMEODA()
		{
			return ((::MJCABDDEGOE*(*)())((::PBYTE)hIl2Cpp + MJCABDDEGOE_BPLPBPMEODA_OFFSET))();
		}

		::System::Void ODBFGCABKEJ(::BNLKJLFCLOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*))((::PBYTE)hIl2Cpp + MJCABDDEGOE_ODBFGCABKEJ_OFFSET))(this, a1);
		}

		::System::Void KIPJJADBNAE(::FFHBEGEGBJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFHBEGEGBJM*))((::PBYTE)hIl2Cpp + MJCABDDEGOE_KIPJJADBNAE_OFFSET))(this, a1);
		}

		::System::Void OCCPDDJMOED(::INAOBHBBMLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INAOBHBBMLA*))((::PBYTE)hIl2Cpp + MJCABDDEGOE_OCCPDDJMOED_OFFSET))(this, a1);
		}

		::System::Void MPELKPAEEIB(::PCCJOIJACIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCCJOIJACIJ*))((::PBYTE)hIl2Cpp + MJCABDDEGOE_MPELKPAEEIB_OFFSET))(this, a1);
		}

		::System::Void OFGAOAMIIDA(::UnityEngine::Vector3 a1, ::MJCABDDEGOE_ECLGEDENJDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MJCABDDEGOE_ECLGEDENJDJ*))((::PBYTE)hIl2Cpp + MJCABDDEGOE_OFGAOAMIIDA_OFFSET))(this, a1, a2);
		}

		::System::Void PKLLMBIKJAA(::UnityEngine::Vector2 a1, ::MJCABDDEGOE_ECLGEDENJDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::MJCABDDEGOE_ECLGEDENJDJ*))((::PBYTE)hIl2Cpp + MJCABDDEGOE_PKLLMBIKJAA_OFFSET))(this, a1, a2);
		}

		::System::Void DPHPFJAICPI(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2 a2, ::MJCABDDEGOE_ECLGEDENJDJ* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2, ::MJCABDDEGOE_ECLGEDENJDJ*))((::PBYTE)hIl2Cpp + MJCABDDEGOE_DPHPFJAICPI_OFFSET))(this, a1, a2, a3);
		}

		::MJCABDDEGOE_Direction BIGPENMGPNP(::UnityEngine::Vector2 a1, ::System::Boolean a2, ::PCCJOIJACIJ* a3)
		{
			return ((::MJCABDDEGOE_Direction(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean, ::PCCJOIJACIJ*))((::PBYTE)hIl2Cpp + MJCABDDEGOE_BIGPENMGPNP_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 HBDNLDINMHI(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MJCABDDEGOE_HBDNLDINMHI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int FIIPELDGKOO(::MJCABDDEGOE_Direction a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::MJCABDDEGOE_Direction, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + MJCABDDEGOE_FIIPELDGKOO_OFFSET))(this, a1, a2);
		}

		::System::Boolean PGOMOIBANED()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCABDDEGOE_PGOMOIBANED_OFFSET))(this);
		}

		::UnityEngine::Vector2Int EOKPGKPEBGO()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCABDDEGOE_EOKPGKPEBGO_OFFSET))(this);
		}

		::UnityEngine::Vector2Int EMDHOKJCKPK(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MJCABDDEGOE_EMDHOKJCKPK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* IAJFIAEELMP(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + MJCABDDEGOE_IAJFIAEELMP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* EDIEHCFLFLE(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + MJCABDDEGOE_EDIEHCFLFLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* JCPMFFIPHAB(::UnityEngine::Vector2Int a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + MJCABDDEGOE_JCPMFFIPHAB_OFFSET))(this, a1, a2);
		}

		::System::Void PFCAKGNPNMF(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::MJCABDDEGOE_ECLGEDENJDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::MJCABDDEGOE_ECLGEDENJDJ*))((::PBYTE)hIl2Cpp + MJCABDDEGOE_PFCAKGNPNMF_OFFSET))(this, a1, a2);
		}

		::System::Boolean CLBFFJIJPJJ(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::MJCABDDEGOE_ECLGEDENJDJ* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::MJCABDDEGOE_ECLGEDENJDJ*))((::PBYTE)hIl2Cpp + MJCABDDEGOE_CLBFFJIJPJJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean JOGLBJHPONA(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::MJCABDDEGOE_ECLGEDENJDJ* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::MJCABDDEGOE_ECLGEDENJDJ*))((::PBYTE)hIl2Cpp + MJCABDDEGOE_JOGLBJHPONA_OFFSET))(this, a1, a2);
		}

		::System::Boolean JLOJBCMKGJP(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::MJCABDDEGOE_ECLGEDENJDJ* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::MJCABDDEGOE_ECLGEDENJDJ*))((::PBYTE)hIl2Cpp + MJCABDDEGOE_JLOJBCMKGJP_OFFSET))(this, a1, a2);
		}

		::System::Boolean AMFPCDAOBLB(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + MJCABDDEGOE_AMFPCDAOBLB_OFFSET))(this, a1);
		}

		::System::Boolean KNFBFJONDDJ(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + MJCABDDEGOE_KNFBFJONDDJ_OFFSET))(this, a1, a2);
		}

		::PCCJOIJACIJ* OKMDIEBCLBG(::UnityEngine::Vector2Int a1)
		{
			return ((::PCCJOIJACIJ*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + MJCABDDEGOE_OKMDIEBCLBG_OFFSET))(this, a1);
		}

	};
