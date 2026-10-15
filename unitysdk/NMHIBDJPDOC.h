#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace RPG::GameCore { class MissionCondition; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NMHIBDJPDOC_BACGAKIOCLJ_OFFSET UNITYSDK_OFFSET(0xBC84270)
#define NMHIBDJPDOC_CLEALMKJMML_OFFSET UNITYSDK_OFFSET(0xBC84200)
#define NMHIBDJPDOC_CTOR_OFFSET UNITYSDK_OFFSET(0xBC83490)
#define NMHIBDJPDOC_EAKKLHIPLMC_OFFSET UNITYSDK_OFFSET(0xBC84BC0)
#define NMHIBDJPDOC_ILAPNHCEMJF_OFFSET UNITYSDK_OFFSET(0xBC84000)
#define NMHIBDJPDOC_LMNPPAMFNEJ_OFFSET UNITYSDK_OFFSET(0xBC834A0)
#define NMHIBDJPDOC_MBENGGLHEHP_OFFSET UNITYSDK_OFFSET(0xBC85010)
#define NMHIBDJPDOC_NBOMBJHFKHA_OFFSET UNITYSDK_OFFSET(0xBC83810)

inline static constexpr unsigned int NMHIBDJPDOC_TypeDefinitionIndex = 66113;

	class NMHIBDJPDOC : public ::System::Object
	{
	public:
		::RPG::Client::MissionChronicleBasePathData* DDPCPAHNLCL; // 0x10
		::System::Void _ctor(::RPG::Client::MissionChronicleBasePathData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + NMHIBDJPDOC_CTOR_OFFSET))(this, a1);
		}

		::System::Void LMNPPAMFNEJ(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NMHIBDJPDOC_LMNPPAMFNEJ_OFFSET))(this, a1, a2);
		}

		::System::Void ILAPNHCEMJF(::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + NMHIBDJPDOC_ILAPNHCEMJF_OFFSET))(this, a1);
		}

		::System::Boolean CLEALMKJMML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHIBDJPDOC_CLEALMKJMML_OFFSET))(this);
		}

		static ::System::Void NBOMBJHFKHA(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NMHIBDJPDOC_NBOMBJHFKHA_OFFSET))(a1, a2);
		}

		static ::System::Void BACGAKIOCLJ(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>* a1, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::MissionCondition*>*, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + NMHIBDJPDOC_BACGAKIOCLJ_OFFSET))(a1, a2);
		}

		static ::System::Void EAKKLHIPLMC(::System::UInt32 a1, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + NMHIBDJPDOC_EAKKLHIPLMC_OFFSET))(a1, a2);
		}

		static ::System::Boolean MBENGGLHEHP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NMHIBDJPDOC_MBENGGLHEHP_OFFSET))(a1);
		}

	};
