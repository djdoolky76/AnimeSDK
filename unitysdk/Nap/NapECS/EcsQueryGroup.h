#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/QueryMask.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsQuery; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAP_NAPECS_ECSQUERYGROUP_COLLECTEXISTINGRELATEDARCHETYPES_OFFSET UNITYSDK_OFFSET(0x1CE0DF00)
#define NAP_NAPECS_ECSQUERYGROUP_DESTROY_OFFSET UNITYSDK_OFFSET(0x1CE0E1C0)
#define NAP_NAPECS_ECSQUERYGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CE0E210)
#define NAP_NAPECS_ECSQUERYGROUP_GETORCREATEQUERY_1_OFFSET UNITYSDK_OFFSET(0x1CE0E110)
#define NAP_NAPECS_ECSQUERYGROUP_GETORCREATEQUERY_OFFSET UNITYSDK_OFFSET(0x1CE0D4B0)
#define NAP_NAPECS_ECSQUERYGROUP_GET_COMPRELATEDQUERYMAP_OFFSET UNITYSDK_OFFSET(0x1CE0D320)
#define NAP_NAPECS_ECSQUERYGROUP_GET_QUERIES_OFFSET UNITYSDK_OFFSET(0x1CE0D310)
#define NAP_NAPECS_ECSQUERYGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0D330)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsQueryGroup_TypeDefinitionIndex = 36012;

	class EcsQueryGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsQuery*>*>* _compRelatedQueryMap; // 0x10
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsQuery*>* _queries; // 0x18
		::System::Collections::Generic::Dictionary_2<::Nap::NapECS::QueryMask, ::Nap::NapECS::EcsQuery*>* _queryMaskMap; // 0x20
		::Nap::NapECS::EcsWorld* _world; // 0x28

		::System::Void _ctor(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSQUERYGROUP__CTOR_OFFSET))(this, world);
		}

		::System::Collections::Generic::List_1<::Nap::NapECS::EcsQuery*>* get_Queries()
		{
			return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsQuery*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSQUERYGROUP_GET_QUERIES_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsQuery*>*>* get_CompRelatedQueryMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsQuery*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSQUERYGROUP_GET_COMPRELATEDQUERYMAP_OFFSET))(this);
		}

		::Nap::NapECS::EcsQuery* GetOrCreateQuery(::Nap::NapECS::QueryMask queryMask)
		{
			return ((::Nap::NapECS::EcsQuery*(*)(::PVOID, ::Nap::NapECS::QueryMask))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSQUERYGROUP_GETORCREATEQUERY_OFFSET))(this, queryMask);
		}

		::System::Void CollectExistingRelatedArchetypes(::Nap::NapECS::EcsQuery* query)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsQuery*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSQUERYGROUP_COLLECTEXISTINGRELATEDARCHETYPES_OFFSET))(this, query);
		}

		static ::Nap::NapECS::EcsQuery* GetOrCreateQuery_1(::Nap::NapECS::EcsWorld* world, ::Nap::NapECS::QueryMask queryMask)
		{
			return ((::Nap::NapECS::EcsQuery*(*)(::Nap::NapECS::EcsWorld*, ::Nap::NapECS::QueryMask))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSQUERYGROUP_GETORCREATEQUERY_1_OFFSET))(world, queryMask);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSQUERYGROUP_DESTROY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSQUERYGROUP_DISPOSE_OFFSET))(this);
		}
	};
}
