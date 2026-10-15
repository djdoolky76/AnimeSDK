#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class ACHNEAMCCEC;
class GGBEEJNPPOP;
class NDCLBAKBEIP;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define HIDDJGKBEBC_NHFNCBMGABG_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD43D0)
#define HIDDJGKBEBC_NHFNCBMGABG_EPBIHGNFANB_OFFSET UNITYSDK_OFFSET(0x15CD43E0)
#define HIDDJGKBEBC_NHFNCBMGABG_MKBAFGPDDEF_OFFSET UNITYSDK_OFFSET(0x15CD4550)

inline static constexpr unsigned int HIDDJGKBEBC_NHFNCBMGABG_TypeDefinitionIndex = 79592;

	class HIDDJGKBEBC_NHFNCBMGABG : public ::System::Object
	{
	public:
		::GGBEEJNPPOP* LLOCADHAALJ; // 0x10
		::NDCLBAKBEIP* NEADLJNICHM; // 0x18
		::System::Void _ctor(::NDCLBAKBEIP* a1, ::GGBEEJNPPOP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDCLBAKBEIP*, ::GGBEEJNPPOP*))((::PBYTE)hIl2Cpp + HIDDJGKBEBC_NHFNCBMGABG_CTOR_OFFSET))(this, a1, a2);
		}

		::ACHNEAMCCEC* EPBIHGNFANB(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::System::Int32 a2)
		{
			return ((::ACHNEAMCCEC*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32))((::PBYTE)hIl2Cpp + HIDDJGKBEBC_NHFNCBMGABG_EPBIHGNFANB_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::ACHNEAMCCEC*>* MKBAFGPDDEF(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::ACHNEAMCCEC*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>*))((::PBYTE)hIl2Cpp + HIDDJGKBEBC_NHFNCBMGABG_MKBAFGPDDEF_OFFSET))(this, a1);
		}

	};
