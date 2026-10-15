#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOMOGGFKHFL.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/ValueTuple_2.h"
class FHPMJLMOMFL;
class GEMBPMMMGBP;
class PPANCJJBAGL;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

#define LIICPMNHBPP_AJMGMCPCGFF_OFFSET UNITYSDK_OFFSET(0xB6CB950)
#define LIICPMNHBPP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB6CAC70)
#define LIICPMNHBPP_CTOR_OFFSET UNITYSDK_OFFSET(0xB6CACF0)
#define LIICPMNHBPP_DJLJEKCKLID_OFFSET UNITYSDK_OFFSET(0xB6CBD70)
#define LIICPMNHBPP_GDGIDJNGDKP_OFFSET UNITYSDK_OFFSET(0xB6CB340)
#define LIICPMNHBPP_GET__MAX_DFS_COUNT_OFFSET UNITYSDK_OFFSET(0xB6CAC60)
#define LIICPMNHBPP_HGFMHGPIJFJ_OFFSET UNITYSDK_OFFSET(0xB6CAF80)
#define LIICPMNHBPP_JBCDKPCFGPP_OFFSET UNITYSDK_OFFSET(0xB6CB5E0)
#define LIICPMNHBPP_JOKOJFMPCJI_OFFSET UNITYSDK_OFFSET(0xB6CBD00)
#define LIICPMNHBPP_NCGCEKIGKBD_OFFSET UNITYSDK_OFFSET(0xB6CB020)

inline static constexpr unsigned int LIICPMNHBPP_TypeDefinitionIndex = 66898;

	class LIICPMNHBPP : public ::GOMOGGFKHFL
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>*>* LMPNNEPFHIO; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PPANCJJBAGL*>* IKGMBOFODPD; // 0x20
		::System::UInt32 KMFBBJGBPFA; // 0x28
		::System::UInt32 __MAX_DFS_COUNT_k__BackingField; // 0x2C
		::System::UInt32 JHJMCFNGMEH; // 0x30
		::System::UInt32 PFPDCGKODOO; // 0x34
		// static const ::System::Object CKLDHFFCEHO; // 0x0
		::System::Void _ctor(::FHPMJLMOMFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHPMJLMOMFL*))((::PBYTE)hIl2Cpp + LIICPMNHBPP_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get__MAX_DFS_COUNT()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIICPMNHBPP_GET__MAX_DFS_COUNT_OFFSET))(this);
		}

		static ::GEMBPMMMGBP* BPLPBPMEODA(::FHPMJLMOMFL* a1)
		{
			return ((::GEMBPMMMGBP*(*)(::FHPMJLMOMFL*))((::PBYTE)hIl2Cpp + LIICPMNHBPP_BPLPBPMEODA_OFFSET))(a1);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* HGFMHGPIJFJ()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIICPMNHBPP_HGFMHGPIJFJ_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* NCGCEKIGKBD(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + LIICPMNHBPP_NCGCEKIGKBD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>* GDGIDJNGDKP(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + LIICPMNHBPP_GDGIDJNGDKP_OFFSET))(this, a1);
		}

		::System::Void JBCDKPCFGPP(::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>* a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + LIICPMNHBPP_JBCDKPCFGPP_OFFSET))(this, a1, a2);
		}

		::System::Void AJMGMCPCGFF(::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>*))((::PBYTE)hIl2Cpp + LIICPMNHBPP_AJMGMCPCGFF_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* JOKOJFMPCJI()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIICPMNHBPP_JOKOJFMPCJI_OFFSET))(this);
		}

		::System::Boolean DJLJEKCKLID(::System::Int32 a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a2, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + LIICPMNHBPP_DJLJEKCKLID_OFFSET))(this, a1, a2, a3);
		}

	};
