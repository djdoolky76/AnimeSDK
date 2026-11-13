#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CFNALNFLBIN;
namespace RPG::Client { class IRIManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }

#define KPBDLOOGGBK_ACPEBJJPILP_OFFSET UNITYSDK_OFFSET(0x191112C0)
#define KPBDLOOGGBK_AIANMJMABNL_OFFSET UNITYSDK_OFFSET(0x19116D80)
#define KPBDLOOGGBK_AMGFJNKKBOD_OFFSET UNITYSDK_OFFSET(0x19118050)
#define KPBDLOOGGBK_BGBABAHKBNL_OFFSET UNITYSDK_OFFSET(0x19117AF0)
#define KPBDLOOGGBK_BJKDFJCDMIM_OFFSET UNITYSDK_OFFSET(0x191175F0)
#define KPBDLOOGGBK_BOOGDAEMDEO_OFFSET UNITYSDK_OFFSET(0x19116DE0)
#define KPBDLOOGGBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x19119250)
#define KPBDLOOGGBK_CTOR_OFFSET UNITYSDK_OFFSET(0x19119240)
#define KPBDLOOGGBK_DLEPECFFLOJ_OFFSET UNITYSDK_OFFSET(0x19114A10)
#define KPBDLOOGGBK_ECCBGLFNEIA_OFFSET UNITYSDK_OFFSET(0x19114FC0)
#define KPBDLOOGGBK_ECNNJKGBDJJ_OFFSET UNITYSDK_OFFSET(0x19116CA0)
#define KPBDLOOGGBK_EFFBPCOJJGP_OFFSET UNITYSDK_OFFSET(0x19118F00)
#define KPBDLOOGGBK_EJJOMHNMLFG_1_OFFSET UNITYSDK_OFFSET(0x19114830)
#define KPBDLOOGGBK_EJJOMHNMLFG_2_OFFSET UNITYSDK_OFFSET(0x19114DB0)
#define KPBDLOOGGBK_EJJOMHNMLFG_OFFSET UNITYSDK_OFFSET(0x191146C0)
#define KPBDLOOGGBK_FCAJEMLNODI_OFFSET UNITYSDK_OFFSET(0x191113C0)
#define KPBDLOOGGBK_FCJPALOBKOH_1_OFFSET UNITYSDK_OFFSET(0x19113A10)
#define KPBDLOOGGBK_FCJPALOBKOH_2_OFFSET UNITYSDK_OFFSET(0x19114490)
#define KPBDLOOGGBK_FCJPALOBKOH_OFFSET UNITYSDK_OFFSET(0x191138A0)
#define KPBDLOOGGBK_GET_NAMEPREFIX_OFFSET UNITYSDK_OFFSET(0x19111200)
#define KPBDLOOGGBK_GJDBOPHICFC_OFFSET UNITYSDK_OFFSET(0x191172A0)
#define KPBDLOOGGBK_HJMNKNMBGPG_1_OFFSET UNITYSDK_OFFSET(0x19111860)
#define KPBDLOOGGBK_HJMNKNMBGPG_2_OFFSET UNITYSDK_OFFSET(0x19113680)
#define KPBDLOOGGBK_HJMNKNMBGPG_OFFSET UNITYSDK_OFFSET(0x191116F0)
#define KPBDLOOGGBK_INDCOPIHODG_OFFSET UNITYSDK_OFFSET(0x19116530)
#define KPBDLOOGGBK_JIGKPMKKFGC_OFFSET UNITYSDK_OFFSET(0x19118150)
#define KPBDLOOGGBK_JLDCGMDKLHF_OFFSET UNITYSDK_OFFSET(0x19112110)
#define KPBDLOOGGBK_KEEEJIFKGGF_OFFSET UNITYSDK_OFFSET(0x19116D10)
#define KPBDLOOGGBK_KFNJKKKOBFI_OFFSET UNITYSDK_OFFSET(0x19115920)
#define KPBDLOOGGBK_KPHOIGLJBIM_OFFSET UNITYSDK_OFFSET(0x19116850)
#define KPBDLOOGGBK_LIFHNOGONKG_OFFSET UNITYSDK_OFFSET(0x19116E40)
#define KPBDLOOGGBK_LPLHPHJJPNB_OFFSET UNITYSDK_OFFSET(0x19111A70)
#define KPBDLOOGGBK_MPLCGOHBIAL_OFFSET UNITYSDK_OFFSET(0x191111A0)
#define KPBDLOOGGBK_NMALIBEFDHB_OFFSET UNITYSDK_OFFSET(0x19113050)
#define KPBDLOOGGBK_NOCNEGECGMN_OFFSET UNITYSDK_OFFSET(0x19113C10)
#define KPBDLOOGGBK_PHHAKCBNKON_OFFSET UNITYSDK_OFFSET(0x19111340)
#define KPBDLOOGGBK_PIBBPFDIDLN_OFFSET UNITYSDK_OFFSET(0x19111440)
#define KPBDLOOGGBK_SET_NAMEPREFIX_OFFSET UNITYSDK_OFFSET(0x19111260)

inline static constexpr unsigned int KPBDLOOGGBK_TypeDefinitionIndex = 48508;

	class KPBDLOOGGBK : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__NamePrefix_k__BackingField()
		{
			return (::System::String**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A7D0);
		}

		static ::UnityEngine::GameObject** StaticGet_GFCPIDAPCDA()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A7D8);
		}

		static ::UnityEngine::Cubemap** StaticGet_DKOIHLOONGC()
		{
			return (::UnityEngine::Cubemap**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A7E0);
		}

		static ::UnityEngine::GameObject** StaticGet_GBOMGICCGFD()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A7E8);
		}

		static ::UnityEngine::GameObject** StaticGet_IEOHDABDBNH()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A7F0);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_EIKALCLPBII()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A7F8);
		}

		static ::UnityEngine::GameObject** StaticGet_ELGBEFHDFFJ()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A800);
		}

		static ::UnityEngine::Texture3D** StaticGet_DOPMFGCCPHN()
		{
			return (::UnityEngine::Texture3D**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A808);
		}

		static ::RPG::Client::IRIManager** StaticGet_KJEGMPNCGEH()
		{
			return (::RPG::Client::IRIManager**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A810);
		}

		static ::UnityEngine::Material** StaticGet_OLFGMFHAFOH()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A818);
		}

		static ::UnityEngine::GameObject** StaticGet_EPAFDKJAIJM()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A820);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_MHGKHFDKJNF()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A828);
		}

		static ::UnityEngine::Texture2D** StaticGet_DAJDFLBAFID()
		{
			return (::UnityEngine::Texture2D**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A830);
		}

		static ::CFNALNFLBIN** StaticGet_JOOGPAFFGNM()
		{
			return (::CFNALNFLBIN**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A838);
		}

		static ::System::String** StaticGet_KBMCPCFJCGC()
		{
			return (::System::String**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A840);
		}

		static ::UnityEngine::GameObject** StaticGet_PJBHBLKMMCA()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A848);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_NCIGENDIFEM()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A850);
		}

		static ::UnityEngine::GameObject** StaticGet_JIIHDNLJMLH()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x6A858);
		}

		static ::System::Single* StaticGet_CMEOMFPMDMD()
		{
			return (::System::Single*)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x15010);
		}

		static ::System::Int32* StaticGet_JJBLNIPFIOG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x15014);
		}

		static ::UnityEngine::Bounds* StaticGet_BMKHMEDKICK()
		{
			return (::UnityEngine::Bounds*)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x15018);
		}

		static ::UnityEngine::Vector3* StaticGet_MMAPJAOMPAC()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x15030);
		}

		static ::System::Int32* StaticGet_OJLGNPNFEDM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KPBDLOOGGBK")->GetStaticField(0x1503C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPBDLOOGGBK_CCTOR_OFFSET))();
		}

		static ::UnityEngine::Material* MPLCGOHBIAL()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + KPBDLOOGGBK_MPLCGOHBIAL_OFFSET))();
		}

		static ::System::String* get_NamePrefix()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + KPBDLOOGGBK_GET_NAMEPREFIX_OFFSET))();
		}

		static ::System::Void set_NamePrefix(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_SET_NAMEPREFIX_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>* ACPEBJJPILP()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)())((::PBYTE)hIl2Cpp + KPBDLOOGGBK_ACPEBJJPILP_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* PHHAKCBNKON()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)())((::PBYTE)hIl2Cpp + KPBDLOOGGBK_PHHAKCBNKON_OFFSET))();
		}

		static ::System::Void FCAJEMLNODI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_FCAJEMLNODI_OFFSET))(a1);
		}

		static ::System::Void HJMNKNMBGPG(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_HJMNKNMBGPG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void HJMNKNMBGPG_1(::UnityEngine::Shader* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_HJMNKNMBGPG_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void HJMNKNMBGPG_2(::UnityEngine::Material* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_HJMNKNMBGPG_2_OFFSET))(a1, a2);
		}

		static ::System::Void FCJPALOBKOH(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_FCJPALOBKOH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void FCJPALOBKOH_1(::UnityEngine::Shader* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_FCJPALOBKOH_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void FCJPALOBKOH_2(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_FCJPALOBKOH_2_OFFSET))(a1, a2);
		}

		static ::System::Void EJJOMHNMLFG(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_EJJOMHNMLFG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void EJJOMHNMLFG_1(::UnityEngine::Shader* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_EJJOMHNMLFG_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void EJJOMHNMLFG_2(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_EJJOMHNMLFG_2_OFFSET))(a1, a2);
		}

		static ::System::Void ECCBGLFNEIA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_ECCBGLFNEIA_OFFSET))(a1);
		}

		static ::System::Void INDCOPIHODG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_INDCOPIHODG_OFFSET))(a1);
		}

		static ::System::Void KPHOIGLJBIM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_KPHOIGLJBIM_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 ECNNJKGBDJJ()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + KPBDLOOGGBK_ECNNJKGBDJJ_OFFSET))();
		}

		static ::System::Void KEEEJIFKGGF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_KEEEJIFKGGF_OFFSET))(a1);
		}

		static ::System::Single AIANMJMABNL()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KPBDLOOGGBK_AIANMJMABNL_OFFSET))();
		}

		static ::System::Void BOOGDAEMDEO(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_BOOGDAEMDEO_OFFSET))(a1);
		}

		static ::System::Void LIFHNOGONKG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_LIFHNOGONKG_OFFSET))(a1);
		}

		static ::UnityEngine::Bounds GJDBOPHICFC(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_GJDBOPHICFC_OFFSET))(a1);
		}

		static ::System::Single BJKDFJCDMIM(::UnityEngine::Camera* a1, ::UnityEngine::Bounds a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::UnityEngine::Camera*, ::UnityEngine::Bounds, ::System::Single))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_BJKDFJCDMIM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BGBABAHKBNL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPBDLOOGGBK_BGBABAHKBNL_OFFSET))();
		}

		static ::System::Void PIBBPFDIDLN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_PIBBPFDIDLN_OFFSET))(a1);
		}

		static ::System::Void AMGFJNKKBOD(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_AMGFJNKKBOD_OFFSET))(a1, a2);
		}

		static ::System::Void LPLHPHJJPNB(::UnityEngine::Material* a1, ::Il2CppArray<::System::String*>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_LPLHPHJJPNB_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Mesh* KFNJKKKOBFI(::System::Int32 a1)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Int32))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_KFNJKKKOBFI_OFFSET))(a1);
		}

		static ::System::Void DLEPECFFLOJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_DLEPECFFLOJ_OFFSET))(a1);
		}

		static ::System::Void NOCNEGECGMN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_NOCNEGECGMN_OFFSET))(a1);
		}

		static ::System::Void JLDCGMDKLHF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_JLDCGMDKLHF_OFFSET))(a1);
		}

		static ::UnityEngine::Mesh* JIGKPMKKFGC(::UnityEngine::Mesh* a1)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_JIGKPMKKFGC_OFFSET))(a1);
		}

		static ::System::Void NMALIBEFDHB(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_NMALIBEFDHB_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::IRIManager* EFFBPCOJJGP()
		{
			return ((::RPG::Client::IRIManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBDLOOGGBK_EFFBPCOJJGP_OFFSET))(this);
		}

	};
