#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/RenderTestMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector4.h"
class CFNBLNHMHGO;
class COGBNIGPJPO;
class KLKMCNOECAL;
namespace RPG::Client { class DebugRenderTestCamera; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::GameCore { class RenderTestItemJson; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define NNJJMPGOGIE_ACAEPDOJKEO_OFFSET UNITYSDK_OFFSET(0xBCAD8E0)
#define NNJJMPGOGIE_AIDOEGGNHFH_OFFSET UNITYSDK_OFFSET(0xBCADAB0)
#define NNJJMPGOGIE_BGOFGIFAOMM_OFFSET UNITYSDK_OFFSET(0xBCAA070)
#define NNJJMPGOGIE_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCAE990)
#define NNJJMPGOGIE_CHECNGAOIPC_OFFSET UNITYSDK_OFFSET(0xBCAE210)
#define NNJJMPGOGIE_CTOR_OFFSET UNITYSDK_OFFSET(0xBCA9BB0)
#define NNJJMPGOGIE_DANFIEHCNIJ_OFFSET UNITYSDK_OFFSET(0xBCAC610)
#define NNJJMPGOGIE_DDAAGEDOEFO_OFFSET UNITYSDK_OFFSET(0xBCABFC0)
#define NNJJMPGOGIE_DEEACLBFABJ_OFFSET UNITYSDK_OFFSET(0xBCAAE60)
#define NNJJMPGOGIE_DFMEMBPDKPL_OFFSET UNITYSDK_OFFSET(0xBCAB640)
#define NNJJMPGOGIE_DGHCNFOOKGG_OFFSET UNITYSDK_OFFSET(0xBCACC00)
#define NNJJMPGOGIE_DHHCHEPOBHP_OFFSET UNITYSDK_OFFSET(0xBCAAC20)
#define NNJJMPGOGIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCA9C00)
#define NNJJMPGOGIE_DJHCKFMAKBB_OFFSET UNITYSDK_OFFSET(0xBCAD850)
#define NNJJMPGOGIE_DKIPDNHILME_OFFSET UNITYSDK_OFFSET(0xBCADC60)
#define NNJJMPGOGIE_DNNKHGLKLIA_OFFSET UNITYSDK_OFFSET(0xBCABA00)
#define NNJJMPGOGIE_EAHDGBEBEDD_OFFSET UNITYSDK_OFFSET(0xBCAB7F0)
#define NNJJMPGOGIE_EDGEHHFHMPE_OFFSET UNITYSDK_OFFSET(0xBCAC1C0)
#define NNJJMPGOGIE_ENTER_OFFSET UNITYSDK_OFFSET(0xBCAA1D0)
#define NNJJMPGOGIE_FDJDHEEIONE_OFFSET UNITYSDK_OFFSET(0xBCAAA60)
#define NNJJMPGOGIE_FOIMAIIBGNI_OFFSET UNITYSDK_OFFSET(0xBCADB00)
#define NNJJMPGOGIE_GELCGKAPJNH_OFFSET UNITYSDK_OFFSET(0xBCACFE0)
#define NNJJMPGOGIE_GETENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xBCAB7B0)
#define NNJJMPGOGIE_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xBCAB760)
#define NNJJMPGOGIE_GET_CAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xBCAE950)
#define NNJJMPGOGIE_GET_CURMODELPATH_OFFSET UNITYSDK_OFFSET(0xBCAE970)
#define NNJJMPGOGIE_GET_CURTARGETCHARACTER_OFFSET UNITYSDK_OFFSET(0xBCAE930)
#define NNJJMPGOGIE_HJJLMGHMLCD_OFFSET UNITYSDK_OFFSET(0xBCAD790)
#define NNJJMPGOGIE_ICGNKNPFEDG_OFFSET UNITYSDK_OFFSET(0xBCABCF0)
#define NNJJMPGOGIE_JBNHADDJMHK_OFFSET UNITYSDK_OFFSET(0xBCAB460)
#define NNJJMPGOGIE_JHHDCGPMLGC_OFFSET UNITYSDK_OFFSET(0xBCAC930)
#define NNJJMPGOGIE_JNBICDGBLPI_OFFSET UNITYSDK_OFFSET(0xBCADE90)
#define NNJJMPGOGIE_KDEAEDHAAAE_OFFSET UNITYSDK_OFFSET(0xBCAA890)
#define NNJJMPGOGIE_KGMHBKDJIPC_OFFSET UNITYSDK_OFFSET(0xBCAC0E0)
#define NNJJMPGOGIE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBCAB110)
#define NNJJMPGOGIE_LEAVE_OFFSET UNITYSDK_OFFSET(0xBCAB3E0)
#define NNJJMPGOGIE_LEDDCMCMKIK_OFFSET UNITYSDK_OFFSET(0xBCAAFD0)
#define NNJJMPGOGIE_LPEKCOALJJN_OFFSET UNITYSDK_OFFSET(0xBCAAD50)
#define NNJJMPGOGIE_MHNJMIJMDII_OFFSET UNITYSDK_OFFSET(0xBCAD3C0)
#define NNJJMPGOGIE_MIFACPLFHIN_OFFSET UNITYSDK_OFFSET(0xBCAD930)
#define NNJJMPGOGIE_NAOONNJFDLJ_OFFSET UNITYSDK_OFFSET(0xBCAE740)
#define NNJJMPGOGIE_NFCHIJLOLGB_OFFSET UNITYSDK_OFFSET(0xBCA9FC0)
#define NNJJMPGOGIE_NMLBPLPGMID_OFFSET UNITYSDK_OFFSET(0xBCABF00)
#define NNJJMPGOGIE_OCBLFOHMCNF_OFFSET UNITYSDK_OFFSET(0xBCAD300)
#define NNJJMPGOGIE_OFCKAIJCMCL_OFFSET UNITYSDK_OFFSET(0xBCAE570)
#define NNJJMPGOGIE_PAGNCICOHHO_OFFSET UNITYSDK_OFFSET(0xBCABE40)
#define NNJJMPGOGIE_PHEHJBGDPOA_OFFSET UNITYSDK_OFFSET(0xBCAB1F0)
#define NNJJMPGOGIE_SET_CAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xBCAE960)
#define NNJJMPGOGIE_SET_CURMODELPATH_OFFSET UNITYSDK_OFFSET(0xBCAE980)
#define NNJJMPGOGIE_SET_CURTARGETCHARACTER_OFFSET UNITYSDK_OFFSET(0xBCAE940)
#define NNJJMPGOGIE_TICK_OFFSET UNITYSDK_OFFSET(0xBCAB0B0)

inline static constexpr unsigned int NNJJMPGOGIE_TypeDefinitionIndex = 61204;

	class NNJJMPGOGIE : public ::System::Object
	{
	public:
		::System::String* LLFGDACBGNA; // 0x10
		::UnityEngine::Transform* _CurTargetCharacter_k__BackingField; // 0x18
		::System::String* _CurModelPath_k__BackingField; // 0x20
		::RPG::Client::EnvironmentSystem* NLKKPKJEAOO; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* KIBJBOOEHFI; // 0x30
		::KLKMCNOECAL* CHMDCHEENKP; // 0x38
		::COGBNIGPJPO* IMHDEODIHKG; // 0x40
		::KLKMCNOECAL* IKNJNPJJDHA; // 0x48
		::KLKMCNOECAL* BGAFEHHBIAD; // 0x50
		::RPG::Client::DebugRenderTestCamera* _CameraConfig_k__BackingField; // 0x58
		::KLKMCNOECAL* FMABDCGBGPO; // 0x60
		::COGBNIGPJPO* GGAPFMCAOHE; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* IFNDOBNPFPE; // 0x70
		::RPG::Client::PipelineCameraEngine* KMJJAHOHANH; // 0x78
		::UnityEngine::Renderer* MIPDBKJDIOL; // 0x80
		::KLKMCNOECAL* NPEDMLNCLKJ; // 0x88
		::UnityEngine::Object* DODLDCAEOJG; // 0x90
		::UnityEngine::Rendering::VolumeProfile* IFFDNKHINON; // 0x98
		::UnityEngine::Material* DMKEOGJFLPF; // 0xA0
		::System::Single ABPHCBIPFJN; // 0xA8
		::UnityEngine::Vector3 OIPGJLCMKAM; // 0xAC
		::UnityEngine::Vector3 GFMFKHKJMJB; // 0xB8
		::UnityEngine::Vector3 MOLOKMBIAFJ; // 0xC4
		::System::Int32 OPDDBKBGPHK; // 0xD0
		::UnityEngine::Vector3 DGIHLLKGKJE; // 0xD4
		::RPG::Client::RenderTestMode BGFNCEKPBCM; // 0xE0
		::System::Boolean JLNJGOEEHGK; // 0xE4
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 EKGBLLCBNDC; // 0xE8
		static ::System::String** StaticGet_AKMBNCAAONA()
		{
			return (::System::String**)UnitySDK::FromName("", "NNJJMPGOGIE")->GetStaticField(0x4E200);
		}

		static ::System::String** StaticGet_PDMKHABILMA()
		{
			return (::System::String**)UnitySDK::FromName("", "NNJJMPGOGIE")->GetStaticField(0x4E208);
		}

		static ::System::String** StaticGet_EDPFOPLPHHC()
		{
			return (::System::String**)UnitySDK::FromName("", "NNJJMPGOGIE")->GetStaticField(0x4E210);
		}

		static ::System::String** StaticGet_ICPEDOIKOAE()
		{
			return (::System::String**)UnitySDK::FromName("", "NNJJMPGOGIE")->GetStaticField(0x4E218);
		}

		static ::System::String** StaticGet_KBNGHIMLCCC()
		{
			return (::System::String**)UnitySDK::FromName("", "NNJJMPGOGIE")->GetStaticField(0x4E220);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNJJMPGOGIE_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_ENTER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_LEAVE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::RPG::Client::EnvironmentSystem* GetEnvironmentSystem()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_GETENVIRONMENTSYSTEM_OFFSET))(this);
		}

		::System::Void JBNHADDJMHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_JBNHADDJMHK_OFFSET))(this);
		}

		::System::Void EAHDGBEBEDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_EAHDGBEBEDD_OFFSET))(this);
		}

		::System::Void DHHCHEPOBHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_DHHCHEPOBHP_OFFSET))(this);
		}

		::System::Void DFMEMBPDKPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_DFMEMBPDKPL_OFFSET))(this);
		}

		::UnityEngine::GameObject* DNNKHGLKLIA(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_DNNKHGLKLIA_OFFSET))(this, a1, a2);
		}

		::System::Void PAGNCICOHHO(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_PAGNCICOHHO_OFFSET))(this, a1, a2);
		}

		::System::Void BGOFGIFAOMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_BGOFGIFAOMM_OFFSET))(this);
		}

		::System::Void NMLBPLPGMID(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_NMLBPLPGMID_OFFSET))(this, a1);
		}

		::System::Void DDAAGEDOEFO(::RPG::GameCore::RenderTestItemJson* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RenderTestItemJson*))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_DDAAGEDOEFO_OFFSET))(this, a1);
		}

		::System::Void NFCHIJLOLGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_NFCHIJLOLGB_OFFSET))(this);
		}

		::System::Void KGMHBKDJIPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_KGMHBKDJIPC_OFFSET))(this);
		}

		::UnityEngine::GameObject* EDGEHHFHMPE(::System::String* a1, ::System::Single a2, ::System::String* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_EDGEHHFHMPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OCBLFOHMCNF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_OCBLFOHMCNF_OFFSET))(this, a1);
		}

		::System::Void GELCGKAPJNH(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_GELCGKAPJNH_OFFSET))(this, a1);
		}

		::System::Void DANFIEHCNIJ(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_DANFIEHCNIJ_OFFSET))(this, a1);
		}

		::System::Void JHHDCGPMLGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_JHHDCGPMLGC_OFFSET))(this);
		}

		::System::Void DGHCNFOOKGG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_DGHCNFOOKGG_OFFSET))(this, a1);
		}

		::System::Void MHNJMIJMDII(::UnityEngine::GameObject* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_MHNJMIJMDII_OFFSET))(this, a1, a2);
		}

		::System::Void HJJLMGHMLCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_HJJLMGHMLCD_OFFSET))(this, a1);
		}

		::System::Void DJHCKFMAKBB(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_DJHCKFMAKBB_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* ACAEPDOJKEO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_ACAEPDOJKEO_OFFSET))(this);
		}

		::System::Void LPEKCOALJJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_LPEKCOALJJN_OFFSET))(this);
		}

		::System::Void DEEACLBFABJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_DEEACLBFABJ_OFFSET))(this);
		}

		::System::Void LEDDCMCMKIK(::RPG::Client::RenderTestMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RenderTestMode))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_LEDDCMCMKIK_OFFSET))(this, a1);
		}

		::System::Void PHEHJBGDPOA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_PHEHJBGDPOA_OFFSET))(this, a1);
		}

		::System::Void OFCKAIJCMCL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_OFCKAIJCMCL_OFFSET))(this, a1);
		}

		::System::Void NAOONNJFDLJ(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_NAOONNJFDLJ_OFFSET))(this, a1);
		}

		::System::Void DKIPDNHILME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_DKIPDNHILME_OFFSET))(this);
		}

		::System::Void AIDOEGGNHFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_AIDOEGGNHFH_OFFSET))(this);
		}

		::System::Void JNBICDGBLPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_JNBICDGBLPI_OFFSET))(this);
		}

		::System::Void MIFACPLFHIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_MIFACPLFHIN_OFFSET))(this);
		}

		::System::Void CHECNGAOIPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_CHECNGAOIPC_OFFSET))(this);
		}

		::System::Void FOIMAIIBGNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_FOIMAIIBGNI_OFFSET))(this);
		}

		::System::Void KDEAEDHAAAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_KDEAEDHAAAE_OFFSET))(this);
		}

		::System::Void ICGNKNPFEDG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_ICGNKNPFEDG_OFFSET))(this, a1);
		}

		::System::Void FDJDHEEIONE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_FDJDHEEIONE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_CurTargetCharacter()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_GET_CURTARGETCHARACTER_OFFSET))(this);
		}

		::System::Void set_CurTargetCharacter(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_SET_CURTARGETCHARACTER_OFFSET))(this, a1);
		}

		::RPG::Client::DebugRenderTestCamera* get_CameraConfig()
		{
			return ((::RPG::Client::DebugRenderTestCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_GET_CAMERACONFIG_OFFSET))(this);
		}

		::System::Void set_CameraConfig(::RPG::Client::DebugRenderTestCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DebugRenderTestCamera*))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_SET_CAMERACONFIG_OFFSET))(this, a1);
		}

		::System::String* get_CurModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_GET_CURMODELPATH_OFFSET))(this);
		}

		::System::Void set_CurModelPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNJJMPGOGIE_SET_CURMODELPATH_OFFSET))(this, a1);
		}

	};
