#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class HEKHCLACHJE;
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define IBAPNEEMJJC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E1BB30)
#define IBAPNEEMJJC_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x15E1BB20)
#define IBAPNEEMJJC_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0x15E1BB10)

inline static constexpr unsigned int IBAPNEEMJJC_TypeDefinitionIndex = 79800;

	class IBAPNEEMJJC : public ::System::Object
	{
	public:
		::HEKHCLACHJE* _Delta_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>* _Targets_k__BackingField; // 0x18
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a1, ::HEKHCLACHJE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>*, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + IBAPNEEMJJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>* get_Targets()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAPNEEMJJC_GET_TARGETS_OFFSET))(this);
		}

		::HEKHCLACHJE* get_Delta()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAPNEEMJJC_GET_DELTA_OFFSET))(this);
		}

	};
