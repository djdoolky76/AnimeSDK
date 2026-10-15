#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"
class BDDAELGEKFF;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_CTOR_OFFSET UNITYSDK_OFFSET(0x162E1A20)
#define BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x162E5280)
#define BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x162E54D0)
#define BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x162E5460)
#define BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x162E5550)
#define BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x162E54C0)
#define BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x162E5470)
#define BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162E5260)
#define BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x162E5270)

inline static constexpr unsigned int BDDAELGEKFF__GetLayerPropertyProxies_d__19_TypeDefinitionIndex = 49448;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
	class BDDAELGEKFF__GetLayerPropertyProxies_d__19 : public ::System::Object
	{
	public:
		::System::String* __2__current; // 0x10
		::BDDAELGEKFF* __4__this; // 0x18
		::System::Object* __7__wrap1; // 0x20
		::System::Byte _padding0[0x10];
		::System::Int32 __l__initialThreadId; // 0x38
		::RPG::GameCore::EnviromentControlPriority p; // 0x3C
		::System::Int32 __1__state; // 0x40
		::RPG::GameCore::EnviromentControlPriority __3__p; // 0x44
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19___M__FINALLY1_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
