#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BJNKANPCBEB;
class CDKKPFHIFLA;
class HAOCAPILIGF_NKKNFAPIBOL;
class MCCDDHMMJOP;
namespace RPG::Client { class BattleMonsterCustomizedWeaknessSource; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace UnityEngine { class Transform; }

#define LGGFBJCEGPG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BCA6690)
#define LGGFBJCEGPG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BCA67B0)
#define LGGFBJCEGPG_CPOINFFGEBC_OFFSET UNITYSDK_OFFSET(0x1BCA6150)
#define LGGFBJCEGPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCA68A0)
#define LGGFBJCEGPG_EHEPDFDHDCK_OFFSET UNITYSDK_OFFSET(0x1BCA5EE0)
#define LGGFBJCEGPG_IPGJIOKKEHO_OFFSET UNITYSDK_OFFSET(0x1BCA5990)
#define LGGFBJCEGPG_KDLKDJDPAAM_OFFSET UNITYSDK_OFFSET(0x1BCA65A0)
#define LGGFBJCEGPG_LELBGCPANNC_OFFSET UNITYSDK_OFFSET(0x1BCA6000)
#define LGGFBJCEGPG_LOFNKMINKEK_OFFSET UNITYSDK_OFFSET(0x1BCA64A0)
#define LGGFBJCEGPG_NBDOCFEFJKL_OFFSET UNITYSDK_OFFSET(0x1BCA6380)
#define LGGFBJCEGPG_NCHCJCGGIEP_OFFSET UNITYSDK_OFFSET(0x1BCA6200)
#define LGGFBJCEGPG_NGHIJFHLNFH_OFFSET UNITYSDK_OFFSET(0x1BCA58C0)
#define LGGFBJCEGPG_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1BCA57D0)
#define LGGFBJCEGPG_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1BCA5930)
#define LGGFBJCEGPG__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1BCA5B40)
#define LGGFBJCEGPG__ONBIND_OFFSET UNITYSDK_OFFSET(0x1BCA5CB0)
#define LGGFBJCEGPG__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1BCA5A90)
#define LGGFBJCEGPG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1BCA5E50)

inline static constexpr unsigned int LGGFBJCEGPG_TypeDefinitionIndex = 73819;

	class LGGFBJCEGPG : public ::FMPCODLIOLG
	{
	public:
		::BJNKANPCBEB* OOBBKONNJDO; // 0x60
		::HAOCAPILIGF_NKKNFAPIBOL* JFHCKNBBABN; // 0x68
		::UnityEngine::Transform* DCFCAKPKHAD; // 0x70
		::CDKKPFHIFLA* NMMGIDOGGGD; // 0x78
		::MCCDDHMMJOP* HLIJDBKEOEI; // 0x80
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x88
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x90
		::System::Boolean JFPMEMAHBKH; // 0x98
		::System::Boolean APIAMEAEJJF; // 0x99
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGFBJCEGPG_CTOR_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LGGFBJCEGPG_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGFBJCEGPG_ONRETURN_OFFSET))(this);
		}

		::System::Void IPGJIOKKEHO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGGFBJCEGPG_IPGJIOKKEHO_OFFSET))(this, a1);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + LGGFBJCEGPG__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGFBJCEGPG__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGFBJCEGPG__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGFBJCEGPG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void EHEPDFDHDCK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGGFBJCEGPG_EHEPDFDHDCK_OFFSET))(this, a1);
		}

		::System::Void LELBGCPANNC(::System::Tuple_2<::System::UInt32, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Tuple_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + LGGFBJCEGPG_LELBGCPANNC_OFFSET))(this, a1);
		}

		::System::Void NGHIJFHLNFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGGFBJCEGPG_NGHIJFHLNFH_OFFSET))(this, a1);
		}

		::System::Void NCHCJCGGIEP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGGFBJCEGPG_NCHCJCGGIEP_OFFSET))(this, a1);
		}

		::System::Void NBDOCFEFJKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGFBJCEGPG_NBDOCFEFJKL_OFFSET))(this);
		}

		::RPG::Client::BattleMonsterCustomizedWeaknessSource* CPOINFFGEBC()
		{
			return ((::RPG::Client::BattleMonsterCustomizedWeaknessSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGFBJCEGPG_CPOINFFGEBC_OFFSET))(this);
		}

		::System::Void LOFNKMINKEK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGGFBJCEGPG_LOFNKMINKEK_OFFSET))(this, a1);
		}

		::System::Void KDLKDJDPAAM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGGFBJCEGPG_KDLKDJDPAAM_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGFBJCEGPG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGFBJCEGPG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
