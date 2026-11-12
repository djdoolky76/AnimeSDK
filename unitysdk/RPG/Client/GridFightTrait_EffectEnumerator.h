#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class IGridFightTraitEffect; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAIT_EFFECTENUMERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xF5920)
#define RPG_CLIENT_GRIDFIGHTTRAIT_EFFECTENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF59A0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_EFFECTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEAC60)
#define RPG_CLIENT_GRIDFIGHTTRAIT_EFFECTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF5990)
#define RPG_CLIENT_GRIDFIGHTTRAIT_EFFECTENUMERATOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEAC70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrait_EffectEnumerator_TypeDefinitionIndex = 67323;

	struct alignas(8) GridFightTrait_EffectEnumerator
	{
		::System::Object* _Effects; // 0x10
		::System::Byte _padding0[0x10];
		::System::Object* _SubList; // 0x28
		::System::Byte _padding1[0x10];
		::System::Collections::Generic::IEnumerator_1<::RPG::Client::IGridFightTraitEffect*>* _SubEnumerator; // 0x40
		::System::Boolean _HasSubList; // 0x48
		::System::Boolean _CheckSubEffects; // 0x49
		::System::Byte _padding2[0x6];
		::RPG::Client::IGridFightTraitEffect* _Current_k__BackingField; // 0x50
		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_EFFECTENUMERATOR_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::IGridFightTraitEffect* get_Current()
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_EFFECTENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void set_Current(::RPG::Client::IGridFightTraitEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGridFightTraitEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_EFFECTENUMERATOR_SET_CURRENT_OFFSET))(this, a1);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_EFFECTENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_EFFECTENUMERATOR_DISPOSE_OFFSET))(this);
		}

	};
}
