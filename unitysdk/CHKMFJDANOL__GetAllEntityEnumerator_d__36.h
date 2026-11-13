#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHKMFJDANOL;
namespace RPG::Client { class MapEntityDef; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CHKMFJDANOL__GETALLENTITYENUMERATOR_D__36_CTOR_OFFSET UNITYSDK_OFFSET(0x16E24FC0)
#define CHKMFJDANOL__GETALLENTITYENUMERATOR_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16E25710)
#define CHKMFJDANOL__GETALLENTITYENUMERATOR_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16E25C20)
#define CHKMFJDANOL__GETALLENTITYENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16E25C80)
#define CHKMFJDANOL__GETALLENTITYENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16E25C30)
#define CHKMFJDANOL__GETALLENTITYENUMERATOR_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E255D0)
#define CHKMFJDANOL__GETALLENTITYENUMERATOR_D__36___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x16E25610)

inline static constexpr unsigned int CHKMFJDANOL__GetAllEntityEnumerator_d__36_TypeDefinitionIndex = 76762;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36>
	class CHKMFJDANOL__GetAllEntityEnumerator_d__36 : public ::System::Object
	{
	public:
		::RPG::Client::MapEntityDef* __2__current; // 0x10
		::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>* __7__wrap1; // 0x18
		::CHKMFJDANOL* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHKMFJDANOL__GETALLENTITYENUMERATOR_D__36_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKMFJDANOL__GETALLENTITYENUMERATOR_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKMFJDANOL__GETALLENTITYENUMERATOR_D__36_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKMFJDANOL__GETALLENTITYENUMERATOR_D__36___M__FINALLY1_OFFSET))(this);
		}

		::RPG::Client::MapEntityDef* System_Collections_Generic_IEnumerator_RPG_Client_MapEntityDef__get_Current()
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKMFJDANOL__GETALLENTITYENUMERATOR_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKMFJDANOL__GETALLENTITYENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKMFJDANOL__GETALLENTITYENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
