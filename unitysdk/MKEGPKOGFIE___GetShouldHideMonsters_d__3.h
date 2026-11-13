#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAODNLIPMEO;
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8FF690)
#define MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B8FF700)
#define MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B8FF990)
#define MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B8FF900)
#define MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B8FFA10)
#define MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B8FF960)
#define MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B8FF910)
#define MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B8FF6F0)

inline static constexpr unsigned int MKEGPKOGFIE___GetShouldHideMonsters_d__3_TypeDefinitionIndex = 84284;

	template <typename T1, typename T2, typename T3>
	class MKEGPKOGFIE___GetShouldHideMonsters_d__3 : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* __7__wrap1; // 0x10
		::EAODNLIPMEO* __3__tierceConfig; // 0x18
		::EAODNLIPMEO* tierceConfig; // 0x20
		::System::Int32 __l__initialThreadId; // 0x28
		::System::UInt32 __2__current; // 0x2C
		::System::Int32 __1__state; // 0x30
		::System::Int32 __7__wrap2; // 0x34
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::UInt32 System_Collections_Generic_IEnumerator_System_UInt32__get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* System_Collections_Generic_IEnumerable_System_UInt32__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGPKOGFIE___GETSHOULDHIDEMONSTERS_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
