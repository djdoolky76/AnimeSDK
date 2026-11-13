#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class DebugPlayUIAnimation; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FBFB0)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B7FC2F0)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B7FC6C0)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B7FC650)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B7FC740)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B7FC6B0)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B7FC660)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B7FC180)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1B7FC1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugPlayUIAnimation__get__AnimNames_d__3_TypeDefinitionIndex = 70287;

	template <typename T1, typename T2, typename T3>
	class DebugPlayUIAnimation__get__AnimNames_d__3 : public ::System::Object
	{
	public:
		::System::String* __2__current; // 0x10
		::System::Collections::IEnumerator* __7__wrap1; // 0x18
		::RPG::Client::DebugPlayUIAnimation* __4__this; // 0x20
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3___M__FINALLY1_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION__GET__ANIMNAMES_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
}
