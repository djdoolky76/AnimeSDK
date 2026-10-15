#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class HEKHCLACHJE;
class IAJGGEMFOMB;
class JKNBKEHFJJC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIGPGHCDBOE_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xB1F4850)
#define JIGPGHCDBOE_ADD_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xB1F4680)
#define JIGPGHCDBOE_CTOR_OFFSET UNITYSDK_OFFSET(0xB1F4760)
#define JIGPGHCDBOE_EBCALPMCMIK_OFFSET UNITYSDK_OFFSET(0xB1F44E0)
#define JIGPGHCDBOE_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xB1F47F0)
#define JIGPGHCDBOE_FPIFOGODCCF_OFFSET UNITYSDK_OFFSET(0xB1F4460)
#define JIGPGHCDBOE_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xB1F4740)
#define JIGPGHCDBOE_HNFMCMFJOLC_OFFSET UNITYSDK_OFFSET(0xB1F48E0)
#define JIGPGHCDBOE_KHDKKKNHOMA_OFFSET UNITYSDK_OFFSET(0xB1F44A0)
#define JIGPGHCDBOE_REMOVE_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xB1F46E0)
#define JIGPGHCDBOE_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0xB1F4750)

inline static constexpr unsigned int JIGPGHCDBOE_TypeDefinitionIndex = 79801;

	class JIGPGHCDBOE : public ::System::Object
	{
	public:
		::IAJGGEMFOMB* _Source_k__BackingField; // 0x10
		::JKNBKEHFJJC* ANPAHODBCOB; // 0x18
		::System::Action* OnFinished; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::MechCraftAttributeType>* HGCNLFIMDKL; // 0x28
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a1, ::HEKHCLACHJE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>*, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + JIGPGHCDBOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>* FPIFOGODCCF()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGPGHCDBOE_FPIFOGODCCF_OFFSET))(this);
		}

		::HEKHCLACHJE* KHDKKKNHOMA()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGPGHCDBOE_KHDKKKNHOMA_OFFSET))(this);
		}

		::System::Boolean EBCALPMCMIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGPGHCDBOE_EBCALPMCMIK_OFFSET))(this);
		}

		::System::Void add_OnFinished(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JIGPGHCDBOE_ADD_ONFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnFinished(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JIGPGHCDBOE_REMOVE_ONFINISHED_OFFSET))(this, a1);
		}

		::IAJGGEMFOMB* get_Source()
		{
			return ((::IAJGGEMFOMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGPGHCDBOE_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::IAJGGEMFOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + JIGPGHCDBOE_SET_SOURCE_OFFSET))(this, a1);
		}

		::System::Void EGFCFCBHJJP(::HEKHCLACHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + JIGPGHCDBOE_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Boolean AALCFBOGFKP(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + JIGPGHCDBOE_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void HNFMCMFJOLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGPGHCDBOE_HNFMCMFJOLC_OFFSET))(this);
		}

	};
