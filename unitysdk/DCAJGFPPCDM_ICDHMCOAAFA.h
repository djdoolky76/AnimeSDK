#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class HEKHCLACHJE;
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define DCAJGFPPCDM_ICDHMCOAAFA_CTOR_OFFSET UNITYSDK_OFFSET(0xE2310F0)
#define DCAJGFPPCDM_ICDHMCOAAFA_GET_REACHEDTARGETS_OFFSET UNITYSDK_OFFSET(0xE2310D0)
#define DCAJGFPPCDM_ICDHMCOAAFA_GET_VALUES_OFFSET UNITYSDK_OFFSET(0xE2310B0)
#define DCAJGFPPCDM_ICDHMCOAAFA_SET_REACHEDTARGETS_OFFSET UNITYSDK_OFFSET(0xE2310E0)
#define DCAJGFPPCDM_ICDHMCOAAFA_SET_VALUES_OFFSET UNITYSDK_OFFSET(0xE2310C0)

inline static constexpr unsigned int DCAJGFPPCDM_ICDHMCOAAFA_TypeDefinitionIndex = 79799;

	class DCAJGFPPCDM_ICDHMCOAAFA : public ::System::Object
	{
	public:
		::HEKHCLACHJE* _Values_k__BackingField; // 0x10
		::System::Collections::Immutable::IImmutableSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* _ReachedTargets_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAJGFPPCDM_ICDHMCOAAFA_CTOR_OFFSET))(this);
		}

		::HEKHCLACHJE* get_Values()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAJGFPPCDM_ICDHMCOAAFA_GET_VALUES_OFFSET))(this);
		}

		::System::Void set_Values(::HEKHCLACHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + DCAJGFPPCDM_ICDHMCOAAFA_SET_VALUES_OFFSET))(this, a1);
		}

		::System::Collections::Immutable::IImmutableSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* get_ReachedTargets()
		{
			return ((::System::Collections::Immutable::IImmutableSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAJGFPPCDM_ICDHMCOAAFA_GET_REACHEDTARGETS_OFFSET))(this);
		}

		::System::Void set_ReachedTargets(::System::Collections::Immutable::IImmutableSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>*))((::PBYTE)hIl2Cpp + DCAJGFPPCDM_ICDHMCOAAFA_SET_REACHEDTARGETS_OFFSET))(this, a1);
		}

	};
