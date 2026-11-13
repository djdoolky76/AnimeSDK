#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHIDGDHOJEF.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
class DHGOEMIJPCI;
class EKFMIDBJDIA;
class FGDEDBPGHKJ;
class HBFNLNPLILA;
class HCFLDDIEHJE;
class JANDIGIAGOJ;
class JMHICJJKKCI;
class MEFACEELDDF;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::GameCore { class RtBattleMode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define DHGOEMIJPCI_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0x18E99F30)
#define DHGOEMIJPCI_CAKHPECADON_OFFSET UNITYSDK_OFFSET(0x1ADEAFC0)
#define DHGOEMIJPCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x18E9A1B0)
#define DHGOEMIJPCI_CTOR_OFFSET UNITYSDK_OFFSET(0x18E9A000)
#define DHGOEMIJPCI_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x18E98CA0)
#define DHGOEMIJPCI_DBKGDEIABPA_OFFSET UNITYSDK_OFFSET(0x1ADEBB90)
#define DHGOEMIJPCI_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x18E99E60)
#define DHGOEMIJPCI_DHFNAGPMDED_OFFSET UNITYSDK_OFFSET(0x18E98A50)
#define DHGOEMIJPCI_DIGPANBGONA_OFFSET UNITYSDK_OFFSET(0x18E985A0)
#define DHGOEMIJPCI_DJFIJFDCCDA_OFFSET UNITYSDK_OFFSET(0x18E97570)
#define DHGOEMIJPCI_DJJKKPANMBG_OFFSET UNITYSDK_OFFSET(0x18E98150)
#define DHGOEMIJPCI_DJPEOLFIFOA_OFFSET UNITYSDK_OFFSET(0x1ADEC510)
#define DHGOEMIJPCI_DLBDBIHEHLD_OFFSET UNITYSDK_OFFSET(0x18E981C0)
#define DHGOEMIJPCI_EDJJDCFPBJN_OFFSET UNITYSDK_OFFSET(0x1ADEA500)
#define DHGOEMIJPCI_ELDMGFBOHLN_OFFSET UNITYSDK_OFFSET(0x1ADEBAD0)
#define DHGOEMIJPCI_FADBKHANGFN_OFFSET UNITYSDK_OFFSET(0x1ADEB290)
#define DHGOEMIJPCI_FANHCABNFFA_OFFSET UNITYSDK_OFFSET(0x18E97A20)
#define DHGOEMIJPCI_FJMALMHLCEH_OFFSET UNITYSDK_OFFSET(0x18E97BF0)
#define DHGOEMIJPCI_FMNNMFLMKGO_OFFSET UNITYSDK_OFFSET(0x18E97B90)
#define DHGOEMIJPCI_FNNGANGJKKF_OFFSET UNITYSDK_OFFSET(0x1ADEC680)
#define DHGOEMIJPCI_GETENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x18E99F80)
#define DHGOEMIJPCI_GHDAAHEKKHE_OFFSET UNITYSDK_OFFSET(0x1ADEAE90)
#define DHGOEMIJPCI_GJPLHANEHHI_OFFSET UNITYSDK_OFFSET(0x18E98380)
#define DHGOEMIJPCI_GKKKBNMFMBF_OFFSET UNITYSDK_OFFSET(0x18E977C0)
#define DHGOEMIJPCI_GOJPDKOJOLO_OFFSET UNITYSDK_OFFSET(0x1ADEC5C0)
#define DHGOEMIJPCI_HDDPGKLDBIK_OFFSET UNITYSDK_OFFSET(0x18E990E0)
#define DHGOEMIJPCI_HHPNEJMBACH_OFFSET UNITYSDK_OFFSET(0x18E97AF0)
#define DHGOEMIJPCI_HKDGCEHJEDC_OFFSET UNITYSDK_OFFSET(0x18E98C90)
#define DHGOEMIJPCI_HPNAOLFGHDO_OFFSET UNITYSDK_OFFSET(0x1ADEADE0)
#define DHGOEMIJPCI_IEGKLLNGDFE_OFFSET UNITYSDK_OFFSET(0x1ADEB280)
#define DHGOEMIJPCI_ILNEPHOPKPA_OFFSET UNITYSDK_OFFSET(0x1ADEB260)
#define DHGOEMIJPCI_INDADJKEEBK_OFFSET UNITYSDK_OFFSET(0x18E97940)
#define DHGOEMIJPCI_JCKJCFDDLHA_OFFSET UNITYSDK_OFFSET(0x1ADEB670)
#define DHGOEMIJPCI_JJAOKILKKJB_OFFSET UNITYSDK_OFFSET(0x18E99B90)
#define DHGOEMIJPCI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x18E99DC0)
#define DHGOEMIJPCI_JMLHDGHGPHO_OFFSET UNITYSDK_OFFSET(0x18E98550)
#define DHGOEMIJPCI_KBELPNDNAIL_OFFSET UNITYSDK_OFFSET(0x1ADEAE30)
#define DHGOEMIJPCI_KNIMHHKCHKP_OFFSET UNITYSDK_OFFSET(0x1ADEB130)
#define DHGOEMIJPCI_LAHDLFBEONE_OFFSET UNITYSDK_OFFSET(0x1ADEB300)
#define DHGOEMIJPCI_LKFNJJICPCA_OFFSET UNITYSDK_OFFSET(0x1ADEB2B0)
#define DHGOEMIJPCI_MEENLJHJAGC_OFFSET UNITYSDK_OFFSET(0x1ADEB9D0)
#define DHGOEMIJPCI_MFPDHPAJCID_OFFSET UNITYSDK_OFFSET(0x18E97F30)
#define DHGOEMIJPCI_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x18E99370)
#define DHGOEMIJPCI_OEGMJHIONFD_OFFSET UNITYSDK_OFFSET(0x18E978F0)
#define DHGOEMIJPCI_OFDDFDGKNPJ_OFFSET UNITYSDK_OFFSET(0x1ADEBA80)
#define DHGOEMIJPCI_OGLBPPGMILJ_OFFSET UNITYSDK_OFFSET(0x1ADEB2C0)
#define DHGOEMIJPCI_OJBDGGLPJHJ_OFFSET UNITYSDK_OFFSET(0x18E975C0)
#define DHGOEMIJPCI_OPGLAKFNMLD_OFFSET UNITYSDK_OFFSET(0x18E99FF0)
#define DHGOEMIJPCI_PCHDHLPOKEO_OFFSET UNITYSDK_OFFSET(0x18E979D0)
#define DHGOEMIJPCI_PDICBPKMHAD_OFFSET UNITYSDK_OFFSET(0x1ADEB2F0)
#define DHGOEMIJPCI_PMLLOFFOEIK_OFFSET UNITYSDK_OFFSET(0x18E97990)

inline static constexpr unsigned int DHGOEMIJPCI_TypeDefinitionIndex = 75386;

	class DHGOEMIJPCI : public ::JHIDGDHOJEF
	{
	public:
		::HCFLDDIEHJE* LHKNONOLDBJ; // 0x38
		::MEFACEELDDF* JNBBEENMKNE; // 0x40
		::JMHICJJKKCI* HHCECGELKHL; // 0x48
		::UnityEngine::GameObject* CDGIMLBELCA; // 0x50
		::UnityEngine::Mesh* GLFKKKLHJKM; // 0x58
		::Il2CppArray<::UnityEngine::Material*>* PJLHHKLFLBO; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IVec2, ::System::Object*>* HMABFGHCCCO; // 0x68
		::RPG::Client::PipelineCameraEngine* KMJJAHOHANH; // 0x70
		::RPG::GameCore::RtBattleMode* BHJDJDPLCLP; // 0x78
		::FGDEDBPGHKJ* BODEOKNONMM; // 0x80
		::UnityEngine::Vector3 KHNGLLEPLDE; // 0x88
		::UnityEngine::Quaternion BCBMOEEFFOD; // 0x94
		::UnityEngine::Matrix4x4 HIKJLOGAFFF; // 0xA4
		::UnityEngine::Vector3 KAFNLFHNEFH; // 0xE4
		::UnityEngine::Matrix4x4 OGDJFPCDAJL; // 0xF0
		::UnityEngine::Quaternion PHOJPKJCPMM; // 0x130
		static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_IMJNFFNJAHM()
		{
			return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)UnitySDK::FromName("", "DHGOEMIJPCI")->GetStaticField(0x676E0);
		}

		static ::System::Boolean* StaticGet_KAKMGOEDOCB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DHGOEMIJPCI")->GetStaticField(0x146C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHGOEMIJPCI_CCTOR_OFFSET))();
		}

		::System::Void EDJJDCFPBJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_EDJJDCFPBJN_OFFSET))(this);
		}

		::System::Void HPNAOLFGHDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_HPNAOLFGHDO_OFFSET))(this);
		}

		::System::Boolean KBELPNDNAIL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_KBELPNDNAIL_OFFSET))(this);
		}

		::System::Void GHDAAHEKKHE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_GHDAAHEKKHE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CAKHPECADON(::RPG::GameCore::FixVec3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_CAKHPECADON_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixVec3 KNIMHHKCHKP(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_KNIMHHKCHKP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ILNEPHOPKPA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_ILNEPHOPKPA_OFFSET))(this);
		}

		::UnityEngine::Quaternion IEGKLLNGDFE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_IEGKLLNGDFE_OFFSET))(this);
		}

		::UnityEngine::Vector3 FADBKHANGFN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_FADBKHANGFN_OFFSET))(this);
		}

		::UnityEngine::Quaternion LKFNJJICPCA()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_LKFNJJICPCA_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 OGLBPPGMILJ()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_OGLBPPGMILJ_OFFSET))(this);
		}

		::UnityEngine::GameObject* PDICBPKMHAD()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_PDICBPKMHAD_OFFSET))(this);
		}

		::System::Void LAHDLFBEONE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_LAHDLFBEONE_OFFSET))(this);
		}

		::System::Void JCKJCFDDLHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_JCKJCFDDLHA_OFFSET))(this);
		}

		::System::Void MEENLJHJAGC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_MEENLJHJAGC_OFFSET))(this, a1);
		}

		::System::Void OFDDFDGKNPJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_OFDDFDGKNPJ_OFFSET))(this, a1);
		}

		::System::Void ELDMGFBOHLN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_ELDMGFBOHLN_OFFSET))(this, a1);
		}

		::System::Void DBKGDEIABPA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_DBKGDEIABPA_OFFSET))(this, a1);
		}

		::System::Void DJPEOLFIFOA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_DJPEOLFIFOA_OFFSET))(this, a1);
		}

		::System::Void GOJPDKOJOLO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_GOJPDKOJOLO_OFFSET))(this, a1);
		}

		::System::Void FNNGANGJKKF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_FNNGANGJKKF_OFFSET))(this, a1);
		}

		::System::Void DJFIJFDCCDA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_DJFIJFDCCDA_OFFSET))(this, a1);
		}

		::System::Void OJBDGGLPJHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_OJBDGGLPJHJ_OFFSET))(this);
		}

		::System::Void GKKKBNMFMBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_GKKKBNMFMBF_OFFSET))(this, a1);
		}

		::System::Void OEGMJHIONFD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_OEGMJHIONFD_OFFSET))(this, a1);
		}

		::System::Void INDADJKEEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_INDADJKEEBK_OFFSET))(this);
		}

		::System::Void PMLLOFFOEIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_PMLLOFFOEIK_OFFSET))(this);
		}

		::System::Void PCHDHLPOKEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_PCHDHLPOKEO_OFFSET))(this);
		}

		::System::Void HHPNEJMBACH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_HHPNEJMBACH_OFFSET))(this);
		}

		::System::Void MFPDHPAJCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_MFPDHPAJCID_OFFSET))(this);
		}

		::System::Void DJJKKPANMBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_DJJKKPANMBG_OFFSET))(this);
		}

		::System::Void DLBDBIHEHLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_DLBDBIHEHLD_OFFSET))(this);
		}

		::System::Void FANHCABNFFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_FANHCABNFFA_OFFSET))(this);
		}

		::System::Void GJPLHANEHHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_GJPLHANEHHI_OFFSET))(this);
		}

		::System::Void FJMALMHLCEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_FJMALMHLCEH_OFFSET))(this);
		}

		::System::Void JMLHDGHGPHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_JMLHDGHGPHO_OFFSET))(this);
		}

		::System::Void DIGPANBGONA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_DIGPANBGONA_OFFSET))(this);
		}

		::System::Void FMNNMFLMKGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_FMNNMFLMKGO_OFFSET))(this);
		}

		::System::Void DHFNAGPMDED(::JANDIGIAGOJ* a1, ::HBFNLNPLILA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JANDIGIAGOJ*, ::HBFNLNPLILA*))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_DHFNAGPMDED_OFFSET))(this, a1, a2);
		}

		::MEFACEELDDF* HKDGCEHJEDC()
		{
			return ((::MEFACEELDDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_HKDGCEHJEDC_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_NLBNJGKAMII_OFFSET))(this);
		}

		static ::System::Void HDDPGKLDBIK(::DHGOEMIJPCI* a1)
		{
			return ((::System::Void(*)(::DHGOEMIJPCI*))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_HDDPGKLDBIK_OFFSET))(a1);
		}

		::System::Boolean JJAOKILKKJB(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_JJAOKILKKJB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void AHGNCDFAFBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_AHGNCDFAFBM_OFFSET))(this);
		}

		::RPG::Client::EnvironmentSystem* GetEnvironmentSystem()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_GETENVIRONMENTSYSTEM_OFFSET))(this);
		}

		::RPG::GameCore::RtBattleMode* OPGLAKFNMLD()
		{
			return ((::RPG::GameCore::RtBattleMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_OPGLAKFNMLD_OFFSET))(this);
		}

	};
