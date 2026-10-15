#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKLBEPJCBJG.h"
#include "unitysdk/System/Object.h"
class DGHEDDKAKOF;
class EGFIGBODMHI;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD1F5D0)
#define DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CD1F610)
#define DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_STAGEPREFABINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CD1FC10)
#define DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_STAGEPREFABINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CD1FB80)
#define DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CD1FC90)
#define DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CD1FBE0)
#define DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CD1FB90)
#define DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CD1F600)

inline static constexpr unsigned int DGHEDDKAKOF__GetStagePrefabInfoList_d__37_TypeDefinitionIndex = 10680;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37>
	class DGHEDDKAKOF__GetStagePrefabInfoList_d__37 : public ::System::Object
	{
	public:
		::DGHEDDKAKOF* __4__this; // 0x10
		::EGFIGBODMHI* _cell_5__2; // 0x18
		::OKLBEPJCBJG __2__current; // 0x20
		::System::Int32 filter; // 0x30
		::System::Int32 __l__initialThreadId; // 0x34
		::System::Int32 __3__filter; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Int32 _i_5__3; // 0x40
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_MOVENEXT_OFFSET))(this);
		}

		::OKLBEPJCBJG System_Collections_Generic_IEnumerator_RPG_GameCore_StagePrefabInfo__get_Current()
		{
			return ((::OKLBEPJCBJG(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_STAGEPREFABINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::OKLBEPJCBJG>* System_Collections_Generic_IEnumerable_RPG_GameCore_StagePrefabInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::OKLBEPJCBJG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_STAGEPREFABINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHEDDKAKOF__GETSTAGEPREFABINFOLIST_D__37_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
