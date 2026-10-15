#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class ACHNEAMCCEC;
class GGBEEJNPPOP;
class NDCLBAKBEIP;
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define HIDDJGKBEBC_NHFNCBMGABG_CTOR_OFFSET UNITYSDK_OFFSET(0x15CE0E10)
#define HIDDJGKBEBC_NHFNCBMGABG_EPBIHGNFANB_OFFSET UNITYSDK_OFFSET(0x15CE0E20)
#define HIDDJGKBEBC_NHFNCBMGABG_MKBAFGPDDEF_OFFSET UNITYSDK_OFFSET(0x15CE0F90)

inline static constexpr unsigned int HIDDJGKBEBC_NHFNCBMGABG_TypeDefinitionIndex = 79593;

	class HIDDJGKBEBC_NHFNCBMGABG : public ::System::Object
	{
	public:
		::NDCLBAKBEIP* NEADLJNICHM; // 0x10
		::GGBEEJNPPOP* LLOCADHAALJ; // 0x18
		::System::Void _ctor(::NDCLBAKBEIP* a1, ::GGBEEJNPPOP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDCLBAKBEIP*, ::GGBEEJNPPOP*))((::PBYTE)hIl2Cpp + HIDDJGKBEBC_NHFNCBMGABG_CTOR_OFFSET))(this, a1, a2);
		}

		::ACHNEAMCCEC* EPBIHGNFANB(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::System::Int32 a2)
		{
			return ((::ACHNEAMCCEC*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32))((::PBYTE)hIl2Cpp + HIDDJGKBEBC_NHFNCBMGABG_EPBIHGNFANB_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::ACHNEAMCCEC*>* MKBAFGPDDEF(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair*>* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::ACHNEAMCCEC*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair*>*))((::PBYTE)hIl2Cpp + HIDDJGKBEBC_NHFNCBMGABG_MKBAFGPDDEF_OFFSET))(this, a1);
		}

	};
