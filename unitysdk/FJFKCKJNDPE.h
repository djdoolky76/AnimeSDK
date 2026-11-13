#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertGlowUsage.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertOutlineDepthMode.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/GlowStyle.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/OutlineStyle.h"
#include "unitysdk/System/Object.h"
class CLIECFICBEN;
namespace RPG { class OutlinePostFXMonoPlugin; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define FJFKCKJNDPE_ACAOJBGJCOE_OFFSET UNITYSDK_OFFSET(0x198229D0)
#define FJFKCKJNDPE_AOLGDFCAEFO_OFFSET UNITYSDK_OFFSET(0x19825FD0)
#define FJFKCKJNDPE_BGIFMNAIILN_OFFSET UNITYSDK_OFFSET(0x19824BC0)
#define FJFKCKJNDPE_BOPGEAMJENF_OFFSET UNITYSDK_OFFSET(0x19825380)
#define FJFKCKJNDPE_CTOR_OFFSET UNITYSDK_OFFSET(0x19821F70)
#define FJFKCKJNDPE_DHFPBNLNCCM_OFFSET UNITYSDK_OFFSET(0x19822A30)
#define FJFKCKJNDPE_DJPCHLDBHFO_OFFSET UNITYSDK_OFFSET(0x19822710)
#define FJFKCKJNDPE_DKGNMBFKFHA_OFFSET UNITYSDK_OFFSET(0x19825B10)
#define FJFKCKJNDPE_EKHHHAFPNGO_OFFSET UNITYSDK_OFFSET(0x19822B00)
#define FJFKCKJNDPE_FHIPKHMKDHM_OFFSET UNITYSDK_OFFSET(0x198252E0)
#define FJFKCKJNDPE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x19826360)
#define FJFKCKJNDPE_HAEPHLPAPPJ_OFFSET UNITYSDK_OFFSET(0x19822500)
#define FJFKCKJNDPE_IIGPHOLMNJC_OFFSET UNITYSDK_OFFSET(0x198243B0)
#define FJFKCKJNDPE_IKDKMIFOKHM_OFFSET UNITYSDK_OFFSET(0x19825AA0)
#define FJFKCKJNDPE_IMFHBJMGLPI_OFFSET UNITYSDK_OFFSET(0x19825A00)
#define FJFKCKJNDPE_JCHJCLLLEMI_OFFSET UNITYSDK_OFFSET(0x198223A0)
#define FJFKCKJNDPE_KEFGOJPGLBK_OFFSET UNITYSDK_OFFSET(0x19823660)
#define FJFKCKJNDPE_KFFLJOCLDFD_OFFSET UNITYSDK_OFFSET(0x198222D0)
#define FJFKCKJNDPE_KHCOFEFANBL_OFFSET UNITYSDK_OFFSET(0x198263B0)
#define FJFKCKJNDPE_LJKKHBLEFMB_OFFSET UNITYSDK_OFFSET(0x19823C80)
#define FJFKCKJNDPE_MHJBEKAEJCO_OFFSET UNITYSDK_OFFSET(0x198235C0)
#define FJFKCKJNDPE_NOOBEFHNJEO_OFFSET UNITYSDK_OFFSET(0x19825BB0)
#define FJFKCKJNDPE_OEGKNGCPGCE_OFFSET UNITYSDK_OFFSET(0x19824480)
#define FJFKCKJNDPE_OGCPMBBLKCI_OFFSET UNITYSDK_OFFSET(0x19823840)
#define FJFKCKJNDPE_OJKKIMCBBAC_OFFSET UNITYSDK_OFFSET(0x19824C60)
#define FJFKCKJNDPE_PIFJPIOLMNJ_OFFSET UNITYSDK_OFFSET(0x19824540)

inline static constexpr unsigned int FJFKCKJNDPE_TypeDefinitionIndex = 79929;

	class FJFKCKJNDPE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::CLIECFICBEN*, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* PDFGMPANMHA; // 0x10
		::System::Collections::Generic::Dictionary_2<::CLIECFICBEN*, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* MEEPDDMNLCH; // 0x18
		::System::Collections::Generic::HashSet_1<::CLIECFICBEN*>* KNPIAKMGFPO; // 0x20
		::System::Collections::Generic::Dictionary_2<::CLIECFICBEN*, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* BGFGKBPCPAE; // 0x28
		::System::Collections::Generic::Dictionary_2<::CLIECFICBEN*, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* MBGMOKIJFGA; // 0x30
		::System::Collections::Generic::Dictionary_2<::CLIECFICBEN*, ::RPG::Client::LittleGame::ComicDessert::ComicDessertOutlineDepthMode>* KOIEMKBAPEA; // 0x38
		::System::Collections::Generic::List_1<::CLIECFICBEN*>* CLHJLDDKHEF; // 0x40
		::RPG::OutlinePostFXMonoPlugin* DKILKLPIJLK; // 0x48
		::RPG::Client::LittleGame::ComicDessert::OutlineStyle HHKHIALFGDI; // 0x50
		::RPG::Client::LittleGame::ComicDessert::GlowStyle JEOBMHEDAMK; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::OutlineStyle KFFLJOCLDFD()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::OutlineStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_KFFLJOCLDFD_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::GlowStyle JCHJCLLLEMI(::RPG::Client::LittleGame::ComicDessert::ComicDessertGlowUsage a1)
		{
			return ((::RPG::Client::LittleGame::ComicDessert::GlowStyle(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGlowUsage))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_JCHJCLLLEMI_OFFSET))(this, a1);
		}

		::System::Void HAEPHLPAPPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_HAEPHLPAPPJ_OFFSET))(this);
		}

		::System::Void DJPCHLDBHFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_DJPCHLDBHFO_OFFSET))(this);
		}

		::System::Boolean ACAOJBGJCOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_ACAOJBGJCOE_OFFSET))(this);
		}

		::System::Void DHFPBNLNCCM(::CLIECFICBEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLIECFICBEN*))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_DHFPBNLNCCM_OFFSET))(this, a1);
		}

		::System::Void MHJBEKAEJCO(::CLIECFICBEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLIECFICBEN*))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_MHJBEKAEJCO_OFFSET))(this, a1);
		}

		::System::Void KEFGOJPGLBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_KEFGOJPGLBK_OFFSET))(this);
		}

		::System::Void OGCPMBBLKCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_OGCPMBBLKCI_OFFSET))(this);
		}

		::System::Void LJKKHBLEFMB(::CLIECFICBEN* a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a2, ::RPG::Client::LittleGame::ComicDessert::ComicDessertOutlineDepthMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::CLIECFICBEN*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*, ::RPG::Client::LittleGame::ComicDessert::ComicDessertOutlineDepthMode))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_LJKKHBLEFMB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OEGKNGCPGCE(::CLIECFICBEN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLIECFICBEN*))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_OEGKNGCPGCE_OFFSET))(this, a1);
		}

		::System::Void IIGPHOLMNJC(::CLIECFICBEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLIECFICBEN*))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_IIGPHOLMNJC_OFFSET))(this, a1);
		}

		::System::Void PIFJPIOLMNJ(::CLIECFICBEN* a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CLIECFICBEN*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_PIFJPIOLMNJ_OFFSET))(this, a1, a2);
		}

		::System::Void BGIFMNAIILN(::CLIECFICBEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLIECFICBEN*))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_BGIFMNAIILN_OFFSET))(this, a1);
		}

		::System::Void OJKKIMCBBAC(::CLIECFICBEN* a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CLIECFICBEN*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_OJKKIMCBBAC_OFFSET))(this, a1, a2);
		}

		::System::Void FHIPKHMKDHM(::CLIECFICBEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLIECFICBEN*))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_FHIPKHMKDHM_OFFSET))(this, a1);
		}

		::System::Void BOPGEAMJENF(::CLIECFICBEN* a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CLIECFICBEN*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_BOPGEAMJENF_OFFSET))(this, a1, a2);
		}

		::System::Void IMFHBJMGLPI(::CLIECFICBEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLIECFICBEN*))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_IMFHBJMGLPI_OFFSET))(this, a1);
		}

		::System::Void IKDKMIFOKHM(::RPG::Client::LittleGame::ComicDessert::ComicDessertGlowUsage a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGlowUsage))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_IKDKMIFOKHM_OFFSET))(this, a1);
		}

		::System::Void DKGNMBFKFHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_DKGNMBFKFHA_OFFSET))(this);
		}

		::System::Void NOOBEFHNJEO(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_NOOBEFHNJEO_OFFSET))(this, a1);
		}

		::System::Boolean AOLGDFCAEFO(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_AOLGDFCAEFO_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void EKHHHAFPNGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_EKHHHAFPNGO_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::OutlineStyle KHCOFEFANBL()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::OutlineStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFKCKJNDPE_KHCOFEFANBL_OFFSET))(this);
		}

	};
