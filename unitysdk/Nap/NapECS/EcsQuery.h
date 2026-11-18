#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/QueryMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"

namespace Nap::NapECS { class EcsArchetype; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAP_NAPECS_ECSQUERY_ADDARCHETYPE_OFFSET UNITYSDK_OFFSET(0x1CE0D160)
#define NAP_NAPECS_ECSQUERY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CE0D240)
#define NAP_NAPECS_ECSQUERY_GET_ARCHETYPES_OFFSET UNITYSDK_OFFSET(0x1CE0CE90)
#define NAP_NAPECS_ECSQUERY_GET_NEEDREADY_OFFSET UNITYSDK_OFFSET(0x1CE0CE80)
#define NAP_NAPECS_ECSQUERY_ISCOMPATIBLEWITH_OFFSET UNITYSDK_OFFSET(0x1CE0D030)
#define NAP_NAPECS_ECSQUERY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0CEA0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsQuery_TypeDefinitionIndex = 35946;

	class EcsQuery : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::Nap::NapECS::EcsArchetype*>* _archetypeSet; // 0x10
		::Nap::NapECS::EcsWorld* _worldRef; // 0x18
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsArchetype*>* _archetypes; // 0x20
		::Nap::NapECS::QueryMask _queryMask; // 0x28
		::System::Boolean _hasAsyncComp; // 0xB0

		::System::Void _ctor(::Nap::NapECS::EcsWorld* world, ::Nap::NapECS::QueryMask queryMask)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::Nap::NapECS::QueryMask))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSQUERY__CTOR_OFFSET))(this, world, queryMask);
		}

		::System::Boolean get_NeedReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSQUERY_GET_NEEDREADY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Nap::NapECS::EcsArchetype*>* get_Archetypes()
		{
			return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsArchetype*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSQUERY_GET_ARCHETYPES_OFFSET))(this);
		}

		::System::Boolean IsCompatibleWith(::Nap::NapECS::ComponentMask& mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSQUERY_ISCOMPATIBLEWITH_OFFSET))(this, mask);
		}

		::System::Void AddArchetype(::Nap::NapECS::EcsArchetype* archetype)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsArchetype*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSQUERY_ADDARCHETYPE_OFFSET))(this, archetype);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSQUERY_DISPOSE_OFFSET))(this);
		}
	};
}
