#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"
class BKCGMKLGCGB;
class PBIPFMHIGHO;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF13D0)
#define PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBFF1490)
#define PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IAVATARUPGRADEMAPPER__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBFF1730)
#define PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IAVATARUPGRADEMAPPER__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBFF16C0)
#define PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBFF1790)
#define PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBFF1720)
#define PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBFF16D0)
#define PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFF1470)
#define PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xBFF1480)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class PBIPFMHIGHO___GetMappersByParts_d__7 : public ::System::Object
	{
	public:
		::BKCGMKLGCGB* __2__current; // 0x10
		::PBIPFMHIGHO* __4__this; // 0x18
		::System::Object* __7__wrap1; // 0x20
		::System::Byte _padding0[0x28];
		::RPG::Client::AvatarUpgradePart __3__parts; // 0x50
		::System::Int32 __1__state; // 0x54
		::System::Int32 __l__initialThreadId; // 0x58
		::RPG::Client::AvatarUpgradePart parts; // 0x5C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7___M__FINALLY1_OFFSET))(this);
		}

		::BKCGMKLGCGB* System_Collections_Generic_IEnumerator_RPG_Client_IAvatarUpgradeMapper__get_Current()
		{
			return ((::BKCGMKLGCGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IAVATARUPGRADEMAPPER__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::BKCGMKLGCGB*>* System_Collections_Generic_IEnumerable_RPG_Client_IAvatarUpgradeMapper__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::BKCGMKLGCGB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IAVATARUPGRADEMAPPER__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIPFMHIGHO___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
