#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HNLPBPGMJMF;
class HNPJNICKLOJ;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Collider; }

#define DJLLDLPJMAP_AJNJGLNFCNH_OFFSET UNITYSDK_OFFSET(0xFDC0380)
#define DJLLDLPJMAP_AKMMBLPLDEN_OFFSET UNITYSDK_OFFSET(0xFDBEA20)
#define DJLLDLPJMAP_ANNDLBAJHCP_OFFSET UNITYSDK_OFFSET(0xFDC02B0)
#define DJLLDLPJMAP_CNFPIMONHPI_OFFSET UNITYSDK_OFFSET(0xFDBECA0)
#define DJLLDLPJMAP_DBBCDHCEBNA_OFFSET UNITYSDK_OFFSET(0xFDC19B0)
#define DJLLDLPJMAP_DBIBLGANFAP_OFFSET UNITYSDK_OFFSET(0xFDBF540)
#define DJLLDLPJMAP_DGEIDHIGGLC_OFFSET UNITYSDK_OFFSET(0xFDC04D0)
#define DJLLDLPJMAP_GPPDFABNGMG_OFFSET UNITYSDK_OFFSET(0xFDC1600)
#define DJLLDLPJMAP_KKABGJCDBNL_OFFSET UNITYSDK_OFFSET(0xFDC1740)
#define DJLLDLPJMAP_KOANKKGOOFG_OFFSET UNITYSDK_OFFSET(0xFDC1570)
#define DJLLDLPJMAP_KPCJNEKGLEK_OFFSET UNITYSDK_OFFSET(0xFDBF4D0)
#define DJLLDLPJMAP_LBGDGKGOOHN_OFFSET UNITYSDK_OFFSET(0xFDBF430)
#define DJLLDLPJMAP_LONLKCJIJDA_OFFSET UNITYSDK_OFFSET(0xFDBF550)
#define DJLLDLPJMAP_MCNEHGJMJAK_OFFSET UNITYSDK_OFFSET(0xFDC10B0)
#define DJLLDLPJMAP_NDGDDEJNHFK_OFFSET UNITYSDK_OFFSET(0xFDBEDA0)
#define DJLLDLPJMAP_NNJMEFOIIDJ_OFFSET UNITYSDK_OFFSET(0xFDC1730)
#define DJLLDLPJMAP_PBGOHFJNEGO_OFFSET UNITYSDK_OFFSET(0xFDC05A0)

inline static constexpr unsigned int DJLLDLPJMAP_TypeDefinitionIndex = 50413;

class DJLLDLPJMAP : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_DOEHOCGLFAM()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(DJLLDLPJMAP_TypeDefinitionIndex)->GetStaticField(0x47AD0);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_FOFKALPENNP()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(DJLLDLPJMAP_TypeDefinitionIndex)->GetStaticField(0x47AD8);
	}
	// static const ::System::Boolean KGPKJPOMHLF = 0x0; // 0x0
	// static const ::System::Single INLJGBMFABF; // 0x0

	static ::System::Void AKMMBLPLDEN(::HNPJNICKLOJ* IPMMCGDMODG, ::HNLPBPGMJMF* PADJNMGMGHO, ::System::Boolean PDHGMPJEHEI)
	{
		return ((::System::Void(*)(::HNPJNICKLOJ*, ::HNLPBPGMJMF*, ::System::Boolean))((::PBYTE)hIl2Cpp + DJLLDLPJMAP_AKMMBLPLDEN_OFFSET))(IPMMCGDMODG, PADJNMGMGHO, PDHGMPJEHEI);
	}

	static ::UnityEngine::Vector3 CNFPIMONHPI()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + DJLLDLPJMAP_CNFPIMONHPI_OFFSET))();
	}

	static ::System::Single NDGDDEJNHFK(::Il2CppArray<::UnityEngine::Vector2>* EJCBEJMGFAJ, ::Il2CppArray<::UnityEngine::Vector2>* EBFCACIEKBC)
	{
		return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DJLLDLPJMAP_NDGDDEJNHFK_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::System::Boolean ANNDLBAJHCP(::HNPJNICKLOJ* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::HNPJNICKLOJ*))((::PBYTE)hIl2Cpp + DJLLDLPJMAP_ANNDLBAJHCP_OFFSET))(IPMMCGDMODG);
	}

	static ::System::Single LBGDGKGOOHN(::UnityEngine::Vector2 EJCBEJMGFAJ, ::UnityEngine::Vector2 EBFCACIEKBC, ::UnityEngine::Vector2 CBLGCIFLMKL)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DJLLDLPJMAP_LBGDGKGOOHN_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, CBLGCIFLMKL);
	}

	static ::System::Single AJNJGLNFCNH(::Il2CppArray<::UnityEngine::Vector2>* JNDDJMAHNAI, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + DJLLDLPJMAP_AJNJGLNFCNH_OFFSET))(JNDDJMAHNAI, JHFKDGBCOBA);
	}

	static ::System::Void DBIBLGANFAP(::UnityEngine::Vector2& GMHFKOELHPL, ::UnityEngine::Vector2& DIFAIJKOIPG)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DJLLDLPJMAP_DBIBLGANFAP_OFFSET))(GMHFKOELHPL, DIFAIJKOIPG);
	}

	static ::System::Boolean DGEIDHIGGLC(::HNPJNICKLOJ* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::HNPJNICKLOJ*))((::PBYTE)hIl2Cpp + DJLLDLPJMAP_DGEIDHIGGLC_OFFSET))(IPMMCGDMODG);
	}

	static ::System::Boolean PBGOHFJNEGO(::HNPJNICKLOJ* EJCBEJMGFAJ, ::HNPJNICKLOJ* EBFCACIEKBC, ::System::Single BOGPAHGJOJK)
	{
		return ((::System::Boolean(*)(::HNPJNICKLOJ*, ::HNPJNICKLOJ*, ::System::Single))((::PBYTE)hIl2Cpp + DJLLDLPJMAP_PBGOHFJNEGO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, BOGPAHGJOJK);
	}

	static ::System::Boolean MCNEHGJMJAK(::HNPJNICKLOJ* FAPDDEKECCL, ::System::Collections::Generic::List_1<::System::Single>* EHNBMHNBLDE, ::HNPJNICKLOJ* KLOOGKDOGNF)
	{
		return ((::System::Boolean(*)(::HNPJNICKLOJ*, ::System::Collections::Generic::List_1<::System::Single>*, ::HNPJNICKLOJ*))((::PBYTE)hIl2Cpp + DJLLDLPJMAP_MCNEHGJMJAK_OFFSET))(FAPDDEKECCL, EHNBMHNBLDE, KLOOGKDOGNF);
	}

	static ::Il2CppArray<::UnityEngine::RaycastHit>* KOANKKGOOFG()
	{
		return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)())((::PBYTE)hIl2Cpp + DJLLDLPJMAP_KOANKKGOOFG_OFFSET))();
	}

	static ::System::Int32 KPCJNEKGLEK(::System::Single HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + DJLLDLPJMAP_KPCJNEKGLEK_OFFSET))(HAAEBCOBKFF);
	}

	static ::UnityEngine::Vector2 GPPDFABNGMG(::UnityEngine::Vector2 EJCBEJMGFAJ, ::UnityEngine::Vector2 EBFCACIEKBC, ::UnityEngine::Vector2 CBLGCIFLMKL, ::UnityEngine::Vector2 MKBCMHIAMHF)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DJLLDLPJMAP_GPPDFABNGMG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, CBLGCIFLMKL, MKBCMHIAMHF);
	}

	static ::System::Void NNJMEFOIIDJ(::Il2CppArray<::UnityEngine::RaycastHit>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + DJLLDLPJMAP_NNJMEFOIIDJ_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single KKABGJCDBNL(::UnityEngine::BoxCollider* EJCBEJMGFAJ, ::UnityEngine::BoxCollider* EBFCACIEKBC)
	{
		return ((::System::Single(*)(::UnityEngine::BoxCollider*, ::UnityEngine::BoxCollider*))((::PBYTE)hIl2Cpp + DJLLDLPJMAP_KKABGJCDBNL_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::System::Single LONLKCJIJDA(::Il2CppArray<::UnityEngine::Vector2>* EJCBEJMGFAJ, ::Il2CppArray<::UnityEngine::Vector2>* EBFCACIEKBC)
	{
		return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DJLLDLPJMAP_LONLKCJIJDA_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::Il2CppArray<::UnityEngine::Vector2>* DBBCDHCEBNA(::UnityEngine::BoxCollider* EHHHMFKHNAI)
	{
		return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::UnityEngine::BoxCollider*))((::PBYTE)hIl2Cpp + DJLLDLPJMAP_DBBCDHCEBNA_OFFSET))(EHHHMFKHNAI);
	}
};
