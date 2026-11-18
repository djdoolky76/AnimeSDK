#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNOBFDOEGGJ.h"
#include "unitysdk/MoleMole/MonoBangBooAutoBattleSlot_JNMCOIBPBAK.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

namespace MoleMole { class MonoGamepadSelectable; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_BLHDIEEAJHH_OFFSET UNITYSDK_OFFSET(0x16265F70)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_DHMGCFFJOMI_OFFSET UNITYSDK_OFFSET(0x16265090)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_FMHNMJPKDPD_OFFSET UNITYSDK_OFFSET(0x16265FC0)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_GETALL_OFFSET UNITYSDK_OFFSET(0x16265CF0)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_JMJKGOPDMDI_OFFSET UNITYSDK_OFFSET(0x16265EE0)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_SETEFF_OFFSET UNITYSDK_OFFSET(0x162658A0)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_SETISOVERLIMIT_OFFSET UNITYSDK_OFFSET(0x16265C90)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_SETVALIDCOLOR_OFFSET UNITYSDK_OFFSET(0x16265C30)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_START_OFFSET UNITYSDK_OFFSET(0x16264F90)
#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x16265E30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBangBooAutoBattleSlot_TypeDefinitionIndex = 44139;

	class MonoBangBooAutoBattleSlot : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::DNOBFDOEGGJ SlotType; // 0x38
		::System::Int32 X; // 0x3C
		::System::Int32 Y; // 0x40
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* ValidEff; // 0x48
		::UnityEngine::Transform* HighLightEff; // 0x50
		::UnityEngine::Transform* AttackRangeEff; // 0x58
		::UnityEngine::Transform* RecommendEff; // 0x60
		::UnityEngine::Transform* OverrideLimitEff; // 0x68
		::UnityEngine::Transform* NonDragEff; // 0x70
		::UnityEngine::Transform* FullEff; // 0x78
		::System::Boolean FJPPPMOFFNG; // 0x80
		::System::Boolean LBJKEICLNBO; // 0x81
		::System::Byte _padding1[0x2];
		::MoleMole::MonoBangBooAutoBattleSlot_JNMCOIBPBAK JGNLBIMIBLD; // 0x84
		::MoleMole::MonoGamepadSelectable* KKHDBJIPMII; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* AKCOJPKAPHK; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_START_OFFSET))(this);
		}

		::System::Void SetEff(::MoleMole::MonoBangBooAutoBattleSlot_JNMCOIBPBAK FCPCLIJNDLA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoBangBooAutoBattleSlot_JNMCOIBPBAK))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_SETEFF_OFFSET))(this, FCPCLIJNDLA);
		}

		::System::Void SetValidColor(::System::Boolean FJPPPMOFFNG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_SETVALIDCOLOR_OFFSET))(this, FJPPPMOFFNG);
		}

		::System::Void SetIsOverLimit(::System::Boolean IMBKINHGHJN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_SETISOVERLIMIT_OFFSET))(this, IMBKINHGHJN);
		}

		static ::Il2CppArray<::MoleMole::MonoBangBooAutoBattleSlot*>* GetAll()
		{
			return ((::Il2CppArray<::MoleMole::MonoBangBooAutoBattleSlot*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_GETALL_OFFSET))();
		}

		static ::System::Boolean JMJKGOPDMDI(::MoleMole::MonoBangBooAutoBattleSlot* OMPHGGCEIBD)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoBangBooAutoBattleSlot*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_JMJKGOPDMDI_OFFSET))(OMPHGGCEIBD);
		}

		static ::System::Boolean BLHDIEEAJHH(::MoleMole::MonoBangBooAutoBattleSlot_JNMCOIBPBAK GHNAFBPJNKB, ::MoleMole::MonoBangBooAutoBattleSlot_JNMCOIBPBAK HODAIDNDKHD)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoBangBooAutoBattleSlot_JNMCOIBPBAK, ::MoleMole::MonoBangBooAutoBattleSlot_JNMCOIBPBAK))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_BLHDIEEAJHH_OFFSET))(GHNAFBPJNKB, HODAIDNDKHD);
		}

		static ::System::Boolean FMHNMJPKDPD(::MoleMole::MonoBangBooAutoBattleSlot_JNMCOIBPBAK GHNAFBPJNKB, ::MoleMole::MonoBangBooAutoBattleSlot_JNMCOIBPBAK LJHOPIIGOHI)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoBangBooAutoBattleSlot_JNMCOIBPBAK, ::MoleMole::MonoBangBooAutoBattleSlot_JNMCOIBPBAK))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_FMHNMJPKDPD_OFFSET))(GHNAFBPJNKB, LJHOPIIGOHI);
		}

		::System::Void DHMGCFFJOMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_DHMGCFFJOMI_OFFSET))(this);
		}
	};
}
