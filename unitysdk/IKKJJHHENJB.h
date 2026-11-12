#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IKKJJHHENJB_KEIMAGBGCDP;
namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define IKKJJHHENJB_ADGNKMJFOHF_OFFSET UNITYSDK_OFFSET(0x17467070)
#define IKKJJHHENJB_AEFAIIDLFCI_OFFSET UNITYSDK_OFFSET(0x174658C0)
#define IKKJJHHENJB_AEJDFJKLKKD_OFFSET UNITYSDK_OFFSET(0x17465700)
#define IKKJJHHENJB_AOEFBACEGIB_OFFSET UNITYSDK_OFFSET(0x17467270)
#define IKKJJHHENJB_BAKDBPHHGFB_OFFSET UNITYSDK_OFFSET(0x17465A90)
#define IKKJJHHENJB_BLJPLIKHPPP_OFFSET UNITYSDK_OFFSET(0x17466E30)
#define IKKJJHHENJB_BMALLPEEPAN_OFFSET UNITYSDK_OFFSET(0x174652F0)
#define IKKJJHHENJB_CDCEDACIKDI_OFFSET UNITYSDK_OFFSET(0x17465AE0)
#define IKKJJHHENJB_CTOR_OFFSET UNITYSDK_OFFSET(0x17464A30)
#define IKKJJHHENJB_DAFKLJBHGED_OFFSET UNITYSDK_OFFSET(0x17466A50)
#define IKKJJHHENJB_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x17464C20)
#define IKKJJHHENJB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17464A80)
#define IKKJJHHENJB_EMNKCMGHPCF_OFFSET UNITYSDK_OFFSET(0x174666E0)
#define IKKJJHHENJB_FGHECGAIAFH_OFFSET UNITYSDK_OFFSET(0x17466B40)
#define IKKJJHHENJB_FJCPHCCFKEA_OFFSET UNITYSDK_OFFSET(0x17466670)
#define IKKJJHHENJB_FPAPADPPFFI_OFFSET UNITYSDK_OFFSET(0x17464CE0)
#define IKKJJHHENJB_GCBKDADGKPF_OFFSET UNITYSDK_OFFSET(0x17465970)
#define IKKJJHHENJB_HGNPCPODKBE_OFFSET UNITYSDK_OFFSET(0x17466050)
#define IKKJJHHENJB_ICKCKJDFPIJ_OFFSET UNITYSDK_OFFSET(0x17465340)
#define IKKJJHHENJB_JFPNJEDBPPI_OFFSET UNITYSDK_OFFSET(0x17466350)
#define IKKJJHHENJB_JLLBIBNMEIH_OFFSET UNITYSDK_OFFSET(0x17465B80)
#define IKKJJHHENJB_JNCLHNHMOJD_OFFSET UNITYSDK_OFFSET(0x174649D0)
#define IKKJJHHENJB_KEIJODDHCIO_OFFSET UNITYSDK_OFFSET(0x17466790)
#define IKKJJHHENJB_LHOAODMMMPE_OFFSET UNITYSDK_OFFSET(0x17465CC0)
#define IKKJJHHENJB_LJNIHFDLPEA_OFFSET UNITYSDK_OFFSET(0x17465EB0)
#define IKKJJHHENJB_LKMGNLCHDIE_OFFSET UNITYSDK_OFFSET(0x174648C0)
#define IKKJJHHENJB_MNCLKLJPPLG_OFFSET UNITYSDK_OFFSET(0x17466210)
#define IKKJJHHENJB_MOKFEPLHDKH_OFFSET UNITYSDK_OFFSET(0x17464880)
#define IKKJJHHENJB_NCNMMOHOOEE_OFFSET UNITYSDK_OFFSET(0x17464920)
#define IKKJJHHENJB_NPOCLLEFICP_OFFSET UNITYSDK_OFFSET(0x17464C80)
#define IKKJJHHENJB_PCEINNJJIOO_OFFSET UNITYSDK_OFFSET(0x17465070)
#define IKKJJHHENJB_PHHMKBBAKDA_OFFSET UNITYSDK_OFFSET(0x174662B0)
#define IKKJJHHENJB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x17464AD0)
#define IKKJJHHENJB_PNNLADJHCNH_OFFSET UNITYSDK_OFFSET(0x17466D90)
#define IKKJJHHENJB_POCLGENBCCJ_OFFSET UNITYSDK_OFFSET(0x174673D0)

inline static constexpr unsigned int IKKJJHHENJB_TypeDefinitionIndex = 62122;

	class IKKJJHHENJB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* OHGIBJPLJMD; // 0x10
		::UnityEngine::Transform* BFJOMBDJAGH; // 0x18
		::IKKJJHHENJB_KEIMAGBGCDP* BOOOIPJKFIE; // 0x20
		::RPG::Client::PerformanceManager* HDPDEGPELBN; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* CCGHHHBLPMN; // 0x30
		::Il2CppArray<::System::Boolean>* NPIFDMBOPNH; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* FMNEHAPOPGN; // 0x40
		::IKKJJHHENJB_KEIMAGBGCDP* MANJFKMHBBD; // 0x48
		::System::Boolean CAAPEIJJICA; // 0x50
		// static const ::System::Object NDKEGAADDHI; // 0x0
		::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_CTOR_OFFSET))(this, a1);
		}

		static ::System::Int32 MOKFEPLHDKH(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + IKKJJHHENJB_MOKFEPLHDKH_OFFSET))(a1);
		}

		static ::System::Int32 LKMGNLCHDIE(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + IKKJJHHENJB_LKMGNLCHDIE_OFFSET))(a1);
		}

		::System::Boolean NCNMMOHOOEE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_NCNMMOHOOEE_OFFSET))(this);
		}

		::System::Boolean JNCLHNHMOJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_JNCLHNHMOJD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_DISPOSE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKKJJHHENJB_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void NPOCLLEFICP(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_NPOCLLEFICP_OFFSET))(this, a1);
		}

		::System::Void FPAPADPPFFI(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_FPAPADPPFFI_OFFSET))(this, a1, a2);
		}

		::System::Void BMALLPEEPAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_BMALLPEEPAN_OFFSET))(this);
		}

		::System::Void ICKCKJDFPIJ(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_ICKCKJDFPIJ_OFFSET))(this, a1, a2);
		}

		::System::Void AEJDFJKLKKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_AEJDFJKLKKD_OFFSET))(this);
		}

		::System::Boolean AEFAIIDLFCI(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IKKJJHHENJB_AEFAIIDLFCI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CDCEDACIKDI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_CDCEDACIKDI_OFFSET))(this, a1);
		}

		::System::Boolean GCBKDADGKPF(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IKKJJHHENJB_GCBKDADGKPF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JLLBIBNMEIH(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_JLLBIBNMEIH_OFFSET))(this, a1);
		}

		::System::Void BAKDBPHHGFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_BAKDBPHHGFB_OFFSET))(this);
		}

		::System::Void LHOAODMMMPE(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_LHOAODMMMPE_OFFSET))(this, a1, a2);
		}

		::System::Void LJNIHFDLPEA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_LJNIHFDLPEA_OFFSET))(this, a1);
		}

		::IKKJJHHENJB_KEIMAGBGCDP* PCEINNJJIOO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::NPCSubType a2, ::System::String* a3)
		{
			return ((::IKKJJHHENJB_KEIMAGBGCDP*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::NPCSubType, ::System::String*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_PCEINNJJIOO_OFFSET))(this, a1, a2, a3);
		}

		::IKKJJHHENJB_KEIMAGBGCDP* HGNPCPODKBE(::System::String* a1)
		{
			return ((::IKKJJHHENJB_KEIMAGBGCDP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_HGNPCPODKBE_OFFSET))(this, a1);
		}

		::IKKJJHHENJB_KEIMAGBGCDP* MNCLKLJPPLG(::System::String* a1)
		{
			return ((::IKKJJHHENJB_KEIMAGBGCDP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_MNCLKLJPPLG_OFFSET))(this, a1);
		}

		::RPG::GameCore::NPCSubType PHHMKBBAKDA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::NPCSubType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_PHHMKBBAKDA_OFFSET))(this, a1);
		}

		::System::Void JFPNJEDBPPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_JFPNJEDBPPI_OFFSET))(this);
		}

		::System::Void FJCPHCCFKEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_FJCPHCCFKEA_OFFSET))(this);
		}

		::System::Void EMNKCMGHPCF(::IKKJJHHENJB_KEIMAGBGCDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKKJJHHENJB_KEIMAGBGCDP*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_EMNKCMGHPCF_OFFSET))(this, a1);
		}

		::System::Int32 KEIJODDHCIO(::IKKJJHHENJB_KEIMAGBGCDP* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::IKKJJHHENJB_KEIMAGBGCDP*, ::System::Int32))((::PBYTE)hIl2Cpp + IKKJJHHENJB_KEIJODDHCIO_OFFSET))(this, a1, a2);
		}

		::System::Void DAFKLJBHGED(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_DAFKLJBHGED_OFFSET))(this, a1);
		}

		::System::Void FGHECGAIAFH(::IKKJJHHENJB_KEIMAGBGCDP* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::IKKJJHHENJB_KEIMAGBGCDP*, ::System::Boolean))((::PBYTE)hIl2Cpp + IKKJJHHENJB_FGHECGAIAFH_OFFSET))(this, a1, a2);
		}

		::System::Void PNNLADJHCNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_PNNLADJHCNH_OFFSET))(this);
		}

		::System::Void BLJPLIKHPPP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IKKJJHHENJB_BLJPLIKHPPP_OFFSET))(this, a1);
		}

		::System::Void ADGNKMJFOHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_ADGNKMJFOHF_OFFSET))(this);
		}

		::System::Int32 AOEFBACEGIB(::IKKJJHHENJB_KEIMAGBGCDP* a1, ::IKKJJHHENJB_KEIMAGBGCDP* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::IKKJJHHENJB_KEIMAGBGCDP*, ::IKKJJHHENJB_KEIMAGBGCDP*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_AOEFBACEGIB_OFFSET))(this, a1, a2);
		}

		::System::Int32 POCLGENBCCJ(::IKKJJHHENJB_KEIMAGBGCDP* a1, ::IKKJJHHENJB_KEIMAGBGCDP* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::IKKJJHHENJB_KEIMAGBGCDP*, ::IKKJJHHENJB_KEIMAGBGCDP*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_POCLGENBCCJ_OFFSET))(this, a1, a2);
		}

	};
