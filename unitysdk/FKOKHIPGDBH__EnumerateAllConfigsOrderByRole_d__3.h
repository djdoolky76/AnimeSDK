#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class FKOKHIPGDBH;
class PEDNMPONAAO;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0x158189E0)
#define FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15819100)
#define FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15819630)
#define FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x158195C0)
#define FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15819690)
#define FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15819620)
#define FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x158195D0)
#define FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15818FC0)
#define FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15819000)

inline static constexpr unsigned int FKOKHIPGDBH__EnumerateAllConfigsOrderByRole_d__3_TypeDefinitionIndex = 62775;

	template <typename T1, typename T2, typename T3>
	class FKOKHIPGDBH__EnumerateAllConfigsOrderByRole_d__3 : public ::System::Object
	{
	public:
		::FKOKHIPGDBH* __4__this; // 0x10
		::PEDNMPONAAO* __2__current; // 0x18
		::System::Collections::Generic::IEnumerator_1<::PEDNMPONAAO*>* __7__wrap2; // 0x20
		::RPG::GameCore::GenderType _heroGender_5__2; // 0x28
		::System::Int32 __l__initialThreadId; // 0x2C
		::System::Int32 __1__state; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3___M__FINALLY1_OFFSET))(this);
		}

		::PEDNMPONAAO* System_Collections_Generic_IEnumerator_RPG_AvatarSystem_MultiplePathConfig__get_Current()
		{
			return ((::PEDNMPONAAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::PEDNMPONAAO*>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_MultiplePathConfig__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::PEDNMPONAAO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATEALLCONFIGSORDERBYROLE_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
