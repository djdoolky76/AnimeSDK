#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNIEAMHOKJE.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DHBOGGBEMFF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Object; }

#define PJPOOKIMNKJ_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x147A6C20)
#define PJPOOKIMNKJ_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0x147A6E30)
#define PJPOOKIMNKJ_BDEJBBALMHE_OFFSET UNITYSDK_OFFSET(0x147A7410)
#define PJPOOKIMNKJ_CEHOBKMKHAN_OFFSET UNITYSDK_OFFSET(0x147A86B0)
#define PJPOOKIMNKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x147A4AC0)
#define PJPOOKIMNKJ_DFPEBABHFDK_OFFSET UNITYSDK_OFFSET(0x147A7940)
#define PJPOOKIMNKJ_DGGNKKHOOOG_OFFSET UNITYSDK_OFFSET(0x147A4B70)
#define PJPOOKIMNKJ_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x147A6E80)
#define PJPOOKIMNKJ_GCICAABIGKP_OFFSET UNITYSDK_OFFSET(0x147A6DF0)
#define PJPOOKIMNKJ_GDJEIGJGFHK_OFFSET UNITYSDK_OFFSET(0x147A7F80)
#define PJPOOKIMNKJ_IIEFMMLKCOG_OFFSET UNITYSDK_OFFSET(0x147A4B60)
#define PJPOOKIMNKJ_IMNANFLCFBM_OFFSET UNITYSDK_OFFSET(0x147A5450)
#define PJPOOKIMNKJ_IODFHGKLBIF_OFFSET UNITYSDK_OFFSET(0x147A4A70)
#define PJPOOKIMNKJ_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x147A6BC0)
#define PJPOOKIMNKJ_JKMPLNNOBFC_OFFSET UNITYSDK_OFFSET(0x147A7C40)
#define PJPOOKIMNKJ_KDCBKBJKGOP_OFFSET UNITYSDK_OFFSET(0x147A7FE0)
#define PJPOOKIMNKJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x147A4BC0)
#define PJPOOKIMNKJ_LEEMOELNLID_OFFSET UNITYSDK_OFFSET(0x147A4B10)
#define PJPOOKIMNKJ_MMPDJMAPJJG_OFFSET UNITYSDK_OFFSET(0x147A7730)
#define PJPOOKIMNKJ_NDFEFCEABHA_OFFSET UNITYSDK_OFFSET(0x147A7610)
#define PJPOOKIMNKJ_OIEFNJAFDLK_OFFSET UNITYSDK_OFFSET(0x147A7F40)
#define PJPOOKIMNKJ_OJCHKAEEKDO_OFFSET UNITYSDK_OFFSET(0x147A81E0)
#define PJPOOKIMNKJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x147A5A40)
#define PJPOOKIMNKJ_PBJMDPEDKPI_OFFSET UNITYSDK_OFFSET(0x147A75D0)
#define PJPOOKIMNKJ_PPAPBNGOBFC_OFFSET UNITYSDK_OFFSET(0x147A4A60)

inline static constexpr unsigned int PJPOOKIMNKJ_TypeDefinitionIndex = 50650;

	class PJPOOKIMNKJ : public ::BNIEAMHOKJE
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* OIBHDOMIGDO; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* MOIDMEBPDKE; // 0x68
		::System::Collections::Generic::List_1<::System::Int32>* IAGNMEHODJI; // 0x70
		::Il2CppArray<::UnityEngine::Light*>* JHEBNGLNJJD; // 0x78
		::System::Int32 LCIIEPIBPFJ; // 0x80
		::RPG::CustomRP::CustomLightQualityFilter AJMAPJOPFFP; // 0x84
		::RPG::CustomRP::CustomLightQualityFilter DDEGBOBCNFA; // 0x88
		::RPG::Client::OpenWorld::StreamingLightEnum OCMJCFLLJAB; // 0x8C
		static ::System::Boolean* StaticGet_MIDHLHBANDB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PJPOOKIMNKJ")->GetStaticField(0x163C0);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::StreamingLightEnum PPAPBNGOBFC()
		{
			return ((::RPG::Client::OpenWorld::StreamingLightEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_PPAPBNGOBFC_OFFSET))(this);
		}

		::System::Void IODFHGKLBIF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_IODFHGKLBIF_OFFSET))(this, a1);
		}

		::System::Void LEEMOELNLID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_LEEMOELNLID_OFFSET))(this, a1);
		}

		::System::Int32 IIEFMMLKCOG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_IIEFMMLKCOG_OFFSET))(this);
		}

		static ::System::Void DGGNKKHOOOG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_DGGNKKHOOOG_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::RPG::Client::OpenWorld::StreamingLightEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_ABKBOGIGAEH_OFFSET))(this, a1);
		}

		::System::Void GCICAABIGKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_GCICAABIGKP_OFFSET))(this);
		}

		::System::Void AHGNCDFAFBM(::UnityEngine::Object* a1, ::RPG::Client::OpenWorld::StreamingLightEnum a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_AHGNCDFAFBM_OFFSET))(this, a1, a2);
		}

		::System::Void EGKNKHEANAN(::RPG::Client::OpenWorld::StreamingLightEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_EGKNKHEANAN_OFFSET))(this, a1);
		}

		::System::Void BDEJBBALMHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_BDEJBBALMHE_OFFSET))(this);
		}

		::System::Void PBJMDPEDKPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_PBJMDPEDKPI_OFFSET))(this);
		}

		::System::Void NDFEFCEABHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_NDFEFCEABHA_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::RPG::Client::OpenWorld::StreamingLightEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void MMPDJMAPJJG(::DHBOGGBEMFF* a1, ::RPG::Client::OpenWorld::StreamingLightEnum a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHBOGGBEMFF*, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_MMPDJMAPJJG_OFFSET))(this, a1, a2);
		}

		::System::Void JKMPLNNOBFC(::System::Int32 a1, ::System::String* a2, ::DHBOGGBEMFF* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::DHBOGGBEMFF*, ::System::Int32))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_JKMPLNNOBFC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DFPEBABHFDK(::System::Int32 a1, ::System::String* a2, ::DHBOGGBEMFF* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::DHBOGGBEMFF*, ::System::Int32))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_DFPEBABHFDK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OIEFNJAFDLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_OIEFNJAFDLK_OFFSET))(this);
		}

		::System::Void GDJEIGJGFHK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_GDJEIGJGFHK_OFFSET))(this, a1);
		}

		::System::Void KDCBKBJKGOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_KDCBKBJKGOP_OFFSET))(this);
		}

		::UnityEngine::Light* OJCHKAEEKDO(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_OJCHKAEEKDO_OFFSET))(this, a1);
		}

		::UnityEngine::Light* CEHOBKMKHAN(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_CEHOBKMKHAN_OFFSET))(this, a1);
		}

		static ::System::String* IMNANFLCFBM(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PJPOOKIMNKJ_IMNANFLCFBM_OFFSET))(a1);
		}

	};
