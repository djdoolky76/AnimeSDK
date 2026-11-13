#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDIOCFOAMLD;
namespace RPG::Client { class MapEntityDef; }
namespace System { class Object; }

#define FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23_CTOR_OFFSET UNITYSDK_OFFSET(0x1C037030)
#define FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C037AC0)
#define FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C038070)
#define FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C0380D0)
#define FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C038080)
#define FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C037A70)
#define FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1C037A80)
#define FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1C037A90)
#define FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x1C037AA0)
#define FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23___M__FINALLY4_OFFSET UNITYSDK_OFFSET(0x1C037AB0)

inline static constexpr unsigned int FDIOCFOAMLD__GetAllEntityEnumerator_d__23_TypeDefinitionIndex = 76764;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
	class FDIOCFOAMLD__GetAllEntityEnumerator_d__23 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap1; // 0x10
		::System::Byte _padding0[0x10];
		::System::Object* __7__wrap2; // 0x28
		::System::Byte _padding1[0x10];
		::FDIOCFOAMLD* __4__this; // 0x40
		::RPG::Client::MapEntityDef* __2__current; // 0x48
		::System::Object* __7__wrap3; // 0x50
		::System::Byte _padding2[0x10];
		::System::Int32 __1__state; // 0x68
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23___M__FINALLY2_OFFSET))(this);
		}

		::System::Void __m__Finally3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23___M__FINALLY3_OFFSET))(this);
		}

		::System::Void __m__Finally4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23___M__FINALLY4_OFFSET))(this);
		}

		::RPG::Client::MapEntityDef* System_Collections_Generic_IEnumerator_RPG_Client_MapEntityDef__get_Current()
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD__GETALLENTITYENUMERATOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
