#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class InstanceArrayV2MonoPlugin; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CEFCMPKCMAF_BBBBKOPLINO_OFFSET UNITYSDK_OFFSET(0x173CC440)
#define CEFCMPKCMAF_CTOR_OFFSET UNITYSDK_OFFSET(0x173CC430)
#define CEFCMPKCMAF_ELGPAFIMNDB_OFFSET UNITYSDK_OFFSET(0x173CC710)
#define CEFCMPKCMAF_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x173CC410)
#define CEFCMPKCMAF_HAAKAHDPNAL_OFFSET UNITYSDK_OFFSET(0x173CC680)
#define CEFCMPKCMAF_KFEFAEBGMCO_OFFSET UNITYSDK_OFFSET(0x173CC750)
#define CEFCMPKCMAF_LLDEGEGKJEB_OFFSET UNITYSDK_OFFSET(0x173CC530)
#define CEFCMPKCMAF_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x173CC420)

inline static constexpr unsigned int CEFCMPKCMAF_TypeDefinitionIndex = 72600;

	class CEFCMPKCMAF : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::MaterialPropertyBlock*>* COHNLCNKKND; // 0x10
		::RPG::Client::InstanceArrayV2MonoPlugin* _Owner_k__BackingField; // 0x18
		::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*>*>* CIHADONAEKO; // 0x20
		::Il2CppArray<::Il2CppArray<::UnityEngine::Matrix4x4>*>* MBBBHFDGJPN; // 0x28
		::System::Boolean NKABPKEKKEP; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 DNJCFIPPBNG; // 0x34
		::System::Void _ctor(::RPG::Client::InstanceArrayV2MonoPlugin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::InstanceArrayV2MonoPlugin*))((::PBYTE)hIl2Cpp + CEFCMPKCMAF_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::InstanceArrayV2MonoPlugin* get_Owner()
		{
			return ((::RPG::Client::InstanceArrayV2MonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFCMPKCMAF_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPG::Client::InstanceArrayV2MonoPlugin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::InstanceArrayV2MonoPlugin*))((::PBYTE)hIl2Cpp + CEFCMPKCMAF_SET_OWNER_OFFSET))(this, a1);
		}

		::System::Void BBBBKOPLINO(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Vector4>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + CEFCMPKCMAF_BBBBKOPLINO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LLDEGEGKJEB(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CEFCMPKCMAF_LLDEGEGKJEB_OFFSET))(this, a1, a2, a3);
		}

		::System::Single HAAKAHDPNAL(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CEFCMPKCMAF_HAAKAHDPNAL_OFFSET))(this, a1);
		}

		::System::Void ELGPAFIMNDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFCMPKCMAF_ELGPAFIMNDB_OFFSET))(this);
		}

		::System::Void KFEFAEBGMCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFCMPKCMAF_KFEFAEBGMCO_OFFSET))(this);
		}

	};
