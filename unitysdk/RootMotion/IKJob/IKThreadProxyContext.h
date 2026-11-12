#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransform.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xB71C100)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB71A430)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xB71A670)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xB71AF40)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETPARENT_OFFSET UNITYSDK_OFFSET(0xB71A5F0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xB71A620)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETROTATION_OFFSET UNITYSDK_OFFSET(0xB71AEB0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETTRANSFORMINDEX_OFFSET UNITYSDK_OFFSET(0xB71A460)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETTRANSFORMREF_OFFSET UNITYSDK_OFFSET(0xB71A4F0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0xB71A5A0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_NOTIFYTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xB71A900)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_RESET_OFFSET UNITYSDK_OFFSET(0xB71B4A0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xB71AE10)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xB71B240)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0xB71B380)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xB71A6A0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETROTATION_OFFSET UNITYSDK_OFFSET(0xB71AF80)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SYNCROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB71B410)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SYNC_OFFSET UNITYSDK_OFFSET(0xB71BE40)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0xB71BB70)

namespace RootMotion::IKJob
{
	inline static constexpr unsigned int IKThreadProxyContext_TypeDefinitionIndex = 47013;

	class IKThreadProxyContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* TransformIDs; // 0x10
		::Il2CppArray<::System::Int32>* Parents; // 0x18
		::Unity::Collections::NativeArray_1<::RootMotion::IKJob::IKTransform> Transforms; // 0x20
		::System::Byte _padding0[0x8];
		::System::Boolean bModify; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Int32 GetTransformIndex(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETTRANSFORMINDEX_OFFSET))(this, a1);
		}

		::RootMotion::IKJob::IKTransformRef GetTransformRef(::UnityEngine::Transform* a1)
		{
			return ((::RootMotion::IKJob::IKTransformRef(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETTRANSFORMREF_OFFSET))(this, a1);
		}

		::System::Boolean IsChildOf(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_ISCHILDOF_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetParent(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETPARENT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPosition(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetLocalPosition(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETLOCALPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void SetLocalPosition(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALPOSITION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Quaternion GetRotation(::System::Int32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetLocalRotation(::System::Int32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETLOCALROTATION_OFFSET))(this, a1);
		}

		::System::Void SetRotation(::System::Int32 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETROTATION_OFFSET))(this, a1, a2);
		}

		::System::Void SetLocalRotation(::System::Int32 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALROTATION_OFFSET))(this, a1, a2);
		}

		::System::Void SetLocalScale(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALSCALE_OFFSET))(this, a1, a2);
		}

		::System::Void SyncRootTransform(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SYNCROOTTRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void Reset(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_RESET_OFFSET))(this, a1);
		}

		::System::Void Update(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Sync(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SYNC_OFFSET))(this, a1);
		}

		::System::Void NotifyTransformChanged(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_NOTIFYTRANSFORMCHANGED_OFFSET))(this, a1);
		}

	};
}
