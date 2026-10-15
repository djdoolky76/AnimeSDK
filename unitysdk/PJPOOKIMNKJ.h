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

#define PJPOOKIMNKJ_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xC2A3050)
#define PJPOOKIMNKJ_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0xC2A3260)
#define PJPOOKIMNKJ_BDEJBBALMHE_OFFSET UNITYSDK_OFFSET(0xC2A3840)
#define PJPOOKIMNKJ_CEHOBKMKHAN_OFFSET UNITYSDK_OFFSET(0xC2A4AE0)
#define PJPOOKIMNKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC2A0EF0)
#define PJPOOKIMNKJ_DFPEBABHFDK_OFFSET UNITYSDK_OFFSET(0xC2A3D70)
#define PJPOOKIMNKJ_DGGNKKHOOOG_OFFSET UNITYSDK_OFFSET(0xC2A0FA0)
#define PJPOOKIMNKJ_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0xC2A32B0)
#define PJPOOKIMNKJ_GCICAABIGKP_OFFSET UNITYSDK_OFFSET(0xC2A3220)
#define PJPOOKIMNKJ_GDJEIGJGFHK_OFFSET UNITYSDK_OFFSET(0xC2A43B0)
#define PJPOOKIMNKJ_IIEFMMLKCOG_OFFSET UNITYSDK_OFFSET(0xC2A0F90)
#define PJPOOKIMNKJ_IMNANFLCFBM_OFFSET UNITYSDK_OFFSET(0xC2A1880)
#define PJPOOKIMNKJ_IODFHGKLBIF_OFFSET UNITYSDK_OFFSET(0xC2A0EA0)
#define PJPOOKIMNKJ_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xC2A2FF0)
#define PJPOOKIMNKJ_JKMPLNNOBFC_OFFSET UNITYSDK_OFFSET(0xC2A4070)
#define PJPOOKIMNKJ_KDCBKBJKGOP_OFFSET UNITYSDK_OFFSET(0xC2A4410)
#define PJPOOKIMNKJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC2A0FF0)
#define PJPOOKIMNKJ_LEEMOELNLID_OFFSET UNITYSDK_OFFSET(0xC2A0F40)
#define PJPOOKIMNKJ_MMPDJMAPJJG_OFFSET UNITYSDK_OFFSET(0xC2A3B60)
#define PJPOOKIMNKJ_NDFEFCEABHA_OFFSET UNITYSDK_OFFSET(0xC2A3A40)
#define PJPOOKIMNKJ_OIEFNJAFDLK_OFFSET UNITYSDK_OFFSET(0xC2A4370)
#define PJPOOKIMNKJ_OJCHKAEEKDO_OFFSET UNITYSDK_OFFSET(0xC2A4610)
#define PJPOOKIMNKJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC2A1E70)
#define PJPOOKIMNKJ_PBJMDPEDKPI_OFFSET UNITYSDK_OFFSET(0xC2A3A00)
#define PJPOOKIMNKJ_PPAPBNGOBFC_OFFSET UNITYSDK_OFFSET(0xC2A0E90)

inline static constexpr unsigned int PJPOOKIMNKJ_TypeDefinitionIndex = 49574;

	class PJPOOKIMNKJ : public ::BNIEAMHOKJE
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* OIBHDOMIGDO; // 0x60
		::Il2CppArray<::UnityEngine::Light*>* JHEBNGLNJJD; // 0x68
		::System::Collections::Generic::List_1<::System::Int32>* MOIDMEBPDKE; // 0x70
		::System::Collections::Generic::List_1<::System::Int32>* IAGNMEHODJI; // 0x78
		::RPG::CustomRP::CustomLightQualityFilter DDEGBOBCNFA; // 0x80
		::RPG::CustomRP::CustomLightQualityFilter AJMAPJOPFFP; // 0x84
		::RPG::Client::OpenWorld::StreamingLightEnum OCMJCFLLJAB; // 0x88
		::System::Int32 LCIIEPIBPFJ; // 0x8C
		static ::System::Boolean* StaticGet_MIDHLHBANDB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PJPOOKIMNKJ")->GetStaticField(0x15AA0);
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
