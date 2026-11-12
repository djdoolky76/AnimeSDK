#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAJIFAGGCEG;
class PEDNMPONAAO;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_CTOR_OFFSET UNITYSDK_OFFSET(0xC0B1930)
#define MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC0B23F0)
#define MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC0B26C0)
#define MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC0B2650)
#define MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC0B2720)
#define MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC0B26B0)
#define MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC0B2660)
#define MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0B23C0)
#define MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xC0B23E0)
#define MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xC0B23D0)

inline static constexpr unsigned int MAJIFAGGCEG__EnumerateAllConfigsOrderByRole_d__5_TypeDefinitionIndex = 64096;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class MAJIFAGGCEG__EnumerateAllConfigsOrderByRole_d__5 : public ::System::Object
	{
	public:
		::PEDNMPONAAO* __2__current; // 0x10
		::MAJIFAGGCEG* __4__this; // 0x18
		::System::Object* __7__wrap2; // 0x20
		::System::Byte _padding0[0x10];
		::System::Object* __7__wrap1; // 0x38
		::System::Byte _padding1[0x10];
		::System::Int32 __1__state; // 0x50
		::System::Int32 __l__initialThreadId; // 0x54
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5___M__FINALLY2_OFFSET))(this);
		}

		::PEDNMPONAAO* System_Collections_Generic_IEnumerator_RPG_AvatarSystem_MultiplePathConfig__get_Current()
		{
			return ((::PEDNMPONAAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::PEDNMPONAAO*>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_MultiplePathConfig__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::PEDNMPONAAO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATEALLCONFIGSORDERBYROLE_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
