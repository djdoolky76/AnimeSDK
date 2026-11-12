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

#define JFLFABLJOCJ_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB99BED0)
#define JFLFABLJOCJ_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0xB99C300)
#define JFLFABLJOCJ_ANLLGFAHBCM_OFFSET UNITYSDK_OFFSET(0xB99D240)
#define JFLFABLJOCJ_APNMPJPDDGD_OFFSET UNITYSDK_OFFSET(0xB999F10)
#define JFLFABLJOCJ_BDEJBBALMHE_OFFSET UNITYSDK_OFFSET(0xB99D1C0)
#define JFLFABLJOCJ_BLJKDGHGKIP_OFFSET UNITYSDK_OFFSET(0xB99B6F0)
#define JFLFABLJOCJ_BONOIPNPJDH_OFFSET UNITYSDK_OFFSET(0xB999F90)
#define JFLFABLJOCJ_CEHOBKMKHAN_OFFSET UNITYSDK_OFFSET(0xB99EBB0)
#define JFLFABLJOCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB99F070)
#define JFLFABLJOCJ_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0xB99CFF0)
#define JFLFABLJOCJ_EGNFCEKLHOA_OFFSET UNITYSDK_OFFSET(0xB99B9A0)
#define JFLFABLJOCJ_GCICAABIGKP_OFFSET UNITYSDK_OFFSET(0xB99C000)
#define JFLFABLJOCJ_GDJEIGJGFHK_OFFSET UNITYSDK_OFFSET(0xB99EA00)
#define JFLFABLJOCJ_GJMDHHDJBIH_OFFSET UNITYSDK_OFFSET(0xB999F20)
#define JFLFABLJOCJ_IBPGDAGFELF_OFFSET UNITYSDK_OFFSET(0xB99BBF0)
#define JFLFABLJOCJ_IHENOLBHGKN_OFFSET UNITYSDK_OFFSET(0xB99E6D0)
#define JFLFABLJOCJ_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xB99B8C0)
#define JFLFABLJOCJ_KDCBKBJKGOP_OFFSET UNITYSDK_OFFSET(0xB99EA70)
#define JFLFABLJOCJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB99A080)
#define JFLFABLJOCJ_MMPDJMAPJJG_OFFSET UNITYSDK_OFFSET(0xB99C090)
#define JFLFABLJOCJ_NGMILBPIGEJ_OFFSET UNITYSDK_OFFSET(0xB999F00)
#define JFLFABLJOCJ_OIEFNJAFDLK_OFFSET UNITYSDK_OFFSET(0xB99E930)
#define JFLFABLJOCJ_OJCHKAEEKDO_OFFSET UNITYSDK_OFFSET(0xB99EE10)
#define JFLFABLJOCJ_OOCIOPDCKNK_OFFSET UNITYSDK_OFFSET(0xB99E2B0)
#define JFLFABLJOCJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB99AC70)
#define JFLFABLJOCJ_PBJMDPEDKPI_OFFSET UNITYSDK_OFFSET(0xB99E580)
#define JFLFABLJOCJ_PLGMDMJENBH_OFFSET UNITYSDK_OFFSET(0xB99E980)

inline static constexpr unsigned int JFLFABLJOCJ_TypeDefinitionIndex = 50646;

	class JFLFABLJOCJ : public ::BNIEAMHOKJE
	{
	public:
		::RPG::Client::Stage* PKLNPNKEJOO; // 0x60
		::Il2CppArray<::UnityEngine::Light*>* JHEBNGLNJJD; // 0x68
		::Il2CppArray<::System::Single>* EHEAOJNLPGI; // 0x70
		::Il2CppArray<::System::Boolean>* EKKOGGKBCBB; // 0x78
		::Il2CppArray<::UnityEngine::ReflectionProbe*>* CKIMGPFEJFK; // 0x80
		::Il2CppArray<::VLB::VolumetricLightBeam*>* BIFBOPAOHEH; // 0x88
		::Il2CppArray<::VLB::VolumetricLightBeam*>* GOFAOHGFMCM; // 0x90
		::System::Collections::Generic::List_1<::System::Int32>* OIBHDOMIGDO; // 0x98
		::Il2CppArray<::CRPLightQualityGroupPlugin*>* LKHPJCPPICP; // 0xA0
		::Il2CppArray<::RPG::Client::BillboardController*>* ALGKHNNCGPO; // 0xA8
		::UnityEngine::GameObject* IDIJJJJLDOO; // 0xB0
		::Il2CppArray<::CRPLightQualityGroupPlugin*>* GHMDEPHADOL; // 0xB8
		::Il2CppArray<::LocalAmbientVolume*>* BECHOGNNJJI; // 0xC0
		::Il2CppArray<::System::Single>* LOKMNCMLNCP; // 0xC8
		::System::Collections::Generic::List_1<::System::Int32>* JHPIINONNCA; // 0xD0
		::RPG::Client::IAssetOperation* DBDIHPKHGGE; // 0xD8
		::UnityEngine::GameObject* LDCJBNOAAOI; // 0xE0
		::Il2CppArray<::LocalFogSphereInstance*>* EKIFKGBKMCK; // 0xE8
		::Il2CppArray<::RPG::CustomRP::CustomAdditionalLightData*>* PAMFEBONMOI; // 0xF0
		::Il2CppArray<::LocalFogSphereInstance*>* NFMAOLMMKOB; // 0xF8
		::Il2CppArray<::UnityEngine::ReflectionProbe*>* EDBADCKAJLL; // 0x100
		::Il2CppArray<::RPG::Client::BillboardController*>* DHAOPOGODJM; // 0x108
		::System::Single EFDENNLCMBJ; // 0x110
		::System::Single HHHFCGBEEMO; // 0x114
		::RPG::Client::OpenWorld::StreamingLightEnum OCMJCFLLJAB; // 0x118
		::System::Boolean BKOJKLEEILP; // 0x11C
		::System::Byte _padding0[0x3];
		::System::Single EICNDHAEMHJ; // 0x120
		::System::Single LHDCLECAOEN; // 0x124
		::System::Single NHJCPBCIEAF; // 0x128
		::RPG::CustomRP::CustomLightQualityFilter AJMAPJOPFFP; // 0x12C
		static ::System::Boolean* StaticGet_MIDHLHBANDB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFLFABLJOCJ")->GetStaticField(0x15170);
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
