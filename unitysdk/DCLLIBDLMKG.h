#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define DCLLIBDLMKG_CTOR_OFFSET UNITYSDK_OFFSET(0xE2508A0)
#define DCLLIBDLMKG_ILAPNHCEMJF_OFFSET UNITYSDK_OFFSET(0xE250A80)
#define DCLLIBDLMKG_LMNPPAMFNEJ_OFFSET UNITYSDK_OFFSET(0xE2508B0)

inline static constexpr unsigned int DCLLIBDLMKG_TypeDefinitionIndex = 66112;

	class DCLLIBDLMKG : public ::System::Object
	{
	public:
		::RPG::Client::MissionChronicleBasePathData* DDPCPAHNLCL; // 0x10
		::System::Void _ctor(::RPG::Client::MissionChronicleBasePathData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + DCLLIBDLMKG_CTOR_OFFSET))(this, a1);
		}

		::System::Void LMNPPAMFNEJ(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DCLLIBDLMKG_LMNPPAMFNEJ_OFFSET))(this, a1, a2);
		}

		::System::Void ILAPNHCEMJF(::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + DCLLIBDLMKG_ILAPNHCEMJF_OFFSET))(this, a1);
		}

	};
