#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNIEAMHOKJE.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CRPLightQualityGroupPlugin;
class LocalAmbientVolume;
class LocalFogSphereInstance;
namespace RPG::Client { class BillboardController; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class Stage; }
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ReflectionProbe; }
namespace VLB { class VolumetricLightBeam; }

#define JFLFABLJOCJ_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1663EC10)
#define JFLFABLJOCJ_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0x1663F040)
#define JFLFABLJOCJ_ANLLGFAHBCM_OFFSET UNITYSDK_OFFSET(0x1663FF80)
#define JFLFABLJOCJ_APNMPJPDDGD_OFFSET UNITYSDK_OFFSET(0x1663CC60)
#define JFLFABLJOCJ_BDEJBBALMHE_OFFSET UNITYSDK_OFFSET(0x1663FF00)
#define JFLFABLJOCJ_BLJKDGHGKIP_OFFSET UNITYSDK_OFFSET(0x1663E430)
#define JFLFABLJOCJ_BONOIPNPJDH_OFFSET UNITYSDK_OFFSET(0x1663CCE0)
#define JFLFABLJOCJ_CEHOBKMKHAN_OFFSET UNITYSDK_OFFSET(0x166418D0)
#define JFLFABLJOCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16641D90)
#define JFLFABLJOCJ_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x1663FD30)
#define JFLFABLJOCJ_EGNFCEKLHOA_OFFSET UNITYSDK_OFFSET(0x1663E6E0)
#define JFLFABLJOCJ_GCICAABIGKP_OFFSET UNITYSDK_OFFSET(0x1663ED40)
#define JFLFABLJOCJ_GDJEIGJGFHK_OFFSET UNITYSDK_OFFSET(0x16641720)
#define JFLFABLJOCJ_GJMDHHDJBIH_OFFSET UNITYSDK_OFFSET(0x1663CC70)
#define JFLFABLJOCJ_IBPGDAGFELF_OFFSET UNITYSDK_OFFSET(0x1663E930)
#define JFLFABLJOCJ_IHENOLBHGKN_OFFSET UNITYSDK_OFFSET(0x166413F0)
#define JFLFABLJOCJ_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x1663E600)
#define JFLFABLJOCJ_KDCBKBJKGOP_OFFSET UNITYSDK_OFFSET(0x16641790)
#define JFLFABLJOCJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1663CDE0)
#define JFLFABLJOCJ_MMPDJMAPJJG_OFFSET UNITYSDK_OFFSET(0x1663EDD0)
#define JFLFABLJOCJ_NGMILBPIGEJ_OFFSET UNITYSDK_OFFSET(0x1663CC50)
#define JFLFABLJOCJ_OIEFNJAFDLK_OFFSET UNITYSDK_OFFSET(0x16641650)
#define JFLFABLJOCJ_OJCHKAEEKDO_OFFSET UNITYSDK_OFFSET(0x16641B30)
#define JFLFABLJOCJ_OOCIOPDCKNK_OFFSET UNITYSDK_OFFSET(0x16640FD0)
#define JFLFABLJOCJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1663D9D0)
#define JFLFABLJOCJ_PBJMDPEDKPI_OFFSET UNITYSDK_OFFSET(0x166412A0)
#define JFLFABLJOCJ_PLGMDMJENBH_OFFSET UNITYSDK_OFFSET(0x166416A0)

inline static constexpr unsigned int JFLFABLJOCJ_TypeDefinitionIndex = 49570;

	class JFLFABLJOCJ : public ::BNIEAMHOKJE
	{
	public:
		::Il2CppArray<::UnityEngine::Light*>* JHEBNGLNJJD; // 0x60
		::Il2CppArray<::RPG::Client::BillboardController*>* ALGKHNNCGPO; // 0x68
		::Il2CppArray<::LocalAmbientVolume*>* BECHOGNNJJI; // 0x70
		::System::Collections::Generic::List_1<::System::Int32>* OIBHDOMIGDO; // 0x78
		::Il2CppArray<::System::Boolean>* EKKOGGKBCBB; // 0x80
		::Il2CppArray<::UnityEngine::ReflectionProbe*>* CKIMGPFEJFK; // 0x88
		::Il2CppArray<::LocalFogSphereInstance*>* NFMAOLMMKOB; // 0x90
		::Il2CppArray<::VLB::VolumetricLightBeam*>* GOFAOHGFMCM; // 0x98
		::RPG::Client::IAssetOperation* DBDIHPKHGGE; // 0xA0
		::Il2CppArray<::CRPLightQualityGroupPlugin*>* LKHPJCPPICP; // 0xA8
		::Il2CppArray<::RPG::Client::BillboardController*>* DHAOPOGODJM; // 0xB0
		::System::Collections::Generic::List_1<::System::Int32>* JHPIINONNCA; // 0xB8
		::Il2CppArray<::LocalFogSphereInstance*>* EKIFKGBKMCK; // 0xC0
		::Il2CppArray<::VLB::VolumetricLightBeam*>* BIFBOPAOHEH; // 0xC8
		::RPG::Client::Stage* PKLNPNKEJOO; // 0xD0
		::UnityEngine::GameObject* LDCJBNOAAOI; // 0xD8
		::Il2CppArray<::UnityEngine::ReflectionProbe*>* EDBADCKAJLL; // 0xE0
		::Il2CppArray<::CRPLightQualityGroupPlugin*>* GHMDEPHADOL; // 0xE8
		::Il2CppArray<::System::Single>* LOKMNCMLNCP; // 0xF0
		::Il2CppArray<::RPG::CustomRP::CustomAdditionalLightData*>* PAMFEBONMOI; // 0xF8
		::Il2CppArray<::System::Single>* EHEAOJNLPGI; // 0x100
		::UnityEngine::GameObject* IDIJJJJLDOO; // 0x108
		::System::Boolean BKOJKLEEILP; // 0x110
		::System::Byte _padding0[0x3];
		::System::Single EFDENNLCMBJ; // 0x114
		::RPG::Client::OpenWorld::StreamingLightEnum OCMJCFLLJAB; // 0x118
		::System::Single LHDCLECAOEN; // 0x11C
		::System::Single EICNDHAEMHJ; // 0x120
		::System::Single HHHFCGBEEMO; // 0x124
		::RPG::CustomRP::CustomLightQualityFilter AJMAPJOPFFP; // 0x128
		::System::Single NHJCPBCIEAF; // 0x12C
		static ::System::Boolean* StaticGet_MIDHLHBANDB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFLFABLJOCJ")->GetStaticField(0x2CA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_CTOR_OFFSET))(this);
		}

		::System::String* NGMILBPIGEJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_NGMILBPIGEJ_OFFSET))(this);
		}

		::System::String* APNMPJPDDGD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_APNMPJPDDGD_OFFSET))(this);
		}

		::RPG::Client::Stage* GJMDHHDJBIH()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_GJMDHHDJBIH_OFFSET))(this);
		}

		::RPG::Client::Stage* BONOIPNPJDH()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_BONOIPNPJDH_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::OpenWorld::StreamingLightEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_ABKBOGIGAEH_OFFSET))(this, a1);
		}

		::System::Void GCICAABIGKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_GCICAABIGKP_OFFSET))(this);
		}

		::System::Void MMPDJMAPJJG(::RPG::Client::OpenWorld::StreamingLightEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_MMPDJMAPJJG_OFFSET))(this, a1);
		}

		::System::Void AHGNCDFAFBM(::UnityEngine::Object* a1, ::RPG::Client::OpenWorld::StreamingLightEnum a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_AHGNCDFAFBM_OFFSET))(this, a1, a2);
		}

		::System::Void EGKNKHEANAN(::RPG::Client::OpenWorld::StreamingLightEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_EGKNKHEANAN_OFFSET))(this, a1);
		}

		::System::Void BDEJBBALMHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_BDEJBBALMHE_OFFSET))(this);
		}

		::System::Void PBJMDPEDKPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_PBJMDPEDKPI_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::RPG::Client::OpenWorld::StreamingLightEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void OIEFNJAFDLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_OIEFNJAFDLK_OFFSET))(this);
		}

		::System::Void PLGMDMJENBH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_PLGMDMJENBH_OFFSET))(this, a1);
		}

		::System::Void GDJEIGJGFHK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_GDJEIGJGFHK_OFFSET))(this, a1);
		}

		::System::Void ANLLGFAHBCM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_ANLLGFAHBCM_OFFSET))(this, a1);
		}

		::System::Void IHENOLBHGKN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_IHENOLBHGKN_OFFSET))(this, a1);
		}

		::System::Void OOCIOPDCKNK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_OOCIOPDCKNK_OFFSET))(this, a1);
		}

		::System::Void BLJKDGHGKIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_BLJKDGHGKIP_OFFSET))(this);
		}

		::System::Void KDCBKBJKGOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_KDCBKBJKGOP_OFFSET))(this);
		}

		::UnityEngine::Light* CEHOBKMKHAN(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_CEHOBKMKHAN_OFFSET))(this, a1);
		}

		::UnityEngine::Light* OJCHKAEEKDO(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_OJCHKAEEKDO_OFFSET))(this, a1);
		}

		::System::Void EGNFCEKLHOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_EGNFCEKLHOA_OFFSET))(this);
		}

		::System::Void IBPGDAGFELF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFABLJOCJ_IBPGDAGFELF_OFFSET))(this);
		}

	};
