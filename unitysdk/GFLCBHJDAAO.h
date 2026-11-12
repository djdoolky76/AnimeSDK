#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class AAFIACIMMHE;
class HEKHCLACHJE;
class KFGGDNIGKGG;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GFLCBHJDAAO_ADD_HINTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x16935780)
#define GFLCBHJDAAO_CTOR_OFFSET UNITYSDK_OFFSET(0x16935840)
#define GFLCBHJDAAO_GET_ATTRIBUTELEVELUPRULE_OFFSET UNITYSDK_OFFSET(0x16935680)
#define GFLCBHJDAAO_GET_CURRENTATTRIBUTEVALUES_OFFSET UNITYSDK_OFFSET(0x169356C0)
#define GFLCBHJDAAO_GET_CUSTOMATTRIBUTESTATES_OFFSET UNITYSDK_OFFSET(0x16935740)
#define GFLCBHJDAAO_GET_EXCESSTHRESHOLDPERCENT_OFFSET UNITYSDK_OFFSET(0x16935720)
#define GFLCBHJDAAO_GET_SHOULDEMPHASIZENONTARGETWRONGLYPEAKED_OFFSET UNITYSDK_OFFSET(0x169356E0)
#define GFLCBHJDAAO_GET_SORTEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x16935660)
#define GFLCBHJDAAO_GET_TARGETATTRIBUTELEVELS_OFFSET UNITYSDK_OFFSET(0x169356A0)
#define GFLCBHJDAAO_REMOVE_HINTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x169357E0)
#define GFLCBHJDAAO_SET_ATTRIBUTELEVELUPRULE_OFFSET UNITYSDK_OFFSET(0x16935690)
#define GFLCBHJDAAO_SET_CURRENTATTRIBUTEVALUES_OFFSET UNITYSDK_OFFSET(0x169356D0)
#define GFLCBHJDAAO_SET_EXCESSTHRESHOLDPERCENT_OFFSET UNITYSDK_OFFSET(0x16935730)
#define GFLCBHJDAAO_SET_SORTEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x16935670)
#define GFLCBHJDAAO_SET_TARGETATTRIBUTELEVELS_OFFSET UNITYSDK_OFFSET(0x169356B0)

inline static constexpr unsigned int GFLCBHJDAAO_TypeDefinitionIndex = 82513;

	class GFLCBHJDAAO : public ::System::Object
	{
	public:
		::HEKHCLACHJE* _CurrentAttributeValues_k__BackingField; // 0x10
		::AAFIACIMMHE* _AttributeLevelUpRule_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::KFGGDNIGKGG*>* _SortedAttributes_k__BackingField; // 0x20
		::System::Action* HintValueChanged; // 0x28
		::HEKHCLACHJE* _TargetAttributeLevels_k__BackingField; // 0x30
		::System::Int32 _ExcessThresholdPercent_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCBHJDAAO_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KFGGDNIGKGG*>* get_SortedAttributes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KFGGDNIGKGG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCBHJDAAO_GET_SORTEDATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_SortedAttributes(::System::Collections::Generic::IReadOnlyList_1<::KFGGDNIGKGG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::KFGGDNIGKGG*>*))((::PBYTE)hIl2Cpp + GFLCBHJDAAO_SET_SORTEDATTRIBUTES_OFFSET))(this, a1);
		}

		::AAFIACIMMHE* get_AttributeLevelUpRule()
		{
			return ((::AAFIACIMMHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCBHJDAAO_GET_ATTRIBUTELEVELUPRULE_OFFSET))(this);
		}

		::System::Void set_AttributeLevelUpRule(::AAFIACIMMHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAFIACIMMHE*))((::PBYTE)hIl2Cpp + GFLCBHJDAAO_SET_ATTRIBUTELEVELUPRULE_OFFSET))(this, a1);
		}

		::HEKHCLACHJE* get_TargetAttributeLevels()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCBHJDAAO_GET_TARGETATTRIBUTELEVELS_OFFSET))(this);
		}

		::System::Void set_TargetAttributeLevels(::HEKHCLACHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + GFLCBHJDAAO_SET_TARGETATTRIBUTELEVELS_OFFSET))(this, a1);
		}

		::HEKHCLACHJE* get_CurrentAttributeValues()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCBHJDAAO_GET_CURRENTATTRIBUTEVALUES_OFFSET))(this);
		}

		::System::Void set_CurrentAttributeValues(::HEKHCLACHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + GFLCBHJDAAO_SET_CURRENTATTRIBUTEVALUES_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldEmphasizeNonTargetWronglyPeaked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCBHJDAAO_GET_SHOULDEMPHASIZENONTARGETWRONGLYPEAKED_OFFSET))(this);
		}

		::System::Int32 get_ExcessThresholdPercent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCBHJDAAO_GET_EXCESSTHRESHOLDPERCENT_OFFSET))(this);
		}

		::System::Void set_ExcessThresholdPercent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GFLCBHJDAAO_SET_EXCESSTHRESHOLDPERCENT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Object*>* get_CustomAttributeStates()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCBHJDAAO_GET_CUSTOMATTRIBUTESTATES_OFFSET))(this);
		}

		::System::Void add_HintValueChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GFLCBHJDAAO_ADD_HINTVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_HintValueChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GFLCBHJDAAO_REMOVE_HINTVALUECHANGED_OFFSET))(this, a1);
		}

	};
