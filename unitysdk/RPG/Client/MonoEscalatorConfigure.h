#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEscalatorItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOESCALATORCONFIGURE_CTOR_OFFSET UNITYSDK_OFFSET(0xD826070)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_EVALUATEPOSITION_OFFSET UNITYSDK_OFFSET(0xD825F40)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xD8253B0)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_GET_INSTANCEMATRICES_OFFSET UNITYSDK_OFFSET(0xD8253F0)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_GET_ITEMSORTLENGTH_OFFSET UNITYSDK_OFFSET(0xD8253D0)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_IKLFLLHAODA_OFFSET UNITYSDK_OFFSET(0xD825450)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xD825580)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0xD825510)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_REFRESHITEMTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD825B80)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_REMOVEALLITEM_OFFSET UNITYSDK_OFFSET(0xD825400)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xD8253C0)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_SET_ITEMSORTLENGTH_OFFSET UNITYSDK_OFFSET(0xD8253E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEscalatorConfigure_TypeDefinitionIndex = 68589;

	class MonoEscalatorConfigure : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoEscalatorItem* item; // 0x18
		::System::Single itemLength; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Transform*>* Points; // 0x28
		::System::Single _Distance_k__BackingField; // 0x30
		::System::Single _ItemSortLength_k__BackingField; // 0x34
		::Il2CppArray<::RPG::Client::MonoEscalatorItem*>* Items; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* PointPositions; // 0x40
		::Il2CppArray<::System::Single>* PointDistances; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* GDJKHEEEPJM; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_CTOR_OFFSET))(this);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_Distance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_SET_DISTANCE_OFFSET))(this, a1);
		}

		::System::Single get_ItemSortLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_GET_ITEMSORTLENGTH_OFFSET))(this);
		}

		::System::Void set_ItemSortLength(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_SET_ITEMSORTLENGTH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* get_InstanceMatrices()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_GET_INSTANCEMATRICES_OFFSET))(this);
		}

		::System::Void RemoveAllItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_REMOVEALLITEM_OFFSET))(this);
		}

		::System::Void RefreshItems(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_REFRESHITEMS_OFFSET))(this, a1);
		}

		::System::Void RefreshItemTransform(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_REFRESHITEMTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EvaluatePosition(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_EVALUATEPOSITION_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::System::Void IKLFLLHAODA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_IKLFLLHAODA_OFFSET))(this);
		}

	};
}
