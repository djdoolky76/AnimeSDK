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

#define JFLFABLJOCJ_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x19335240)
#define JFLFABLJOCJ_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0x19335660)
#define JFLFABLJOCJ_ANLLGFAHBCM_OFFSET UNITYSDK_OFFSET(0x19336580)
#define JFLFABLJOCJ_APNMPJPDDGD_OFFSET UNITYSDK_OFFSET(0x193332A0)
#define JFLFABLJOCJ_BDEJBBALMHE_OFFSET UNITYSDK_OFFSET(0x19336500)
#define JFLFABLJOCJ_BLJKDGHGKIP_OFFSET UNITYSDK_OFFSET(0x19334A60)
#define JFLFABLJOCJ_BONOIPNPJDH_OFFSET UNITYSDK_OFFSET(0x19333320)
#define JFLFABLJOCJ_CEHOBKMKHAN_OFFSET UNITYSDK_OFFSET(0x19337ED0)
#define JFLFABLJOCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x193383B0)
#define JFLFABLJOCJ_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x19336330)
#define JFLFABLJOCJ_EGNFCEKLHOA_OFFSET UNITYSDK_OFFSET(0x19334D10)
#define JFLFABLJOCJ_GCICAABIGKP_OFFSET UNITYSDK_OFFSET(0x19335370)
#define JFLFABLJOCJ_GDJEIGJGFHK_OFFSET UNITYSDK_OFFSET(0x19337D20)
#define JFLFABLJOCJ_GJMDHHDJBIH_OFFSET UNITYSDK_OFFSET(0x193332B0)
#define JFLFABLJOCJ_IBPGDAGFELF_OFFSET UNITYSDK_OFFSET(0x19334F60)
#define JFLFABLJOCJ_IHENOLBHGKN_OFFSET UNITYSDK_OFFSET(0x19337A00)
#define JFLFABLJOCJ_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x19334C30)
#define JFLFABLJOCJ_KDCBKBJKGOP_OFFSET UNITYSDK_OFFSET(0x19337D90)
#define JFLFABLJOCJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19333420)
#define JFLFABLJOCJ_MMPDJMAPJJG_OFFSET UNITYSDK_OFFSET(0x19335400)
#define JFLFABLJOCJ_NGMILBPIGEJ_OFFSET UNITYSDK_OFFSET(0x19333290)
#define JFLFABLJOCJ_OIEFNJAFDLK_OFFSET UNITYSDK_OFFSET(0x19337C50)
#define JFLFABLJOCJ_OJCHKAEEKDO_OFFSET UNITYSDK_OFFSET(0x19338140)
#define JFLFABLJOCJ_OOCIOPDCKNK_OFFSET UNITYSDK_OFFSET(0x193375E0)
#define JFLFABLJOCJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x19333FE0)
#define JFLFABLJOCJ_PBJMDPEDKPI_OFFSET UNITYSDK_OFFSET(0x193378B0)
#define JFLFABLJOCJ_PLGMDMJENBH_OFFSET UNITYSDK_OFFSET(0x19337CA0)

inline static constexpr unsigned int JFLFABLJOCJ_TypeDefinitionIndex = 50646;

	class JFLFABLJOCJ : public ::BNIEAMHOKJE
	{
	public:
		::Il2CppArray<::RPG::Client::BillboardController*>* ALGKHNNCGPO; // 0x60
		::Il2CppArray<::RPG::Client::BillboardController*>* DHAOPOGODJM; // 0x68
		::Il2CppArray<::RPG::CustomRP::CustomAdditionalLightData*>* PAMFEBONMOI; // 0x70
		::UnityEngine::GameObject* LDCJBNOAAOI; // 0x78
		::Il2CppArray<::UnityEngine::ReflectionProbe*>* EDBADCKAJLL; // 0x80
		::Il2CppArray<::System::Single>* LOKMNCMLNCP; // 0x88
		::Il2CppArray<::CRPLightQualityGroupPlugin*>* GHMDEPHADOL; // 0x90
		::Il2CppArray<::System::Single>* EHEAOJNLPGI; // 0x98
		::Il2CppArray<::UnityEngine::Light*>* JHEBNGLNJJD; // 0xA0
		::Il2CppArray<::LocalAmbientVolume*>* BECHOGNNJJI; // 0xA8
		::UnityEngine::GameObject* IDIJJJJLDOO; // 0xB0
		::Il2CppArray<::VLB::VolumetricLightBeam*>* GOFAOHGFMCM; // 0xB8
		::Il2CppArray<::VLB::VolumetricLightBeam*>* BIFBOPAOHEH; // 0xC0
		::Il2CppArray<::CRPLightQualityGroupPlugin*>* LKHPJCPPICP; // 0xC8
		::System::Collections::Generic::List_1<::System::Int32>* OIBHDOMIGDO; // 0xD0
		::System::Collections::Generic::List_1<::System::Int32>* JHPIINONNCA; // 0xD8
		::Il2CppArray<::LocalFogSphereInstance*>* EKIFKGBKMCK; // 0xE0
		::Il2CppArray<::UnityEngine::ReflectionProbe*>* CKIMGPFEJFK; // 0xE8
		::Il2CppArray<::LocalFogSphereInstance*>* NFMAOLMMKOB; // 0xF0
		::Il2CppArray<::System::Boolean>* EKKOGGKBCBB; // 0xF8
		::RPG::Client::IAssetOperation* DBDIHPKHGGE; // 0x100
		::RPG::Client::Stage* PKLNPNKEJOO; // 0x108
		::System::Single EICNDHAEMHJ; // 0x110
		::System::Single LHDCLECAOEN; // 0x114
		::System::Single EFDENNLCMBJ; // 0x118
		::System::Single NHJCPBCIEAF; // 0x11C
		::RPG::Client::OpenWorld::StreamingLightEnum OCMJCFLLJAB; // 0x120
		::System::Single HHHFCGBEEMO; // 0x124
		::System::Boolean BKOJKLEEILP; // 0x128
		::System::Byte _padding0[0x3];
		::RPG::CustomRP::CustomLightQualityFilter AJMAPJOPFFP; // 0x12C
		static ::System::Boolean* StaticGet_MIDHLHBANDB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFLFABLJOCJ")->GetStaticField(0x14F80);
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
