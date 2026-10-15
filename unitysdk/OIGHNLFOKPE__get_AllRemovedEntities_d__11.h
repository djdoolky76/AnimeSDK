#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIGHNLFOKPE;
namespace RPG::Client { class MapEntityDef; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_CTOR_OFFSET UNITYSDK_OFFSET(0xBE907B0)
#define OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBE90910)
#define OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MAPENTITYDEF__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBE90C20)
#define OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBE90BB0)
#define OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBE90CA0)
#define OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBE90C10)
#define OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBE90BC0)
#define OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE908D0)
#define OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xBE908F0)
#define OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xBE90900)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	class OIGHNLFOKPE__get_AllRemovedEntities_d__11 : public ::System::Object
	{
	public:
		::OIGHNLFOKPE* __4__this; // 0x10
		::System::Object* __7__wrap1; // 0x18
		::System::Byte _padding0[0x18];
		::RPG::Client::MapEntityDef* __2__current; // 0x38
		::System::Int32 __l__initialThreadId; // 0x40
		::System::Int32 __1__state; // 0x44
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11___M__FINALLY2_OFFSET))(this);
		}

		::RPG::Client::MapEntityDef* System_Collections_Generic_IEnumerator_RPG_Client_MapEntityDef__get_Current()
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>* System_Collections_Generic_IEnumerable_RPG_Client_MapEntityDef__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MAPENTITYDEF__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
