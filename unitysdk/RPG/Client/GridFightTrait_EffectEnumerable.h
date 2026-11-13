#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTrait_EffectEnumerator.h"
namespace RPG::Client { class IGridFightTraitEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAIT_EFFECTENUMERABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define RPG_CLIENT_GRIDFIGHTTRAIT_EFFECTENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x3EFBBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrait_EffectEnumerable_TypeDefinitionIndex = 67322;

	struct alignas(8) GridFightTrait_EffectEnumerable
	{
		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>* _Effects; // 0x10
		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_EFFECTENUMERABLE_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTrait_EffectEnumerator GetEnumerator()
		{
			return ((::RPG::Client::GridFightTrait_EffectEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_EFFECTENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
}
