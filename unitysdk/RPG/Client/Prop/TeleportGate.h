#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateInfo.h"
class AEHGMMGLPAB;
class DBMDNNBIOAI;
class EKFMIDBJDIA;
class MKEPJNNPDNP;
class PKLHDDGKKOC;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::Client::Prop { class TeleportGatePuzzleBoard; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_TELEPORTGATE_ACTIVEGATE_OFFSET UNITYSDK_OFFSET(0xDDB37F0)
#define RPG_CLIENT_PROP_TELEPORTGATE_ALGBFIAIMDJ_OFFSET UNITYSDK_OFFSET(0xDDB4C00)
#define RPG_CLIENT_PROP_TELEPORTGATE_APPFPDHNPIN_OFFSET UNITYSDK_OFFSET(0xDDB3A50)
#define RPG_CLIENT_PROP_TELEPORTGATE_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDB5200)
#define RPG_CLIENT_PROP_TELEPORTGATE_CHJPKENLALE_OFFSET UNITYSDK_OFFSET(0xDDB4F30)
#define RPG_CLIENT_PROP_TELEPORTGATE_CHKJEGOMFAC_OFFSET UNITYSDK_OFFSET(0xDDB2AC0)
#define RPG_CLIENT_PROP_TELEPORTGATE_CMKFLMPBOBO_OFFSET UNITYSDK_OFFSET(0xDDB3190)
#define RPG_CLIENT_PROP_TELEPORTGATE_CMNLKLJAPKH_OFFSET UNITYSDK_OFFSET(0xDDB3BE0)
#define RPG_CLIENT_PROP_TELEPORTGATE_CTOR_OFFSET UNITYSDK_OFFSET(0xDDB5180)
#define RPG_CLIENT_PROP_TELEPORTGATE_DGFPGHDBHEO_OFFSET UNITYSDK_OFFSET(0xDDB4C80)
#define RPG_CLIENT_PROP_TELEPORTGATE_DISABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xDDB35F0)
#define RPG_CLIENT_PROP_TELEPORTGATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDB2C30)
#define RPG_CLIENT_PROP_TELEPORTGATE_DOROTATE_OFFSET UNITYSDK_OFFSET(0xDDB3900)
#define RPG_CLIENT_PROP_TELEPORTGATE_EGMPJBFIAOF_OFFSET UNITYSDK_OFFSET(0xDDB29E0)
#define RPG_CLIENT_PROP_TELEPORTGATE_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xDDB3650)
#define RPG_CLIENT_PROP_TELEPORTGATE_FDBHNPOPGML_OFFSET UNITYSDK_OFFSET(0xDDB4500)
#define RPG_CLIENT_PROP_TELEPORTGATE_FFOACLJOLJK_OFFSET UNITYSDK_OFFSET(0xDDB3790)
#define RPG_CLIENT_PROP_TELEPORTGATE_FHAIFKOHCAH_OFFSET UNITYSDK_OFFSET(0xDDB48B0)
#define RPG_CLIENT_PROP_TELEPORTGATE_FJHEIEFJGGM_OFFSET UNITYSDK_OFFSET(0xDDB4CD0)
#define RPG_CLIENT_PROP_TELEPORTGATE_GETPROP_OFFSET UNITYSDK_OFFSET(0xDDB3B50)
#define RPG_CLIENT_PROP_TELEPORTGATE_GET_FODBIDAIMROTATION_OFFSET UNITYSDK_OFFSET(0xDDB5170)
#define RPG_CLIENT_PROP_TELEPORTGATE_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0xDDB5150)
#define RPG_CLIENT_PROP_TELEPORTGATE_GET_ISGATEACTIVE_OFFSET UNITYSDK_OFFSET(0xDDB5130)
#define RPG_CLIENT_PROP_TELEPORTGATE_INITGATE_OFFSET UNITYSDK_OFFSET(0xDDB2260)
#define RPG_CLIENT_PROP_TELEPORTGATE_JADCIAHCPHE_OFFSET UNITYSDK_OFFSET(0xDDB3B90)
#define RPG_CLIENT_PROP_TELEPORTGATE_LECJKBALDGA_OFFSET UNITYSDK_OFFSET(0xDDB4970)
#define RPG_CLIENT_PROP_TELEPORTGATE_LGJLKGFPFKF_OFFSET UNITYSDK_OFFSET(0xDDB5030)
#define RPG_CLIENT_PROP_TELEPORTGATE_LOEDNMMDDIK_OFFSET UNITYSDK_OFFSET(0xDDB4010)
#define RPG_CLIENT_PROP_TELEPORTGATE_MCAELMFPMNG_OFFSET UNITYSDK_OFFSET(0xDDB44B0)
#define RPG_CLIENT_PROP_TELEPORTGATE_SETFORBIDAIMROTATION_OFFSET UNITYSDK_OFFSET(0xDDB3B00)
#define RPG_CLIENT_PROP_TELEPORTGATE_SETGATECONNECTED_OFFSET UNITYSDK_OFFSET(0xDDB3870)
#define RPG_CLIENT_PROP_TELEPORTGATE_SETGATEISOLATED_OFFSET UNITYSDK_OFFSET(0xDDB35A0)
#define RPG_CLIENT_PROP_TELEPORTGATE_SET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0xDDB5160)
#define RPG_CLIENT_PROP_TELEPORTGATE_SET_ISGATEACTIVE_OFFSET UNITYSDK_OFFSET(0xDDB5140)
#define RPG_CLIENT_PROP_TELEPORTGATE_TICK_OFFSET UNITYSDK_OFFSET(0xDDB34F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGate_TypeDefinitionIndex = 78887;

	class TeleportGate : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsGateActive_k__BackingField; // 0x18
		::System::Boolean _IsConnected_k__BackingField; // 0x19
		::System::Byte _padding0[0x6];
		::UnityEngine::Transform* TeleportEndPositionObject; // 0x20
		::System::Single FLHOEGBFPJB; // 0x28
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Single>* PAEPLKIIICL; // 0x30
		::RPG::Client::Prop::TeleportGatePuzzleBoard* COAMCKILKPH; // 0x38
		::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x40
		::System::Int32 OOJJEAJHBLG; // 0x48
		::System::Byte _padding2[0x4];
		::RPG::GameCore::GameEntity* CMNJDMKPPIA; // 0x50
		::UnityEngine::Transform* DHDOBALIDKP; // 0x58
		::RPG::GameCore::CharacterVisibleComponent* BILIDIDJJDN; // 0x60
		::RPG::GameCore::AdventureCharacterController* MNBAPCPACFP; // 0x68
		::MKEPJNNPDNP* FMBMOLLKDHK; // 0x70
		::MKEPJNNPDNP* IJDFGKGOJKJ; // 0x78
		::AEHGMMGLPAB* HKJNGDKDMNN; // 0x80
		::BansheeGz::BGSpline::Components::BGCcMath* GCBACPNDCCP; // 0x88
		::System::Boolean MEKAIIEIDHC; // 0x90
		::System::Boolean CBBNEJAMPDP; // 0x91
		::System::Boolean EGNEMDJGBEM; // 0x92
		::System::Boolean HGABOBEIIGE; // 0x93
		::System::Boolean DNGJBKHIJHK; // 0x94
		::System::Byte _padding3[0x3];
		::RPG::GameCore::TransformComponent* BALCPGFDOFI; // 0x98
		::PKLHDDGKKOC* LANIADMDJOD; // 0xA0
		::System::Boolean BNBMIBGDDNE; // 0xA8
		::System::Byte _padding4[0x7];
		::System::String* EIAFFLBFMCL; // 0xB0
		::System::String* APJNCPLNAMJ; // 0xB8
		::System::String* BNPAPLGFBNH; // 0xC0
		::System::Int32 DNOPAFEDOEI; // 0xC8
		::System::Int32 IJCCHHGOCOF; // 0xCC
		::System::Boolean CMILBEKNKPF; // 0xD0
		::System::Byte _padding5[0x3];
		::System::Single PJJLEJDPNHI; // 0xD4
		::DBMDNNBIOAI* GNJNMKMFDPN; // 0xD8
		::System::Boolean HOJMOGKJBCP; // 0xE0
		::System::Byte _padding6[0x3];
		::System::Single FNFJHLEFNDF; // 0xE4
		::UnityEngine::Coroutine* KLDPBIPCEEP; // 0xE8
		::UnityEngine::Coroutine* JLLAFDIKHLH; // 0xF0
		::UnityEngine::Vector3 MICPOHNHJNL; // 0xF8
		::UnityEngine::Quaternion EPGGMLJOAAA; // 0x104
		::System::Boolean OCPFGIJAKPK; // 0x114
		static ::System::String** StaticGet_StopTeleportingSoundEvent()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "TeleportGate")->GetStaticField(0x51CD0);
		}

		static ::System::String** StaticGet_TeleportingSoundEvent()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "TeleportGate")->GetStaticField(0x51CD8);
		}

		static ::System::String** StaticGet_RotateSoundEvent()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "TeleportGate")->GetStaticField(0x51CE0);
		}

		static ::System::String** StaticGet_TeleportEndSoundEvent()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "TeleportGate")->GetStaticField(0x51CE8);
		}

		// static const ::System::Object MMFGJJKEGPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_CCTOR_OFFSET))();
		}

		::System::Void InitGate(::RPG::Client::Prop::TeleportGatePuzzleBoard* a1, ::RPG::GameCore::PropComponent* a2, ::System::Int32 a3, ::RPG::Client::Prop::TeleportGateInfo a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::TeleportGatePuzzleBoard*, ::RPG::GameCore::PropComponent*, ::System::Int32, ::RPG::Client::Prop::TeleportGateInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_INITGATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_TICK_OFFSET))(this, a1);
		}

		::System::Void SetGateIsolated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_SETGATEISOLATED_OFFSET))(this, a1);
		}

		::System::Void DisableTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_DISABLETRIGGER_OFFSET))(this);
		}

		::System::Void EnableTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_ENABLETRIGGER_OFFSET))(this);
		}

		::System::Void ActiveGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_ACTIVEGATE_OFFSET))(this);
		}

		::System::Void SetGateConnected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_SETGATECONNECTED_OFFSET))(this, a1);
		}

		::System::Void DoRotate(::System::Single a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_DOROTATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetForbidAimRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_SETFORBIDAIMROTATION_OFFSET))(this);
		}

		::RPG::GameCore::PropComponent* GetProp()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_GETPROP_OFFSET))(this);
		}

		::System::Void JADCIAHCPHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_JADCIAHCPHE_OFFSET))(this, a1);
		}

		::System::Void EGMPJBFIAOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_EGMPJBFIAOF_OFFSET))(this);
		}

		::System::Void CMNLKLJAPKH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_CMNLKLJAPKH_OFFSET))(this, a1);
		}

		::System::Void LOEDNMMDDIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_LOEDNMMDDIK_OFFSET))(this);
		}

		::System::Void MCAELMFPMNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_MCAELMFPMNG_OFFSET))(this);
		}

		::System::Void CHKJEGOMFAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_CHKJEGOMFAC_OFFSET))(this);
		}

		::System::Boolean FFOACLJOLJK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_FFOACLJOLJK_OFFSET))(this);
		}

		::System::Collections::IEnumerator* APPFPDHNPIN(::System::Single a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_APPFPDHNPIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FDBHNPOPGML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_FDBHNPOPGML_OFFSET))(this);
		}

		::System::Void FHAIFKOHCAH(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_FHAIFKOHCAH_OFFSET))(this, a1);
		}

		::System::Single DGFPGHDBHEO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_DGFPGHDBHEO_OFFSET))(this);
		}

		::System::Void FJHEIEFJGGM(::UnityEngine::Transform* a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_FJHEIEFJGGM_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* ALGBFIAIMDJ()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_ALGBFIAIMDJ_OFFSET))(this);
		}

		::System::Void CMKFLMPBOBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_CMKFLMPBOBO_OFFSET))(this);
		}

		::System::Void LECJKBALDGA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_LECJKBALDGA_OFFSET))(this, a1);
		}

		::System::Void CHJPKENLALE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_CHJPKENLALE_OFFSET))(this);
		}

		::System::Void LGJLKGFPFKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_LGJLKGFPFKF_OFFSET))(this);
		}

		::System::Boolean get_IsGateActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_GET_ISGATEACTIVE_OFFSET))(this);
		}

		::System::Void set_IsGateActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_SET_ISGATEACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_GET_ISCONNECTED_OFFSET))(this);
		}

		::System::Void set_IsConnected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_SET_ISCONNECTED_OFFSET))(this, a1);
		}

		::System::Boolean get_FodbidAimRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_GET_FODBIDAIMROTATION_OFFSET))(this);
		}

	};
}
