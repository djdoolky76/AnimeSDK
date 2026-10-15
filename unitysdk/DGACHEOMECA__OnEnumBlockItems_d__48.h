#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGACHEOMECA;
class HPPGIADOJBF;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define DGACHEOMECA__ONENUMBLOCKITEMS_D__48_CTOR_OFFSET UNITYSDK_OFFSET(0xE83D3C0)
#define DGACHEOMECA__ONENUMBLOCKITEMS_D__48_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE83F720)
#define DGACHEOMECA__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_HPATCHBLOCKINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE840400)
#define DGACHEOMECA__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_HPATCHBLOCKINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE840390)
#define DGACHEOMECA__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE840480)
#define DGACHEOMECA__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE8403F0)
#define DGACHEOMECA__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE8403A0)
#define DGACHEOMECA__ONENUMBLOCKITEMS_D__48_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE83F700)
#define DGACHEOMECA__ONENUMBLOCKITEMS_D__48___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xE83F710)

inline static constexpr unsigned int DGACHEOMECA__OnEnumBlockItems_d__48_TypeDefinitionIndex = 59452;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48>
	class DGACHEOMECA__OnEnumBlockItems_d__48 : public ::System::Object
	{
	public:
		::HPPGIADOJBF* __2__current; // 0x10
		::System::String* _rootPath_5__2; // 0x18
		::DGACHEOMECA* __4__this; // 0x20
		::System::Object* __7__wrap4; // 0x28
		::System::Byte _padding0[0x10];
		::System::Int32 __l__initialThreadId; // 0x40
		::System::Int32 __1__state; // 0x44
		::System::Int32 _count_5__3; // 0x48
		::System::Int32 _i_5__4; // 0x4C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGACHEOMECA__ONENUMBLOCKITEMS_D__48_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA__ONENUMBLOCKITEMS_D__48_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA__ONENUMBLOCKITEMS_D__48_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA__ONENUMBLOCKITEMS_D__48___M__FINALLY1_OFFSET))(this);
		}

		::HPPGIADOJBF* System_Collections_Generic_IEnumerator_RPG_Client_HPatchBlockInfo__get_Current()
		{
			return ((::HPPGIADOJBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_HPATCHBLOCKINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::HPPGIADOJBF*>* System_Collections_Generic_IEnumerable_RPG_Client_HPatchBlockInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::HPPGIADOJBF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_HPATCHBLOCKINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
