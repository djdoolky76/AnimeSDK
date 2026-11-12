#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AkAudioListener;
class AkGameObjEnvironmentData;
class AkGameObjListenerList;
class AkGameObjPosOffsetData;
class AkGameObjPositionOffsetData;
class TransformVersionTracker;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define AKGAMEOBJ_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x20826130)
#define AKGAMEOBJ_AWAKE_OFFSET UNITYSDK_OFFSET(0x20844130)
#define AKGAMEOBJ_CHECKSTATICSTATUS_OFFSET UNITYSDK_OFFSET(0x20844F20)
#define AKGAMEOBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x20846800)
#define AKGAMEOBJ_GETFORWARD_OFFSET UNITYSDK_OFFSET(0x20845F90)
#define AKGAMEOBJ_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x20845CA0)
#define AKGAMEOBJ_GETUPWARD_OFFSET UNITYSDK_OFFSET(0x20846150)
#define AKGAMEOBJ_GET_ISAUTOSTOP_OFFSET UNITYSDK_OFFSET(0x20843B60)
#define AKGAMEOBJ_GET_ISUSINGDEFAULTLISTENERS_OFFSET UNITYSDK_OFFSET(0x2083EEB0)
#define AKGAMEOBJ_GET_LISTENERLIST_OFFSET UNITYSDK_OFFSET(0x2083EED0)
#define AKGAMEOBJ_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20845180)
#define AKGAMEOBJ_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20844F60)
#define AKGAMEOBJ_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x20846310)
#define AKGAMEOBJ_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x20846380)
#define AKGAMEOBJ_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x20844E10)
#define AKGAMEOBJ_REGISTER_OFFSET UNITYSDK_OFFSET(0x20825D10)
#define AKGAMEOBJ_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x20826190)
#define AKGAMEOBJ_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x20843EA0)
#define AKGAMEOBJ_SET_ISAUTOSTOP_OFFSET UNITYSDK_OFFSET(0x20843B70)
#define AKGAMEOBJ_TICK_OFFSET UNITYSDK_OFFSET(0x20845550)

inline static constexpr unsigned int AkGameObj_TypeDefinitionIndex = 46004;

	class AkGameObj : public ::UnityEngine::MonoBehaviour
	{
	public:
		::AkGameObjListenerList* m_listeners; // 0x18
		::System::Boolean isEnvironmentAware; // 0x20
		::System::Boolean isStaticObject; // 0x21
		::System::Byte _padding0[0x6];
		::UnityEngine::Collider* m_Collider; // 0x28
		::UnityEngine::Transform* m_Trans; // 0x30
		::TransformVersionTracker* m_TransformTracker; // 0x38
		::System::UInt32 m_TransformVersion; // 0x40
		::System::Byte _padding1[0x4];
		::AkGameObjEnvironmentData* m_envData; // 0x48
		::AkGameObjPositionOffsetData* m_positionOffsetData; // 0x50
		::System::Boolean isRegistered; // 0x58
		::System::Boolean _IsAutoStop_k__BackingField; // 0x59
		::System::Byte _padding2[0x6];
		::AkGameObjPosOffsetData* m_posOffsetData; // 0x60
		::System::Int32 listenerMask; // 0x68
		// static const ::System::Object AK_NUM_LISTENERS; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsUsingDefaultListeners()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_GET_ISUSINGDEFAULTLISTENERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::AkAudioListener*>* get_ListenerList()
		{
			return ((::System::Collections::Generic::List_1<::AkAudioListener*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_GET_LISTENERLIST_OFFSET))(this);
		}

		::System::Boolean get_IsAutoStop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_GET_ISAUTOSTOP_OFFSET))(this);
		}

		::System::Void set_IsAutoStop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKGAMEOBJ_SET_ISAUTOSTOP_OFFSET))(this, a1);
		}

		::System::Void AddListener(::AkAudioListener* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ADDLISTENER_OFFSET))(this, a1);
		}

		::System::Void RemoveListener(::AkAudioListener* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_REMOVELISTENER_OFFSET))(this, a1);
		}

		::AKRESULT Register()
		{
			return ((::AKRESULT(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_REGISTER_OFFSET))(this);
		}

		::System::Void SetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_SETPOSITION_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_AWAKE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONVALIDATE_OFFSET))(this);
		}

		::System::Void CheckStaticStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_CHECKSTATICSTATUS_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONDESTROY_OFFSET))(this);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_TICK_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_GETPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_GETFORWARD_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetUpward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_GETUPWARD_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

	};
