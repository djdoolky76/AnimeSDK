#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define FRAMEENDREFRESHMANAGER_CALLKEY_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x15F08DC0)
#define FRAMEENDREFRESHMANAGER_CALLKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x775E30)
#define FRAMEENDREFRESHMANAGER_CALLKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x775DF0)
#define FRAMEENDREFRESHMANAGER_CALLKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x775F30)
#define FRAMEENDREFRESHMANAGER_CALLKEY_GETUNITYID_OFFSET UNITYSDK_OFFSET(0x15F08AD0)
#define FRAMEENDREFRESHMANAGER_CALLKEY_MAKEARGKEYS_OFFSET UNITYSDK_OFFSET(0x15F08C50)
#define FRAMEENDREFRESHMANAGER_CALLKEY_OWNERSEQUAL_OFFSET UNITYSDK_OFFSET(0x15F090D0)
#define FRAMEENDREFRESHMANAGER_CALLKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x775D90)
#define FRAMEENDREFRESHMANAGER_CALLKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x775F80)
#define FRAMEENDREFRESHMANAGER_CALLKEY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x776000)

inline static constexpr unsigned int FrameEndRefreshManager_CallKey_TypeDefinitionIndex = 90693;

struct alignas(8) FrameEndRefreshManager_CallKey
{
	::System::Reflection::MethodInfo* _method; // 0x10
	::System::Object* _owner; // 0x18
	::System::Int32 _ownerId; // 0x20
	::System::Byte _padding0[0x4];
	::Il2CppArray<::System::Object*>* _argKeys; // 0x28
	::System::Int32 _hash; // 0x30

	::System::Void _ctor(::System::Object* owner, ::System::Reflection::MethodInfo* method, ::Il2CppArray<::System::Object*>* args)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY__CTOR_OFFSET))(this, owner, method, args);
	}

	/*
	::System::Boolean Equals(::FrameEndRefreshManager_CallKey other)
	{
		return ((::System::Boolean(*)(::PVOID, ::FrameEndRefreshManager_CallKey))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY_EQUALS_OFFSET))(this, other);
	}
	*/

	::System::Boolean Equals_1(::System::Object* obj)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY_EQUALS_1_OFFSET))(this, obj);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Int32 ComputeHash(::System::Reflection::MethodInfo* method, ::System::Object* owner, ::System::Int32 ownerId, ::Il2CppArray<::System::Object*>* argKeys)
	{
		return ((::System::Int32(*)(::System::Reflection::MethodInfo*, ::System::Object*, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY_COMPUTEHASH_OFFSET))(method, owner, ownerId, argKeys);
	}

	static ::System::Int32 GetUnityId(::System::Object* owner)
	{
		return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY_GETUNITYID_OFFSET))(owner);
	}

	static ::System::Boolean OwnersEqual(::System::Object* a, ::System::Int32 aId, ::System::Object* b, ::System::Int32 bId)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Int32, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY_OWNERSEQUAL_OFFSET))(a, aId, b, bId);
	}

	static ::Il2CppArray<::System::Object*>* MakeArgKeys(::Il2CppArray<::System::Object*>* args)
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY_MAKEARGKEYS_OFFSET))(args);
	}

	::System::Boolean __base_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY___BASE_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __base_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY___BASE_GETHASHCODE_OFFSET))(this);
	}
};
