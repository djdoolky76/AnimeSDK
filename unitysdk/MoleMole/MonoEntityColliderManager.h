#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ADDHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1468E0F0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_AJEEBNCNHMN_OFFSET UNITYSDK_OFFSET(0x1468FED0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_CLEARHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1468E080)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_DLIDBNKMKCO_OFFSET UNITYSDK_OFFSET(0x1468D7D0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_EMPTY_OFFSET UNITYSDK_OFFSET(0x1468F020)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_HASHULLCOLLIDERWITHNOCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1468F9B0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_JMPNKFCKKFG_OFFSET UNITYSDK_OFFSET(0x1468FF30)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_LOFMNKAMILC_OFFSET UNITYSDK_OFFSET(0x1468D500)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1468D9E0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1468D710)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1468D440)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1468E210)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERHULLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1468E610)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTEROTHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1468ED00)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERWALLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1468EA40)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_SETDEFAULTHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1468E1C0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYCOLLIDERINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1468F5F0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYHITCOLLIDER_1_OFFSET UNITYSDK_OFFSET(0x1468F4E0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1468F2E0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYWALLCOLLIDERINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1468F8A0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1468DB20)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERHULLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1468DC40)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTEROTHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1468DE90)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERWALLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1468DD60)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1468FBD0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1468FAA0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityColliderManager_TypeDefinitionIndex = 65576;

	class MonoEntityColliderManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>** StaticGet_BFGDEACGEHP()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityColliderManager_TypeDefinitionIndex)->GetStaticField(0x4C160);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>** StaticGet_DFJMNPNEKEE()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityColliderManager_TypeDefinitionIndex)->GetStaticField(0x4C168);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>** StaticGet_OGHGFDEHIED()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityColliderManager_TypeDefinitionIndex)->GetStaticField(0x4C170);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>** StaticGet_AFPBDDODGIF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityColliderManager_TypeDefinitionIndex)->GetStaticField(0x4C178);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_BKBJDFKFCOM()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityColliderManager_TypeDefinitionIndex)->GetStaticField(0x4C180);
		}
		::UnityEngine::Collider* defaultHitCollider; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* triggerColliderList; // 0x20
		::UnityEngine::Collider* defaultHullCollider; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* hullColliderList; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* wallColliderList; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* hullColliderInitEntityNoCollider; // 0x40
		::Il2CppArray<::UnityEngine::Collider*>* hullColliderWithEntityNoCollider; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* otherColliderList; // 0x50
		::System::Boolean OAJGKAAHKAE; // 0x58
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* FLOGEFJPHII; // 0x60
		::System::Boolean DNKFJAOELPI; // 0x68
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* FCAEHCBNFFP; // 0x70
		::System::Boolean GEIFFLGICCJ; // 0x78
		::System::Byte _padding2[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* EFCFBBGFKFE; // 0x80
		::System::Boolean GAILFABCDFJ; // 0x88
		::System::Byte _padding3[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* GCDECEHOIDJ; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearHitCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_CLEARHITCOLLIDER_OFFSET))(this);
		}

		::System::Void AddHitCollider(::UnityEngine::Collider* GACDOMHGKFG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ADDHITCOLLIDER_OFFSET))(this, GACDOMHGKFG);
		}

		::System::Void SetDefaultHitCollider(::UnityEngine::Collider* GACDOMHGKFG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_SETDEFAULTHITCOLLIDER_OFFSET))(this, GACDOMHGKFG);
		}

		::System::Void RegisterHitCollider(::System::UInt32 BKLGNCBNEGM)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERHITCOLLIDER_OFFSET))(this, BKLGNCBNEGM);
		}

		::System::Void UnRegisterHitCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERHITCOLLIDER_OFFSET))(this);
		}

		::System::Void RegisterHullCollider(::System::UInt32 BKLGNCBNEGM)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERHULLCOLLIDER_OFFSET))(this, BKLGNCBNEGM);
		}

		::System::Void UnRegisterHullCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERHULLCOLLIDER_OFFSET))(this);
		}

		::System::Void RegisterWallCollider(::System::UInt32 BKLGNCBNEGM)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERWALLCOLLIDER_OFFSET))(this, BKLGNCBNEGM);
		}

		::System::Void UnRegisterWallCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERWALLCOLLIDER_OFFSET))(this);
		}

		::System::Void RegisterOtherCollider(::System::UInt32 BKLGNCBNEGM)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTEROTHERCOLLIDER_OFFSET))(this, BKLGNCBNEGM);
		}

		::System::Void UnRegisterOtherCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTEROTHERCOLLIDER_OFFSET))(this);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_EMPTY_OFFSET))();
		}

		static ::System::Boolean TryGetRegisterEntityByHitCollider(::UnityEngine::Collider* EHHHMFKHNAI, ::System::UInt32& BKLGNCBNEGM)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYHITCOLLIDER_OFFSET))(EHHHMFKHNAI, BKLGNCBNEGM);
		}

		static ::System::Boolean TryGetRegisterEntityByHitCollider_1(::System::Int32 PIPGGOOELKG, ::System::UInt32& BKLGNCBNEGM)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYHITCOLLIDER_1_OFFSET))(PIPGGOOELKG, BKLGNCBNEGM);
		}

		static ::System::Boolean TryGetRegisterEntityByColliderInstanceId(::System::Int32 PIPGGOOELKG, ::System::UInt32& BKLGNCBNEGM)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYCOLLIDERINSTANCEID_OFFSET))(PIPGGOOELKG, BKLGNCBNEGM);
		}

		static ::System::Boolean TryGetRegisterEntityByWallColliderInstanceId(::System::Int32 MGGAKIBNMMF, ::System::UInt32& BKLGNCBNEGM)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYWALLCOLLIDERINSTANCEID_OFFSET))(MGGAKIBNMMF, BKLGNCBNEGM);
		}

		static ::System::Boolean HasHullColliderWithNoCollider(::System::Int32 COMHHPENHFH)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_HASHULLCOLLIDERWITHNOCOLLIDER_OFFSET))(COMHHPENHFH);
		}

		::System::Void DLIDBNKMKCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_DLIDBNKMKCO_OFFSET))(this);
		}

		::System::Void AJEEBNCNHMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_AJEEBNCNHMN_OFFSET))(this);
		}

		::System::Void JMPNKFCKKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_JMPNKFCKKFG_OFFSET))(this);
		}

		::System::Void LOFMNKAMILC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_LOFMNKAMILC_OFFSET))(this);
		}
	};
}
