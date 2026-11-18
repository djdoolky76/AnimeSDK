#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/QueryMask.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsWorld; }

#define NAP_NAPECS_QUERYMASKCREATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1CE22EF0)
#define NAP_NAPECS_QUERYMASKCREATOR_GET_OFFSET UNITYSDK_OFFSET(0x1CE22BE0)
#define NAP_NAPECS_QUERYMASKCREATOR_INCLUDE_OFFSET UNITYSDK_OFFSET(0x1CE22D00)
#define NAP_NAPECS_QUERYMASKCREATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE22F60)
#define NAP_NAPECS_QUERYMASKCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE22CF0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int QueryMaskCreator_TypeDefinitionIndex = 36034;

	class QueryMaskCreator : public ::System::Object
	{
	public:
		static ::Nap::NapECS::QueryMaskCreator** StaticGet__mainThreadCreator()
		{
			return (::Nap::NapECS::QueryMaskCreator**)Il2CppClass::FromTypeDefinitionIndex(QueryMaskCreator_TypeDefinitionIndex)->GetStaticField(0x2B780);
		}
		::Nap::NapECS::EcsWorld* _ecsWorld; // 0x10
		::Nap::NapECS::QueryMask _queryMask; // 0x18

		::System::Void _ctor(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NAP_NAPECS_QUERYMASKCREATOR__CTOR_OFFSET))(this, world);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_QUERYMASKCREATOR__CCTOR_OFFSET))();
		}

		static ::Nap::NapECS::QueryMaskCreator* Get(::Nap::NapECS::EcsWorld* world)
		{
			return ((::Nap::NapECS::QueryMaskCreator*(*)(::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NAP_NAPECS_QUERYMASKCREATOR_GET_OFFSET))(world);
		}

		::Nap::NapECS::QueryMaskCreator* Include(::Il2CppArray<::System::Int32>* typeIds)
		{
			return ((::Nap::NapECS::QueryMaskCreator*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_QUERYMASKCREATOR_INCLUDE_OFFSET))(this, typeIds);
		}

		::Nap::NapECS::QueryMask Create()
		{
			return ((::Nap::NapECS::QueryMask(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_QUERYMASKCREATOR_CREATE_OFFSET))(this);
		}
	};
}
