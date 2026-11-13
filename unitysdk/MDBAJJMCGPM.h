#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/ModelFlipOption.h"
#include "unitysdk/RPG/Client/PositionFollowOption.h"
#include "unitysdk/RPG/Client/RotationFollowOption.h"
#include "unitysdk/RPG/Client/ScaleFollowOption.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
class EDJNAGDJEKB;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class Effect_AfterImageNew; }
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define MDBAJJMCGPM_ACPPJEAKDMP_OFFSET UNITYSDK_OFFSET(0x183CFC00)
#define MDBAJJMCGPM_AFIFGBCMOOI_OFFSET UNITYSDK_OFFSET(0x183C6BB0)
#define MDBAJJMCGPM_AJEHEEEFOLO_OFFSET UNITYSDK_OFFSET(0x183C5730)
#define MDBAJJMCGPM_BEGJHMMDHNF_OFFSET UNITYSDK_OFFSET(0x183CFFB0)
#define MDBAJJMCGPM_CEDIFGBOOLE_OFFSET UNITYSDK_OFFSET(0x183C5610)
#define MDBAJJMCGPM_CTOR_OFFSET UNITYSDK_OFFSET(0x183D1350)
#define MDBAJJMCGPM_DCOGDKANHLN_OFFSET UNITYSDK_OFFSET(0x183CBDE0)
#define MDBAJJMCGPM_DJIIOPOPDCD_OFFSET UNITYSDK_OFFSET(0x183C5820)
#define MDBAJJMCGPM_DOAFDKCOJKE_OFFSET UNITYSDK_OFFSET(0x183C6170)
#define MDBAJJMCGPM_EKPBNHKILOC_OFFSET UNITYSDK_OFFSET(0x183CFD30)
#define MDBAJJMCGPM_ELHHGEICGMK_OFFSET UNITYSDK_OFFSET(0x183CF010)
#define MDBAJJMCGPM_ENPFGABBLOM_OFFSET UNITYSDK_OFFSET(0x183CE380)
#define MDBAJJMCGPM_FDMHENIEMDI_OFFSET UNITYSDK_OFFSET(0x183CCC60)
#define MDBAJJMCGPM_FHBJHNGJFMO_OFFSET UNITYSDK_OFFSET(0x183C6D90)
#define MDBAJJMCGPM_FJCKCPOPHKG_OFFSET UNITYSDK_OFFSET(0x183CAFB0)
#define MDBAJJMCGPM_GOGHMLGOIJA_OFFSET UNITYSDK_OFFSET(0x183CD000)
#define MDBAJJMCGPM_GPOGEPKMNMM_OFFSET UNITYSDK_OFFSET(0x183C6A80)
#define MDBAJJMCGPM_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x183CB4E0)
#define MDBAJJMCGPM_HIHIIEKMMJE_OFFSET UNITYSDK_OFFSET(0x183CF850)
#define MDBAJJMCGPM_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x183D1300)
#define MDBAJJMCGPM_IDDGHIANHMI_OFFSET UNITYSDK_OFFSET(0x183D0FA0)
#define MDBAJJMCGPM_IFJEFBFIGJM_OFFSET UNITYSDK_OFFSET(0x183CE130)
#define MDBAJJMCGPM_IMLBJKLIABO_OFFSET UNITYSDK_OFFSET(0x183CE260)
#define MDBAJJMCGPM_INLCGIBKMGF_OFFSET UNITYSDK_OFFSET(0x183CF680)
#define MDBAJJMCGPM_JBDDPFDLIBN_OFFSET UNITYSDK_OFFSET(0x183C5B80)
#define MDBAJJMCGPM_JBGJCKPLNHF_OFFSET UNITYSDK_OFFSET(0x183CAA00)
#define MDBAJJMCGPM_JDBGPLPOEPK_OFFSET UNITYSDK_OFFSET(0x183CDDA0)
#define MDBAJJMCGPM_JKIMPBIKCCJ_OFFSET UNITYSDK_OFFSET(0x183D1040)
#define MDBAJJMCGPM_JLOJNJGACNJ_OFFSET UNITYSDK_OFFSET(0x183CB910)
#define MDBAJJMCGPM_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x183C5D00)
#define MDBAJJMCGPM_KLJAFBKPKGB_OFFSET UNITYSDK_OFFSET(0x183CFE40)
#define MDBAJJMCGPM_KPGFLMLEONJ_OFFSET UNITYSDK_OFFSET(0x183C6770)
#define MDBAJJMCGPM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x183C5C90)
#define MDBAJJMCGPM_LAINLPPOMFJ_OFFSET UNITYSDK_OFFSET(0x183C64E0)
#define MDBAJJMCGPM_LCEKNNNGGOO_OFFSET UNITYSDK_OFFSET(0x183CE7C0)
#define MDBAJJMCGPM_MMAJAGGPCFB_OFFSET UNITYSDK_OFFSET(0x183C5510)
#define MDBAJJMCGPM_MPHAKAMIDNH_OFFSET UNITYSDK_OFFSET(0x183D0740)
#define MDBAJJMCGPM_NFODBDONHGD_OFFSET UNITYSDK_OFFSET(0x183D00B0)
#define MDBAJJMCGPM_NGJDAJKPBOE_OFFSET UNITYSDK_OFFSET(0x183CC5D0)
#define MDBAJJMCGPM_NKCKAGMKKNK_OFFSET UNITYSDK_OFFSET(0x183D04F0)
#define MDBAJJMCGPM_NNCOBKBDHFC_OFFSET UNITYSDK_OFFSET(0x183CB360)
#define MDBAJJMCGPM_OBJGJAGGIHH_OFFSET UNITYSDK_OFFSET(0x183CFA60)
#define MDBAJJMCGPM_ODEKCICJPGO_OFFSET UNITYSDK_OFFSET(0x183C6590)
#define MDBAJJMCGPM_OKDDNAFLDAN_OFFSET UNITYSDK_OFFSET(0x183CBBE0)
#define MDBAJJMCGPM_OMCHFCDMIPL_OFFSET UNITYSDK_OFFSET(0x183CB310)
#define MDBAJJMCGPM_OOKCPGAONPC_OFFSET UNITYSDK_OFFSET(0x183D07B0)
#define MDBAJJMCGPM_PFLIMPJFPKD_OFFSET UNITYSDK_OFFSET(0x183CE730)
#define MDBAJJMCGPM_PHFKPBFDKBG_OFFSET UNITYSDK_OFFSET(0x183D08F0)
#define MDBAJJMCGPM_PIOBJODIONP_OFFSET UNITYSDK_OFFSET(0x183CD8C0)
#define MDBAJJMCGPM_PLFDFKOMJFN_OFFSET UNITYSDK_OFFSET(0x183CE090)
#define MDBAJJMCGPM_POLNHOJNFCC_OFFSET UNITYSDK_OFFSET(0x183D0850)
#define MDBAJJMCGPM_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0x183CAE90)

inline static constexpr unsigned int MDBAJJMCGPM_TypeDefinitionIndex = 71836;

	class MDBAJJMCGPM : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::GameCore::CharacterModelComponent* MCEKMAPNCKL; // 0x18
		::UnityEngine::Rigidbody* LHDDEIIFHLI; // 0x20
		::EDJNAGDJEKB* PIAEMLOEJJC; // 0x28
		::RPG::Client::NotifyHandler* AFIPMMNJIJC; // 0x30
		::RPG::GameCore::GameEntity* ANFAHNJGAGG; // 0x38
		::UnityEngine::Transform* DMBMOHJLNEN; // 0x40
		::UnityEngine::Transform* AHHCHFFGONL; // 0x48
		::RPG::GameCore::TransformComponent* NJINMJCLJNE; // 0x50
		::RPG::Client::AttachPointMapping* FEFIGDAEGGI; // 0x58
		::RPG::Client::NotifyHandler* JAJKCJIDMPJ; // 0x60
		::UnityEngine::Transform* GLCKFPKNEIM; // 0x68
		::Il2CppArray<::RPG::Client::Effect_AfterImageNew*>* LOAACBNJABB; // 0x70
		::System::Collections::Generic::HashSet_1<::System::Int32>* CPHHELOGCCL; // 0x78
		::System::Collections::Generic::HashSet_1<::System::Int32>* JEJFNGENNPI; // 0x80
		::RPG::Client::NotifyHandler* OIJOCINPFLJ; // 0x88
		::UnityEngine::Vector3 MKJBIBGMPPI; // 0x90
		::System::Single HLPBJKOOKOF; // 0x9C
		::UnityEngine::Vector3 AMHNNDHJNKD; // 0xA0
		::UnityEngine::Vector3 MEKFHKIIPAN; // 0xAC
		::RPG::Client::RotationFollowOption HEPOCPPCOLI; // 0xB8
		::System::Single HPFGIPBAHCB; // 0xBC
		::System::Int32 ONJLDCPDKFD; // 0xC0
		::System::Single CBIIFEGEPIP; // 0xC4
		::UnityEngine::Vector3 MMCEMCHNAGD; // 0xC8
		::RPG::Client::ModelFlipOption AEKBJMKAMPL; // 0xD4
		::UnityEngine::Vector3 NMEBMMDAJKF; // 0xD8
		::UnityEngine::Vector3 NLABAOCHHCK; // 0xE4
		::UnityEngine::Vector3 CPEBEIGNAAK; // 0xF0
		::RPG::Client::ScaleFollowOption LABCJMACDDI; // 0xFC
		::UnityEngine::Quaternion HEMFBLEPEFB; // 0x100
		::RPG::Client::PositionFollowOption KMMPIAAPGKI; // 0x110
		::System::Boolean HJMADNNHBHC; // 0x114
		::System::Boolean LFOHPMLLAME; // 0x115
		::System::Boolean GPDGGNNBHJE; // 0x116
		::System::Boolean DPEJDIOGODF; // 0x117
		::UnityEngine::Vector3 CAPGLCKLIBK; // 0x118
		::System::Single CFCDBPNJPHN; // 0x124
		::System::Single IIFMKPHMONJ; // 0x128
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_CTOR_OFFSET))(this);
		}

		::System::Void MMAJAGGPCFB(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_MMAJAGGPCFB_OFFSET))(this, a1, a2);
		}

		::System::Void AJEHEEEFOLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_AJEHEEEFOLO_OFFSET))(this);
		}

		::System::Void CEDIFGBOOLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_CEDIFGBOOLE_OFFSET))(this);
		}

		::System::Void DJIIOPOPDCD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_DJIIOPOPDCD_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void KPGFLMLEONJ(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_KPGFLMLEONJ_OFFSET))(this, a1, a2);
		}

		::System::Void AFIFGBCMOOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_AFIFGBCMOOI_OFFSET))(this);
		}

		::System::Void JBDDPFDLIBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_JBDDPFDLIBN_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void OMCHFCDMIPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_OMCHFCDMIPL_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void GPOGEPKMNMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_GPOGEPKMNMM_OFFSET))(this);
		}

		::System::Boolean JLOJNJGACNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_JLOJNJGACNJ_OFFSET))(this);
		}

		::System::Void PIOBJODIONP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_PIOBJODIONP_OFFSET))(this);
		}

		::System::Void PLFDFKOMJFN(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_PLFDFKOMJFN_OFFSET))(this, a1);
		}

		::System::Boolean IFJEFBFIGJM(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_IFJEFBFIGJM_OFFSET))(this, a1);
		}

		::System::Boolean IMLBJKLIABO(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_IMLBJKLIABO_OFFSET))(this, a1);
		}

		::System::Void FJCKCPOPHKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_FJCKCPOPHKG_OFFSET))(this);
		}

		::System::Void DOAFDKCOJKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_DOAFDKCOJKE_OFFSET))(this);
		}

		::System::Void FHBJHNGJFMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_FHBJHNGJFMO_OFFSET))(this);
		}

		::System::Void NFODBDONHGD(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_NFODBDONHGD_OFFSET))(this, a1, a2);
		}

		::System::Void NKCKAGMKKNK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_NKCKAGMKKNK_OFFSET))(this, a1);
		}

		::System::Void MPHAKAMIDNH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_MPHAKAMIDNH_OFFSET))(this, a1);
		}

		::System::Void OOKCPGAONPC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_OOKCPGAONPC_OFFSET))(this, a1);
		}

		::System::Void DCOGDKANHLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_DCOGDKANHLN_OFFSET))(this);
		}

		::System::Void NNCOBKBDHFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_NNCOBKBDHFC_OFFSET))(this);
		}

		::System::Void POLNHOJNFCC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_POLNHOJNFCC_OFFSET))(this, a1);
		}

		::System::Void LAINLPPOMFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_LAINLPPOMFJ_OFFSET))(this);
		}

		::System::Void JDBGPLPOEPK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_JDBGPLPOEPK_OFFSET))(this, a1);
		}

		::System::Void NGJDAJKPBOE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_NGJDAJKPBOE_OFFSET))(this, a1);
		}

		static ::System::Single IDDGHIANHMI(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_IDDGHIANHMI_OFFSET))(a1, a2);
		}

		::System::Void GOGHMLGOIJA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_GOGHMLGOIJA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 PHFKPBFDKBG(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_PHFKPBFDKBG_OFFSET))(this, a1, a2);
		}

		::System::Void FDMHENIEMDI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_FDMHENIEMDI_OFFSET))(this, a1);
		}

		::System::Void JBGJCKPLNHF(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_JBGJCKPLNHF_OFFSET))(this, a1, a2);
		}

		::System::Void LCEKNNNGGOO(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_LCEKNNNGGOO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ELHHGEICGMK(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_ELHHGEICGMK_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 OBJGJAGGIHH(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_OBJGJAGGIHH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 INLCGIBKMGF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_INLCGIBKMGF_OFFSET))(this);
		}

		::UnityEngine::Vector3 HIHIIEKMMJE()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_HIHIIEKMMJE_OFFSET))(this);
		}

		::UnityEngine::Vector3 ENPFGABBLOM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_ENPFGABBLOM_OFFSET))(this);
		}

		::UnityEngine::Vector3 JKIMPBIKCCJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_JKIMPBIKCCJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 ACPPJEAKDMP(::UnityEngine::Camera* a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_ACPPJEAKDMP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 EKPBNHKILOC(::UnityEngine::Camera* a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_EKPBNHKILOC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 KLJAFBKPKGB(::UnityEngine::Camera* a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_KLJAFBKPKGB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 BEGJHMMDHNF(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_BEGJHMMDHNF_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::MonoEffectPluginFollow* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginFollow*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_HPNDIIPEFLJ_OFFSET))(this);
		}

		::System::Boolean PFLIMPJFPKD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_PFLIMPJFPKD_OFFSET))(this);
		}

		::UnityEngine::GameObject* OKDDNAFLDAN()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_OKDDNAFLDAN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* ODEKCICJPGO()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBAJJMCGPM_ODEKCICJPGO_OFFSET))(this);
		}

	};
