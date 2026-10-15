#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class BHHPHPGCODJ;
class GGBEEJNPPOP;
class NDCLBAKBEIP;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define BHHPHPGCODJ_LCKIEFNMIBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB487040)
#define BHHPHPGCODJ_LCKIEFNMIBJ_EPBIHGNFANB_OFFSET UNITYSDK_OFFSET(0xB487050)
#define BHHPHPGCODJ_LCKIEFNMIBJ_MKBAFGPDDEF_OFFSET UNITYSDK_OFFSET(0xB487160)

inline static constexpr unsigned int BHHPHPGCODJ_LCKIEFNMIBJ_TypeDefinitionIndex = 79426;

	class BHHPHPGCODJ_LCKIEFNMIBJ : public ::System::Object
	{
	public:
		::NDCLBAKBEIP* NEADLJNICHM; // 0x10
		::GGBEEJNPPOP* LLOCADHAALJ; // 0x18
		::System::Void _ctor(::NDCLBAKBEIP* a1, ::GGBEEJNPPOP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDCLBAKBEIP*, ::GGBEEJNPPOP*))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_LCKIEFNMIBJ_CTOR_OFFSET))(this, a1, a2);
		}

		::BHHPHPGCODJ* EPBIHGNFANB(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::System::Int32 a2)
		{
			return ((::BHHPHPGCODJ*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_LCKIEFNMIBJ_EPBIHGNFANB_OFFSET))(this, a1, a2);
		}

		::ObservableCollections::ObservableList_1<::BHHPHPGCODJ*>* MKBAFGPDDEF(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>* a1)
		{
			return ((::ObservableCollections::ObservableList_1<::BHHPHPGCODJ*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>*))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_LCKIEFNMIBJ_MKBAFGPDDEF_OFFSET))(this, a1);
		}

	};
