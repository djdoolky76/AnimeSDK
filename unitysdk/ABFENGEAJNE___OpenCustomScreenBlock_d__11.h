#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABFENGEAJNE;
namespace RPG::Client { class FiveDimModule; }
namespace System { class Object; }

#define ABFENGEAJNE___OPENCUSTOMSCREENBLOCK_D__11_CTOR_OFFSET UNITYSDK_OFFSET(0xB0F1680)
#define ABFENGEAJNE___OPENCUSTOMSCREENBLOCK_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB0F16B0)
#define ABFENGEAJNE___OPENCUSTOMSCREENBLOCK_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB0F17D0)
#define ABFENGEAJNE___OPENCUSTOMSCREENBLOCK_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB0F1830)
#define ABFENGEAJNE___OPENCUSTOMSCREENBLOCK_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB0F17E0)
#define ABFENGEAJNE___OPENCUSTOMSCREENBLOCK_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0F16A0)

inline static constexpr unsigned int ABFENGEAJNE___OpenCustomScreenBlock_d__11_TypeDefinitionIndex = 60548;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	class ABFENGEAJNE___OpenCustomScreenBlock_d__11 : public ::System::Object
	{
	public:
		::RPG::Client::FiveDimModule* _fiveDimModule_5__2; // 0x10
		::ABFENGEAJNE* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABFENGEAJNE___OPENCUSTOMSCREENBLOCK_D__11_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE___OPENCUSTOMSCREENBLOCK_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE___OPENCUSTOMSCREENBLOCK_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE___OPENCUSTOMSCREENBLOCK_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE___OPENCUSTOMSCREENBLOCK_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE___OPENCUSTOMSCREENBLOCK_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
