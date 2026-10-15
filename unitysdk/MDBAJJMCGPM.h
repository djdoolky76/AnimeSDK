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

#define MDBAJJMCGPM_ACPPJEAKDMP_OFFSET UNITYSDK_OFFSET(0xB892B90)
#define MDBAJJMCGPM_AFIFGBCMOOI_OFFSET UNITYSDK_OFFSET(0xB889CD0)
#define MDBAJJMCGPM_AJEHEEEFOLO_OFFSET UNITYSDK_OFFSET(0xB888850)
#define MDBAJJMCGPM_BEGJHMMDHNF_OFFSET UNITYSDK_OFFSET(0xB892F40)
#define MDBAJJMCGPM_CEDIFGBOOLE_OFFSET UNITYSDK_OFFSET(0xB888730)
#define MDBAJJMCGPM_CTOR_OFFSET UNITYSDK_OFFSET(0xB894230)
#define MDBAJJMCGPM_DCOGDKANHLN_OFFSET UNITYSDK_OFFSET(0xB88ED80)
#define MDBAJJMCGPM_DJIIOPOPDCD_OFFSET UNITYSDK_OFFSET(0xB888940)
#define MDBAJJMCGPM_DOAFDKCOJKE_OFFSET UNITYSDK_OFFSET(0xB889290)
#define MDBAJJMCGPM_EKPBNHKILOC_OFFSET UNITYSDK_OFFSET(0xB892CC0)
#define MDBAJJMCGPM_ELHHGEICGMK_OFFSET UNITYSDK_OFFSET(0xB891FA0)
#define MDBAJJMCGPM_ENPFGABBLOM_OFFSET UNITYSDK_OFFSET(0xB891310)
#define MDBAJJMCGPM_FDMHENIEMDI_OFFSET UNITYSDK_OFFSET(0xB88FBF0)
#define MDBAJJMCGPM_FHBJHNGJFMO_OFFSET UNITYSDK_OFFSET(0xB889EB0)
#define MDBAJJMCGPM_FJCKCPOPHKG_OFFSET UNITYSDK_OFFSET(0xB88DF60)
#define MDBAJJMCGPM_GOGHMLGOIJA_OFFSET UNITYSDK_OFFSET(0xB88FF90)
#define MDBAJJMCGPM_GPOGEPKMNMM_OFFSET UNITYSDK_OFFSET(0xB889BA0)
#define MDBAJJMCGPM_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xB88E490)
#define MDBAJJMCGPM_HIHIIEKMMJE_OFFSET UNITYSDK_OFFSET(0xB8927E0)
#define MDBAJJMCGPM_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB8941E0)
#define MDBAJJMCGPM_IDDGHIANHMI_OFFSET UNITYSDK_OFFSET(0xB893E80)
#define MDBAJJMCGPM_IFJEFBFIGJM_OFFSET UNITYSDK_OFFSET(0xB8910C0)
#define MDBAJJMCGPM_IMLBJKLIABO_OFFSET UNITYSDK_OFFSET(0xB8911F0)
#define MDBAJJMCGPM_INLCGIBKMGF_OFFSET UNITYSDK_OFFSET(0xB892610)
#define MDBAJJMCGPM_JBDDPFDLIBN_OFFSET UNITYSDK_OFFSET(0xB888CA0)
#define MDBAJJMCGPM_JBGJCKPLNHF_OFFSET UNITYSDK_OFFSET(0xB88D9B0)
#define MDBAJJMCGPM_JDBGPLPOEPK_OFFSET UNITYSDK_OFFSET(0xB890D30)
#define MDBAJJMCGPM_JKIMPBIKCCJ_OFFSET UNITYSDK_OFFSET(0xB893F20)
#define MDBAJJMCGPM_JLOJNJGACNJ_OFFSET UNITYSDK_OFFSET(0xB88E8B0)
#define MDBAJJMCGPM_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xB888E20)
#define MDBAJJMCGPM_KLJAFBKPKGB_OFFSET UNITYSDK_OFFSET(0xB892DD0)
#define MDBAJJMCGPM_KPGFLMLEONJ_OFFSET UNITYSDK_OFFSET(0xB889890)
#define MDBAJJMCGPM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB888DB0)
#define MDBAJJMCGPM_LAINLPPOMFJ_OFFSET UNITYSDK_OFFSET(0xB889600)
#define MDBAJJMCGPM_LCEKNNNGGOO_OFFSET UNITYSDK_OFFSET(0xB891750)
#define MDBAJJMCGPM_MMAJAGGPCFB_OFFSET UNITYSDK_OFFSET(0xB888630)
#define MDBAJJMCGPM_MPHAKAMIDNH_OFFSET UNITYSDK_OFFSET(0xB8936C0)
#define MDBAJJMCGPM_NFODBDONHGD_OFFSET UNITYSDK_OFFSET(0xB893040)
#define MDBAJJMCGPM_NGJDAJKPBOE_OFFSET UNITYSDK_OFFSET(0xB88F560)
#define MDBAJJMCGPM_NKCKAGMKKNK_OFFSET UNITYSDK_OFFSET(0xB893480)
#define MDBAJJMCGPM_NNCOBKBDHFC_OFFSET UNITYSDK_OFFSET(0xB88E310)
#define MDBAJJMCGPM_OBJGJAGGIHH_OFFSET UNITYSDK_OFFSET(0xB8929F0)
#define MDBAJJMCGPM_ODEKCICJPGO_OFFSET UNITYSDK_OFFSET(0xB8896B0)
#define MDBAJJMCGPM_OKDDNAFLDAN_OFFSET UNITYSDK_OFFSET(0xB88EB80)
#define MDBAJJMCGPM_OMCHFCDMIPL_OFFSET UNITYSDK_OFFSET(0xB88E2C0)
#define MDBAJJMCGPM_OOKCPGAONPC_OFFSET UNITYSDK_OFFSET(0xB893730)
#define MDBAJJMCGPM_PFLIMPJFPKD_OFFSET UNITYSDK_OFFSET(0xB8916C0)
#define MDBAJJMCGPM_PHFKPBFDKBG_OFFSET UNITYSDK_OFFSET(0xB8937D0)
#define MDBAJJMCGPM_PIOBJODIONP_OFFSET UNITYSDK_OFFSET(0xB890850)
#define MDBAJJMCGPM_PLFDFKOMJFN_OFFSET UNITYSDK_OFFSET(0xB891020)
#define MDBAJJMCGPM_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xB88DE40)

inline static constexpr unsigned int MDBAJJMCGPM_TypeDefinitionIndex = 69877;

	class MDBAJJMCGPM : public ::RPG::Client::BehaviorBase
	{
	public:
		::Il2CppArray<::RPG::Client::Effect_AfterImageNew*>* LOAACBNJABB; // 0x18
		::EDJNAGDJEKB* PIAEMLOEJJC; // 0x20
		::RPG::Client::NotifyHandler* JAJKCJIDMPJ; // 0x28
		::RPG::Client::AttachPointMapping* FEFIGDAEGGI; // 0x30
		::UnityEngine::Rigidbody* LHDDEIIFHLI; // 0x38
		::RPG::Client::NotifyHandler* AFIPMMNJIJC; // 0x40
		::UnityEngine::Transform* AHHCHFFGONL; // 0x48
		::System::Collections::Generic::HashSet_1<::System::Int32>* CPHHELOGCCL; // 0x50
		::UnityEngine::Transform* GLCKFPKNEIM; // 0x58
		::UnityEngine::Transform* DMBMOHJLNEN; // 0x60
		::RPG::GameCore::GameEntity* ANFAHNJGAGG; // 0x68
		::RPG::Client::NotifyHandler* OIJOCINPFLJ; // 0x70
		::RPG::GameCore::CharacterModelComponent* MCEKMAPNCKL; // 0x78
		::System::Collections::Generic::HashSet_1<::System::Int32>* JEJFNGENNPI; // 0x80
		::RPG::GameCore::TransformComponent* NJINMJCLJNE; // 0x88
		::System::Single IIFMKPHMONJ; // 0x90
		::UnityEngine::Vector3 CPEBEIGNAAK; // 0x94
		::RPG::Client::RotationFollowOption HEPOCPPCOLI; // 0xA0
		::UnityEngine::Vector3 MKJBIBGMPPI; // 0xA4
		::UnityEngine::Vector3 CAPGLCKLIBK; // 0xB0
		::UnityEngine::Quaternion HEMFBLEPEFB; // 0xBC
		::System::Single HPFGIPBAHCB; // 0xCC
		::UnityEngine::Vector3 MEKFHKIIPAN; // 0xD0
		::System::Single HLPBJKOOKOF; // 0xDC
		::System::Boolean GPDGGNNBHJE; // 0xE0
		::System::Boolean HJMADNNHBHC; // 0xE1
		::System::Boolean LFOHPMLLAME; // 0xE2
		::System::Boolean DPEJDIOGODF; // 0xE3
		::UnityEngine::Vector3 NMEBMMDAJKF; // 0xE4
		::RPG::Client::PositionFollowOption KMMPIAAPGKI; // 0xF0
		::UnityEngine::Vector3 AMHNNDHJNKD; // 0xF4
		::UnityEngine::Vector3 MMCEMCHNAGD; // 0x100
		::RPG::Client::ModelFlipOption AEKBJMKAMPL; // 0x10C
		::RPG::Client::ScaleFollowOption LABCJMACDDI; // 0x110
		::UnityEngine::Vector3 NLABAOCHHCK; // 0x114
		::System::Single CFCDBPNJPHN; // 0x120
		::System::Int32 ONJLDCPDKFD; // 0x124
		::System::Single CBIIFEGEPIP; // 0x128
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
