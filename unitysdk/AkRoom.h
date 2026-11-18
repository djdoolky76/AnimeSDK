#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerHandler.h"

class AkRoomAwareObject;
namespace AK::Wwise { class AuxBus; }
namespace AK::Wwise { class Event; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define AKROOM_EXIT_OFFSET UNITYSDK_OFFSET(0x1FC97080)
#define AKROOM_GETAKROOMID_OFFSET UNITYSDK_OFFSET(0x1FC96B10)
#define AKROOM_GETID_OFFSET UNITYSDK_OFFSET(0x1FC96C60)
#define AKROOM_GET_ROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x1FC96E00)
#define AKROOM_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x1FC98290)
#define AKROOM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1FC97BC0)
#define AKROOM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1FC971F0)
#define AKROOM_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1FC98030)
#define AKROOM_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1FC98090)
#define AKROOM_POSTROOMTONE_OFFSET UNITYSDK_OFFSET(0x1FC980F0)
#define AKROOM_SET_ROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x1FC96E60)
#define AKROOM_TRYENTER_OFFSET UNITYSDK_OFFSET(0x1FC96EC0)
#define AKROOM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC983B0)
#define AKROOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC982A0)

inline static constexpr unsigned int AkRoom_TypeDefinitionIndex = 33347;

class AkRoom : public ::AkTriggerHandler
{
public:
	static ::System::UInt64* StaticGet_INVALID_ROOM_ID()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(AkRoom_TypeDefinitionIndex)->GetStaticField(0x85B0);
	}
	static ::System::Int32* StaticGet__RoomCount_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AkRoom_TypeDefinitionIndex)->GetStaticField(0x85B8);
	}
	::System::Int32 priority; // 0x30
	::System::Byte _padding0[0x4];
	::AK::Wwise::AuxBus* reverbAuxBus; // 0x38
	::System::Single reverbLevel; // 0x40
	::System::Single wallOcclusion; // 0x44
	::AK::Wwise::Event* roomToneEvent; // 0x48
	::System::Single roomToneAuxSend; // 0x50
	::System::Byte _padding1[0x4];
	::System::Collections::Generic::List_1<::AkRoomAwareObject*>* roomAwareObjectsEntered; // 0x58
	::System::Collections::Generic::List_1<::AkRoomAwareObject*>* roomAwareObjectsDetectedWhileDisabled; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKROOM__CCTOR_OFFSET))();
	}

	static ::System::UInt64 GetAkRoomID(::AkRoom* room)
	{
		return ((::System::UInt64(*)(::AkRoom*))((::PBYTE)hIl2Cpp + AKROOM_GETAKROOMID_OFFSET))(room);
	}

	static ::System::Int32 get_RoomCount()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKROOM_GET_ROOMCOUNT_OFFSET))();
	}

	static ::System::Void set_RoomCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + AKROOM_SET_ROOMCOUNT_OFFSET))(value);
	}

	::System::Boolean TryEnter(::AkRoomAwareObject* roomAwareObject)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkRoomAwareObject*))((::PBYTE)hIl2Cpp + AKROOM_TRYENTER_OFFSET))(this, roomAwareObject);
	}

	::System::Void Exit(::AkRoomAwareObject* roomAwareObject)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoomAwareObject*))((::PBYTE)hIl2Cpp + AKROOM_EXIT_OFFSET))(this, roomAwareObject);
	}

	::System::UInt64 GetID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_GETID_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnTriggerEnter(::UnityEngine::Collider* in_other)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKROOM_ONTRIGGERENTER_OFFSET))(this, in_other);
	}

	::System::Void OnTriggerExit(::UnityEngine::Collider* in_other)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKROOM_ONTRIGGEREXIT_OFFSET))(this, in_other);
	}

	::System::Void PostRoomTone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_POSTROOMTONE_OFFSET))(this);
	}

	::System::Void HandleEvent(::UnityEngine::GameObject* in_gameObject)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKROOM_HANDLEEVENT_OFFSET))(this, in_gameObject);
	}
};
