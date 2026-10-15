#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BATCHANIMATIONINSTPROPMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xC1B3C90)
#define BATCHANIMATIONINSTPROPMANAGER_EDJIMEKCDEM_OFFSET UNITYSDK_OFFSET(0xC1B3940)
#define BATCHANIMATIONINSTPROPMANAGER_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0xC1B2FD0)
#define BATCHANIMATIONINSTPROPMANAGER_HASPART_OFFSET UNITYSDK_OFFSET(0xC1B2EF0)
#define BATCHANIMATIONINSTPROPMANAGER_INITPART_OFFSET UNITYSDK_OFFSET(0xC1B28A0)
#define BATCHANIMATIONINSTPROPMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC1B3BF0)
#define BATCHANIMATIONINSTPROPMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC1B3C40)
#define BATCHANIMATIONINSTPROPMANAGER_RELEASE_OFFSET UNITYSDK_OFFSET(0xC1B2F80)
#define BATCHANIMATIONINSTPROPMANAGER_REMOVEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0xC1B3680)
#define BATCHANIMATIONINSTPROPMANAGER_REMOVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xC1B3610)
#define BATCHANIMATIONINSTPROPMANAGER_SETINSTANCEDPROP_1_OFFSET UNITYSDK_OFFSET(0xC1B3200)
#define BATCHANIMATIONINSTPROPMANAGER_SETINSTANCEDPROP_OFFSET UNITYSDK_OFFSET(0xC1B3180)

inline static constexpr unsigned int BatchAnimationInstPropManager_TypeDefinitionIndex = 47289;

	class BatchAnimationInstPropManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::BatchAnimation* BatchAnimation; // 0x18
		::System::Int32 GPNLNBIIOPP; // 0x20
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* IEOABMPAGAA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void InitPart(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4, ::System::Collections::Generic::List_1<::System::Single>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_INITPART_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean HasPart(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_HASPART_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_RELEASE_OFFSET))(this);
		}

		::System::Void SetInstancedProp(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Single>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_SETINSTANCEDPROP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetInstancedProp_1(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Single>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_SETINSTANCEDPROP_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveInstance(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_REMOVEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void RemoveInstance_1(::UnityEngine::Rendering::BatchAnimationInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_REMOVEINSTANCE_1_OFFSET))(this, a1);
		}

		::System::Void EDJIMEKCDEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_EDJIMEKCDEM_OFFSET))(this);
		}

		::System::Void GPLLONMEDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_GPLLONMEDAC_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_ONDESTROY_OFFSET))(this);
		}

	};
