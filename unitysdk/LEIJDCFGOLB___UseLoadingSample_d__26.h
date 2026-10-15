#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_CTOR_OFFSET UNITYSDK_OFFSET(0x1C47DF70)
#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C47E130)
#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C47E4E0)
#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C47E470)
#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C47E560)
#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C47E4D0)
#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C47E480)
#define LEIJDCFGOLB___USELOADINGSAMPLE_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C47E120)

inline static constexpr unsigned int LEIJDCFGOLB___UseLoadingSample_d__26_TypeDefinitionIndex = 41594;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
	class LEIJDCFGOLB___UseLoadingSample_d__26 : public ::System::Object
	{
	public:
		::RPG::Client::AssetSystem::AssetLoader* loader; // 0x10
		::System::Object* __2__current; // 0x18
		::RPG::Client::AssetSystem::AssetLoader* __3__loader; // 0x20
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Boolean __3__isComponent; // 0x2C
		::System::Boolean isComponent; // 0x2D
		::System::Byte _padding0[0x2];
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
