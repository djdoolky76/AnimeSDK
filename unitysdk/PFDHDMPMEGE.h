#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPIIMHNOEI.h"
#include "unitysdk/GDDPPPNAHKA.h"
#include "unitysdk/IPAGLJGIIJB.h"
#include "unitysdk/JNIKNNFPBEJ.h"
#include "unitysdk/KCINAMMBNJF.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityChan { class SpringCollider; }
namespace UnityChan { class SpringManager; }
namespace UnityEngine { class Transform; }

#define PFDHDMPMEGE_CHMGFKCEPPF_OFFSET UNITYSDK_OFFSET(0xDDE10)
#define PFDHDMPMEGE_CKOPMNNNLOE_OFFSET UNITYSDK_OFFSET(0xDDE20)
#define PFDHDMPMEGE_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0xDDE50)
#define PFDHDMPMEGE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xDDE70)
#define PFDHDMPMEGE_FBENMOLGIHF_OFFSET UNITYSDK_OFFSET(0xDDE80)
#define PFDHDMPMEGE_GFPEKLFOJIE_OFFSET UNITYSDK_OFFSET(0xDDE40)
#define PFDHDMPMEGE_GHHMECHEMLO_OFFSET UNITYSDK_OFFSET(0xDDE30)
#define PFDHDMPMEGE_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xDDE60)

	struct alignas(8) PFDHDMPMEGE
	{
		::Unity::Collections::NativeArray_1<::KCINAMMBNJF> OEDFGINIBHP; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::GDDPPPNAHKA> CPAFKBKEIKG; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::JNIKNNFPBEJ> PEHIFANNKEJ; // 0x30
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::IPAGLJGIIJB> BAGAKKJLCOH; // 0x40
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> OKPLAHOLOKL; // 0x50
		::System::Byte _padding4[0x8];
		::Unity::Collections::NativeArray_1<::ENPIIMHNOEI> PAGIMFKDNLA; // 0x60
		::System::Byte _padding5[0x8];
		::UnityEngine::Vector3 PJOCJGEKFEF; // 0x70
		::UnityEngine::Vector3 MGIOBFEIGOF; // 0x7C
		::UnityEngine::Vector3 IJCPNMBHBMM; // 0x88
		::UnityEngine::Vector3 CNLCKCNJLMI; // 0x94
		::System::Single JNDDLHHBFCL; // 0xA0
		::System::Single GBJBPHEGNDK; // 0xA4
		::System::Boolean BPFALJILIHM; // 0xA8
		::System::Boolean JIOPIDCGGFH; // 0xA9
		::System::Byte _padding6[0x6];
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* JMJAOAMFACD; // 0xB0
		::System::Boolean LGLHPNPJJKH; // 0xB8
		::System::Void CHMGFKCEPPF(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + PFDHDMPMEGE_CHMGFKCEPPF_OFFSET))(this, a1);
		}

		::System::Void CKOPMNNNLOE(::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>*))((::PBYTE)hIl2Cpp + PFDHDMPMEGE_CKOPMNNNLOE_OFFSET))(this, a1);
		}

		::System::Void GHHMECHEMLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDHDMPMEGE_GHHMECHEMLO_OFFSET))(this);
		}

		::System::Void GFPEKLFOJIE(::UnityChan::SpringManager* a1, ::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager*, ::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + PFDHDMPMEGE_GFPEKLFOJIE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EHFLDBMLBPM(::UnityChan::SpringManager* a1, ::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager*, ::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + PFDHDMPMEGE_EHFLDBMLBPM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHNCMBEFIKI(::UnityChan::SpringManager* a1, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + PFDHDMPMEGE_KHNCMBEFIKI_OFFSET))(this, a1, a2);
		}

		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFDHDMPMEGE_EXECUTE_OFFSET))(this, a1);
		}

		::System::Void FBENMOLGIHF(::System::Int32 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PFDHDMPMEGE_FBENMOLGIHF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
