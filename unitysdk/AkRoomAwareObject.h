#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class AkRoom;
class AkRoomAwareObject;
class AkRoom_PriorityList;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }

#define AKROOMAWAREOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2086ACC0)
#define AKROOMAWAREOBJECT_CCTOR_OFFSET UNITYSDK_OFFSET(0x2086B330)
#define AKROOMAWAREOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x2086B2E0)
#define AKROOMAWAREOBJECT_ENTEREDROOM_OFFSET UNITYSDK_OFFSET(0x2086A6F0)
#define AKROOMAWAREOBJECT_EXITEDROOM_OFFSET UNITYSDK_OFFSET(0x20869460)
#define AKROOMAWAREOBJECT_GETAKROOMAWAREOBJECTFROMCOLLIDER_OFFSET UNITYSDK_OFFSET(0x2086A5C0)
#define AKROOMAWAREOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2086B230)
#define AKROOMAWAREOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2086AF10)
#define AKROOMAWAREOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2086AE10)
#define AKROOMAWAREOBJECT_SETGAMEOBJECTINHIGHESTPRIORITYACTIVEANDENABLEDROOM_OFFSET UNITYSDK_OFFSET(0x2086AB00)
#define AKROOMAWAREOBJECT_SETGAMEOBJECTINROOM_OFFSET UNITYSDK_OFFSET(0x2086B0B0)

inline static constexpr unsigned int AkRoomAwareObject_TypeDefinitionIndex = 46021;

	class AkRoomAwareObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* m_Collider; // 0x18
		::AkRoom_PriorityList* roomPriorityList; // 0x20
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::AkRoomAwareObject*>** StaticGet_ColliderToRoomAwareObjectMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::AkRoomAwareObject*>**)UnitySDK::FromName("", "AkRoomAwareObject")->GetStaticField(0x70CB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_CCTOR_OFFSET))();
		}

		static ::AkRoomAwareObject* GetAkRoomAwareObjectFromCollider(::UnityEngine::Collider* a1)
		{
			return ((::AkRoomAwareObject*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_GETAKROOMAWAREOBJECTFROMCOLLIDER_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetGameObjectInHighestPriorityActiveAndEnabledRoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_SETGAMEOBJECTINHIGHESTPRIORITYACTIVEANDENABLEDROOM_OFFSET))(this);
		}

		::System::Void SetGameObjectInRoom(::AkRoom* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_SETGAMEOBJECTINROOM_OFFSET))(this, a1);
		}

		::System::Void EnteredRoom(::AkRoom* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_ENTEREDROOM_OFFSET))(this, a1);
		}

		::System::Void ExitedRoom(::AkRoom* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_EXITEDROOM_OFFSET))(this, a1);
		}

	};
