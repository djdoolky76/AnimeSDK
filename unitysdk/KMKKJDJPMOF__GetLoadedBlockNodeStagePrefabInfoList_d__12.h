#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKLBEPJCBJG.h"
#include "unitysdk/System/Object.h"
class KMKKJDJPMOF;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_CTOR_OFFSET UNITYSDK_OFFSET(0xB560CB0)
#define KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB564DA0)
#define KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_STAGEPREFABINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB5656B0)
#define KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_STAGEPREFABINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB565620)
#define KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB565720)
#define KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB565680)
#define KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB565630)
#define KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB564B30)
#define KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xB564BA0)
#define KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xB564CA0)

inline static constexpr unsigned int KMKKJDJPMOF__GetLoadedBlockNodeStagePrefabInfoList_d__12_TypeDefinitionIndex = 69502;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
	class KMKKJDJPMOF__GetLoadedBlockNodeStagePrefabInfoList_d__12 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::OKLBEPJCBJG>* _overlayEnumerator_5__2; // 0x10
		::OKLBEPJCBJG __2__current; // 0x18
		::KMKKJDJPMOF* __4__this; // 0x28
		::RPG::GameCore::BlockNodeConfig* __3__blockNodeConfig; // 0x30
		::RPG::GameCore::BlockNodeConfig* blockNodeConfig; // 0x38
		::System::Collections::Generic::IEnumerator_1<::OKLBEPJCBJG>* _sharedEnumerator_5__3; // 0x40
		::System::Collections::Generic::IEnumerator_1<::OKLBEPJCBJG>* __7__wrap3; // 0x48
		::System::Int32 __3__filter; // 0x50
		::System::Int32 __1__state; // 0x54
		::System::Int32 __l__initialThreadId; // 0x58
		::System::Int32 filter; // 0x5C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12___M__FINALLY2_OFFSET))(this);
		}

		::OKLBEPJCBJG System_Collections_Generic_IEnumerator_RPG_GameCore_StagePrefabInfo__get_Current()
		{
			return ((::OKLBEPJCBJG(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_STAGEPREFABINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::OKLBEPJCBJG>* System_Collections_Generic_IEnumerable_RPG_GameCore_StagePrefabInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::OKLBEPJCBJG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_STAGEPREFABINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF__GETLOADEDBLOCKNODESTAGEPREFABINFOLIST_D__12_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
