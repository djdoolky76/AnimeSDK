#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class FKOKHIPGDBH;
class PEDNMPONAAO;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_CTOR_OFFSET UNITYSDK_OFFSET(0x158246F0)
#define FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x158254B0)
#define FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x158259E0)
#define FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15825970)
#define FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15825A40)
#define FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x158259D0)
#define FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15825980)
#define FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15825370)
#define FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x158253B0)

inline static constexpr unsigned int FKOKHIPGDBH__EnumerateConfigsByRole_d__4_TypeDefinitionIndex = 62776;

	template <typename T1, typename T2, typename T3, typename T4>
	class FKOKHIPGDBH__EnumerateConfigsByRole_d__4 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::PEDNMPONAAO*>* __7__wrap2; // 0x10
		::FKOKHIPGDBH* __4__this; // 0x18
		::PEDNMPONAAO* __2__current; // 0x20
		::DNFDBKCPBNM roleIdentifier; // 0x28
		::DNFDBKCPBNM __3__roleIdentifier; // 0x2C
		::System::Int32 __1__state; // 0x30
		::RPG::GameCore::GenderType _heroGender_5__2; // 0x34
		::System::Int32 __l__initialThreadId; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4___M__FINALLY1_OFFSET))(this);
		}

		::PEDNMPONAAO* System_Collections_Generic_IEnumerator_RPG_AvatarSystem_MultiplePathConfig__get_Current()
		{
			return ((::PEDNMPONAAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::PEDNMPONAAO*>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_MultiplePathConfig__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::PEDNMPONAAO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOKHIPGDBH__ENUMERATECONFIGSBYROLE_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
