#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEntityGameObject_BKOCBDFEFGI.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOENTITYGAMEOBJECT_AJEEBNCNHMN_OFFSET UNITYSDK_OFFSET(0x180FF8C0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_EMPTY_OFFSET UNITYSDK_OFFSET(0x180FF1E0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x180FF2F0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_GET_ACTIVATIONSERIAL_OFFSET UNITYSDK_OFFSET(0x180FF160)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x180FF180)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_JHLPFCJDNHN_OFFSET UNITYSDK_OFFSET(0x180FF8B0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_JMPNKFCKKFG_OFFSET UNITYSDK_OFFSET(0x180FF920)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x180FF190)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x180FEFD0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x180FEE00)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x180FF090)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x180FEEC0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x180FF170)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_TRYGETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x180FF560)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_TRYGETOWNERSAFELY_OFFSET UNITYSDK_OFFSET(0x180FF420)
#define MOLEMOLE_MONOENTITYGAMEOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x180FF810)
#define MOLEMOLE_MONOENTITYGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x180FF7B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityGameObject_TypeDefinitionIndex = 54996;

	class MonoEntityGameObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityGameObject*>** StaticGet_LBKDPPFMADB()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityGameObject*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityGameObject_TypeDefinitionIndex)->GetStaticField(0x52110);
		}
		::System::Int32 _FLEAILJGNLL_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::MoleMole::Battle::Entity* LDLMPHEEKBG; // 0x20
		::MoleMole::MonoEntityGameObject_BKOCBDFEFGI MJJIEECLPBE; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_ONDISABLE_OFFSET))(this);
		}

		::System::Int32 get_ActivationSerial()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_GET_ACTIVATIONSERIAL_OFFSET))(this);
		}

		::System::Void set_ownerEntity(::MoleMole::Battle::Entity* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_SET_OWNERENTITY_OFFSET))(this, EGEGIMGMJHN);
		}

		::MoleMole::Battle::Entity* get_ownerEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_EMPTY_OFFSET))();
		}

		static ::MoleMole::MonoEntityGameObject* GetComponentSafely(::System::Int32 HLJEFIIDMFA)
		{
			return ((::MoleMole::MonoEntityGameObject*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_GETCOMPONENTSAFELY_OFFSET))(HLJEFIIDMFA);
		}

		static ::System::Boolean TryGetOwnerSafely(::System::Int32 HLJEFIIDMFA, ::MoleMole::MonoEntityGameObject*& JLOMPNLCAAB)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MoleMole::MonoEntityGameObject*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_TRYGETOWNERSAFELY_OFFSET))(HLJEFIIDMFA, JLOMPNLCAAB);
		}

		static ::System::Boolean TryGetComponentSafely(::System::Int32 HLJEFIIDMFA, ::MoleMole::EntityHandle& HPADNAEINPK)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_TRYGETCOMPONENTSAFELY_OFFSET))(HLJEFIIDMFA, HPADNAEINPK);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void JHLPFCJDNHN(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_JHLPFCJDNHN_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void AJEEBNCNHMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_AJEEBNCNHMN_OFFSET))(this);
		}

		::System::Void JMPNKFCKKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_JMPNKFCKKFG_OFFSET))(this);
		}
	};
}
