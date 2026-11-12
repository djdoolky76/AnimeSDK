#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_CTOR_OFFSET UNITYSDK_OFFSET(0x1D630160)
#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D630320)
#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D6306A0)
#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D630630)
#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D630720)
#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D630690)
#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D630640)
#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D630310)

inline static constexpr unsigned int LEIJDCFGOLB___UseLoadingSample_d__26_TypeDefinitionIndex = 42569;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
	class LEIJDCFGOLB___UseLoadingSample_d__26 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::AssetSystem::AssetLoader* __3__loader; // 0x18
		::RPG::Client::AssetSystem::AssetLoader* loader; // 0x20
		::System::Boolean isComponent; // 0x28
		::System::Boolean __3__isComponent; // 0x29
		::System::Byte _padding0[0x2];
		::System::Int32 __l__initialThreadId; // 0x2C
		::System::Int32 __1__state; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LEIJDCFGOLB___USELOADINGSAMPLE_D__26_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJDCFGOLB___USELOADINGSAMPLE_D__26_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
